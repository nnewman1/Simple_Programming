// A collection of simple tutorials covering all the basics of programming in the C language
// To compile this file with the terminal the command is 'gcc [File_Name.c] -o [Compile_Name]'
// To run the compiled file with the terminal the command is './[Compile_Name]'

// --------- A simple hello world tutorial ---------

/* //1

// Include all your preproceesor commands
#include <stdio.h>

// int main() is the main function where execution begins
int main() {

   // printf is a function in C which displays the message on the screen
   printf("Hello, World! \n");

   // return 0 terminates the main() and returns the value 0
   return 0;
}

*/ //1

// --------- A simple integer types tutorial ---------

/* //2

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv) {

    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);

    return 0;
}

*/ //2

// --------- A simple floating-point types tutorial ---------

/* //3

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv) {

    printf("Storage size for float : %lu \n", sizeof(float));
    printf("FLT_MAX     :   %g\n", (float) FLT_MAX);
    printf("FLT_MIN     :   %g\n", (float) FLT_MIN);
    printf("-FLT_MAX    :   %g\n", (float) -FLT_MAX);
    printf("-FLT_MIN    :   %g\n", (float) -FLT_MIN);
    printf("DBL_MAX     :   %g\n", (double) DBL_MAX);
    printf("DBL_MIN     :   %g\n", (double) DBL_MIN);
    printf("-DBL_MAX     :  %g\n", (double) -DBL_MAX);
    printf("Precision value: %d\n", FLT_DIG );

    return 0;
}

*/ //3

// --------- A simple variable declaration tutorial ---------

/* //4

#include <stdio.h>

// external variable declaration:
extern int a, b;
extern int c;
extern float f;

int main () {

   // variable definition:
   int a, b;
   int c;
   float f;
 
   // actual initialization: 
   a = 10;
   b = 20;
   
   // Integer initialization
   c = a + b;
   printf("value of c : %d \n", c);

   // Float initialzation
   f = 70.0/3.0;
   printf("value of f : %f \n", f);
 
   return 0;
}

*/ //4

// --------- A simple function declaration tutorial ---------

/* //5

// function declaration
int func();

int main() {

   // function call
   int i = func();
}

// function definition
int func() {
   return 0;
}

*/ //5
