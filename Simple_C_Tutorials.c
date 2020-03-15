// A collection of simple tutorials covering all the basics of programming in the C language.
// C is a general-purpose, procedural computer programming language supporting structured programming.
// To compile this file with the terminal the command is 'gcc [File_Name.c] -o [Compile_Name]'
// To run the compiled file with the terminal the command is './[Compile_Name]'
// Input and Output operations can also be performed in C++ using the C Standard Input and Output Library
// C Standard General Utilities Library.

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
// Input and Output operations can also be performed in C++ using the C Standard Input and Output Library
// C Standard General Utilities Library.

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
// Input and Output operations can also be performed in C++ using the C Standard Input and Output Library
// C Standard General Utilities Library.

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

// --------- A simple #define Preprocessor tutorial ---------

/* //6

#include <stdio.h>

#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'

int main() {
   int area;  
  
   area = LENGTH * WIDTH;
   printf("value of area : %d", area);
   printf("%c", NEWLINE);

   return 0;
}

*/ //6

// --------- A simple const Keyword tutorial ---------

/* //7

#include <stdio.h>

int main() {
   const int  LENGTH = 10;
   const int  WIDTH = 5;
   const char NEWLINE = '\n';
   int area;  
   
   area = LENGTH * WIDTH;
   printf("value of area : %d", area);
   printf("%c", NEWLINE);

   return 0;
}

*/ //7

// --------- A simple calling a function tutorial ---------

/* //8

#include <stdio.h>
 
// function declaration 
int max(int num1, int num2);
 
int main () {

   // local variable definition 
   int a = 100;
   int b = 200;
   int ret;
 
   // calling a function to get max value 
   ret = max(a, b);
 
   printf( "Max value is : %d\n", ret );
 
   return 0;
}
 
// function returning the max between two numbers 
int max(int num1, int num2) {

   // local variable declaration
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}

*/ //8

// --------- A simple global & local variable tutorial ---------

/* //9

#include <stdio.h>
 
// global variable declaration
int a = 20;
 
int main () {

  // local variable declaration in main function
  int a = 10;
  int b = 20;
  int c = 0;

  printf ("value of a in main() = %d\n",  a);
  c = sum_ints( a, b);
  printf ("value of c in main() = %d\n",  c);

  return 0;
}

// function to add two integers
int sum_ints(int a, int b) {

   printf ("value of a in sum() = %d\n",  a);
   printf ("value of b in sum() = %d\n",  b);

   return a + b;
}

*/ //9

// --------- A simple array tutorial ---------

/* //10

#include <stdio.h>
 
int main () {

   int n[ 10 ]; // n is an array of 10 integers
   int i,j;
 
   // initialize elements of array n to 0  
   for ( i = 0; i < 10; i++ ) {
      n[ i ] = i + 100; // set element at location i to i + 100
   }
   
   // output each array element's value
   for (j = 0; j < 10; j++ ) {
      printf("Element[%d] = %d\n", j, n[j] );
   }
 
   return 0;
}

*/ //10

// --------- A simple string tutorial ---------

/* //11

#include <stdio.h>

int main () {

   char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
   printf("Greeting message: %s\n", greeting );
   return 0;
}

*/ //11

