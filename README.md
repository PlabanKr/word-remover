# WORD REMOVER

This is a word remover. This program takes one word from the use that needs to be removed from a file and then takes the filename and output file name.

## Compile

There are a lot of compiler options for C++.
In the following example I will be using `GNU Compiler Collection`

1. Open command prompt or terminal in the root of the project then run this following command. This will create an executable file named `main`.
```bash
g++ main.cpp -o main
```
2. Create a `txt` file with some content!
3. Then decide which word you want to remove from the file and run the executable like shown in the example. In the example I want to remove 'python' from a file called 'best_programming_languages.txt'.
```bash
./main python best_programming_languages.txt
```
4. Optionally you can also pass the output file name.
```bash
./main python best_programming_languages.txt only_best_programming_languages.txt
```

## Why I build this project?

I mainly work on javascript and javascript frameworks like React, Next.js, Express.js. But I have never tried building projects with C++ so as a starting project with C++ I have build this project :)