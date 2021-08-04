# Getting Started
C is a programming language developed at AT & T's Bell Laboratories of USA in 1972 by Dennis Ritchie.
## Constants of C
C constants are of two categories:
* Primary Constants
* Secondary Constants
## Primary constants
### Integer Constants
* Integer constant should atleast have one digit and should not contain decimal point.
* Integer constant can be zero, postive or negative. If no sign is mentioned before integer, it is assumed as positive.
* No commas or blanks allowed in integer constants.
* The range of integer constants depends on the compiler used.
#### Examples
      2, -647, 0
### Real Constants
Real constents are also called as Floating point numbers. Real constants can be written in fractional form and exponential form.
* Real constants must have at least one digit and a decimal point.
* It can be positive or negative. Default sign is positive.
* No commas or blanks are allowed in Real Constants.
#### Examples
         1.98 -344.845 3.24e7
### Character constants 
* Character constant is an alphabhet, a digit or a symbol.
* Character Constant should be enclosed in single inverted commas.
#### Examples
         'a' '34' '%'
## Variables of C
Data stored in a variable can be changed at any time. Particular kind of variable takes only particular kind of data. So declaration of variable is must.
### Type declaration 
     int age; (For integers)
     float s_p; (For floating point numbers)
     char name1; (For characters)
* A variable name can contain alphabets, digits and underscores.
* Variable names can only start with alphabet or underscore(_).
* Keywords cannot be used as variable name.
## Comments
Comments are used to increase readability of code and to mention the purpose of a statement. Comments are optional.We can add comments anywhere in a program.
### Comments are written as
      // Single line comment
      /* Multiple 
         line
         comment */
## main()
main() is a library function. It contains all the statements of the program and statements must be written in pair of braces {}. main() function always returns integer value.
## printf()
printf() is used to print outputs. #include<stdio.h> is necessary at the beginning to use printf().
### General form of printf()
      printf("Enter integer : %d",n);
### Format specifiers
      %d for integers
      %f for floating point numbers
      %c for characters
## Scanf()
scanf() is used to give input from the keyboard.
### scanf() is used as
      printf("Enter value of n : ");
      scanf("%d",&n);
[Programs](https://github.com/MakineediJahnavi/Learning-C/tree/main/CHAPTER-1)

