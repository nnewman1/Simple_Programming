// A simple array add using CPU sequential methods in C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 5
#define N 65536*n //global variable

void add( double *a, double *b, double *c ) {
	int tid = 0;
	// this is CPU zero, so we start at zero
	while (tid < N) {
		c[tid] = a[tid] + b[tid];
		tid += 1;
		// we have one CPU, so we increment by one
	}
}


int main( void ) {
double a[N], b[N], c[N];
// fill the arrays 'a' and 'b' on the CPU
for (int i=0; i<N; i++) {
	a[i] = rand()%100;
	b[i] = rand()%100;
	}
int begin = clock();
	add( a, b, c );
int end = clock();
// display the results
for (int i=0; i<N; i++) {
	printf( "%f + %f = %f\n", a[i], b[i], c[i] );
	}
printf("begin = %d\n", begin);
printf("end = %d\n", end);
printf("time_elapsed = %d (ms)\n", end - begin);
return 0;
}
