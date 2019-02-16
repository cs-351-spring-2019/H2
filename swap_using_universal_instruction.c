
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool UniversalIntruction(int* A, int* B, char* a, char* b)
{
	*A = *A - *B;
	//printf("%s = %i, %s = %i\n", a, *A, b, *B);
	return *A >= 0;
}

int main()
{

	///// SWAP(A, B)
	int a = 5;
	int b = 3;
	int* A = &a;
	int* B = &b;

	// just for A = B
	// don't set these
	int t;
	int t0;
	int t1;
	int t2;
	int* T = &t;
	int* T0 = &t0;
	int* T1 = &t1;
	int* T2 = &t2;

	if(UniversalIntruction(T, T, "T", "T"))  // T = T - T = 0
	{
		goto zero;
	}
zero:
	if(UniversalIntruction(T, A, "T", "A"))  // T = T - A = 0 - A
	{
		goto one_dot_one;
	}	
one_dot_one:
	if(UniversalIntruction(T0, T0, "T0", "T0"))  // T0 = T0 - T0 = 0
	{
		goto one_dot_two;
	}
one_dot_two:
	if(UniversalIntruction(T0, T, "T0", "T"))  // T0 = T0 - T = 0 - (-A) = A
	{
		goto one;
	}
one:
	if(UniversalIntruction(A, B, "A", "B"))  // A = A - B
	{
		goto two;
	}
two:
	if(UniversalIntruction(A, T0, "A", "T0"))  // A = A - T0 = A - B - (A) = -B
	{
		goto three;
	}
three:
	if(UniversalIntruction(T1, T1, "T1", "T1"))  // T1 = T1 - T1 = 0
	{
		goto four;
	}
four:
	if(UniversalIntruction(T1, A, "T1", "A"))  // T1 = T1 - A = 0 - (-B) = B
	{
		goto five;
	}
five:
	if(UniversalIntruction(A, A, "A", "A"))  // A = A - A = 0
	{
		goto six;
	}
six:
	if(UniversalIntruction(T2, T2, "T2", "T2"))  // T2 = T2 - T2 = 0
	{
		goto seven;
	}
seven:
	if(UniversalIntruction(T2, B, "T2", "B"))  // T2 = T2 - B = 0 - B = -B
	{
		goto eight;
	}
eight:
	if(UniversalIntruction(A, T2, "A", "T2"))  // A = A - T2 = 0 - (-B) = B
	{
		printf("%s = %i, %s = %i\n", "A", *A, "B", *B);
		return 0;
		goto nine;
	}
nine:
		printf("%s = %i, %s = %i\n", "A", *A, "B", *B);
		return 0;














	// same as A = A - B; if A >= 0 return true
	/////
	// UniversalIntruction(P1, P2)
	if(UniversalIntruction(B, A, "B", "A"))
	/////
	{
		// P1 >= P2		
		goto answer;
	}
	else
	{
		// P1 < P2
		// bla bla bla
		// swap code goes here
		printf("P1 > P2 \n");
		printf("A = %i, B = %i\n", *A, *B);



		return 0;
	}

answer:
	printf("P1 >= P2\n");
	//printf("A = A - B => 5 - %i = %i\n", *B, *A);




	return 0;
}