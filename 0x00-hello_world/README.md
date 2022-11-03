This README is for the 0x00-hello_world project

File: 0-preprocessor has a script that runs a C file through the preprocessor and saves the result into another file
The C file name is saved in the variable $CFILE. The output is saved in the file c.

File 1-compiler has a script that compiles a C file but does not link. The C file name is saved in the variable $CFILE. The output file is named the same as the C file, but with an extension .0 instead of .c.

File 2-assembler has a script that generates the assembly code of a C code and saves it in an output file. The C file name is saved in the variable $CFILE. The output file is named the same as the C file, but with an extension .s instead of .c.

File 3-name has a script that compiles a C file and creates an executable named cisfun. The C file name is saved in the variable $CFILE.

File 4-puts.c has a program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line. Puts is the function used because the use of printf is not allowed. The program ends with value 0. 

File 5-printf.c has a program that prints exactly with proper grammar, but the outcome is a piece of art, followed by a new line. It uses the printf function because the use of puts is not allowed. The program returns 0 and it is compiled without warning when using the -Wall gcc option.

File 6-size.c has a program that prints the size of various types on the computer it is compiled and run on. It produces the exact same output as in the example. Warnings are allowed and the program returns 0. 

File 100-intel has a script that generates the assembly code (Intel syntax) of a C code and saves it in an input file. The C file name is saved in the variable $CFILE. The output is named the same as the C file, but with the extension .s instead of .c.

File 101-quote.c has a program that prints and that piece of art is useful - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
