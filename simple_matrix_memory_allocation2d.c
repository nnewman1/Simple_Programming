// A simple matrix memory allocation add using CPU sequential methods in C
// C is a general-purpose, procedural computer programming language supporting structured programming.
// To compile this file with the terminal the command is 'gcc [File_Name.c] -o [Compile_Name]'
// To run the compiled file with the terminal the command is './[Compile_Name]'
// Input and Output operations can also be performed in C++ using the C Standard Input and Output Library.
// C Standard General Utilities Library.

#include<stdio.h>
#include<stdlib.h>
  
int main()
{
    int r=3, c=4;
    int **arr;
    int count = 0,i,j;
  
    arr  = (int **)malloc(sizeof(int *) * r);
    arr[0] = (int *)malloc(sizeof(int) * c * r);
 
    for(i = 0; i < r; i++)
        arr[i] = (*arr + c * i);
  
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            arr[i][j] = ++count;  // OR *(*(arr+i)+j) = ++count
  
    for (i = 0; i <  r; i++)
        for (j = 0; j < c; j++)
            printf("%d ", arr[i][j]);
  
    return 0;
}
