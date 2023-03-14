#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    // std::cout << "first argument: " << argv[1] << std::endl;
    // std::cout << "second argument: " << argv[2] << std::endl;
    // std::cout << "third argument: " << argv[3] << std::endl;
    // std::cout << "Number of arguments: " << argc << std::endl;

    std::fstream reader;
    std::fstream writer;

    // Open the target file
    // File location is the second argument
    reader.open(argv[2], std::ios::in);

    // Check if the file exists
    if (!reader)
        std::cout << "File does not exist\n";
    else
    {
        // Check if the output file name is provided in the third argument
        std::string output_file;
        if (argc <= 3)
            output_file = "output.txt";
        else
            output_file = argv[3];

        // Open the output file
        writer.open(output_file, std::ios::out);

        // Copy contents of the file to the output file, skipping words that match the first argument
        std::string word;
        while (reader >> word)
        {
            // std::cout << word << std::endl;
            if (word != argv[1]) // word does not match first argument
            {
                writer << word << " "; // write the word to the output file
            }
        }
    }

    reader.close();
    writer.close();

    return 0;
}
