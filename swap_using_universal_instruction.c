
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
	int a0 = -9;
	int b0 = 0;
	int* A0 = &a0;
	int* B0 = &b0;
	int t;
	int t0;
	int t1;
	int t2;
	int* T = &t;
	int* T0 = &t0;
	int* T1 = &t1;
	int* T2 = &t2;

	// A0 = A
	if(UniversalIntruction(T, T, "T", "T"))  // T = T - T = 0
	{
		goto zero;
	}
zero:
	if(UniversalIntruction(T, A0, "T", "A0"))  // T = T - A = 0 - A
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
	if(UniversalIntruction(A0, A, "A0", "A"))  // A = A - B
	{
		goto two;
	}
two:
	if(UniversalIntruction(A0, T0, "A)", "T0"))  // A = A - T0 = A - B - (A) = -B
	{
		goto three;
	}
three:
	if(UniversalIntruction(T1, T1, "T1", "T1"))  // T1 = T1 - T1 = 0
	{
		goto four;
	}
four:
	if(UniversalIntruction(T1, A0, "T1", "A0"))  // T1 = T1 - A = 0 - (-B) = B
	{
		goto five;
	}
five:
	if(UniversalIntruction(A0, A0, "A0", "A0"))  // A = A - A = 0
	{
		goto six;
	}
six:
	if(UniversalIntruction(T2, T2, "T2", "T2"))  // T2 = T2 - T2 = 0
	{
		goto seven;
	}
seven:
	if(UniversalIntruction(T2, A, "T2", "A"))  // T2 = T2 - B = 0 - B = -B
	{
		goto eight;
	}
eight:
	if(UniversalIntruction(A0, T2, "A0", "T2"))  // A = A - T2 = 0 - (-B) = B
	{
		//return 0;
		goto nine;
	}
nine:
	printf("%s = %i, %s = %i\n", "A0", *A0, "A", *A);
	//return 0;
	


	// B0 = B
	if(UniversalIntruction(T, T, "T", "T"))  // T = T - T = 0
	{
		goto zero1;
	}
zero1:
	if(UniversalIntruction(T, B0, "T", "B0"))  // T = T - A = 0 - A
	{
		goto one_dot_one1;
	}	
one_dot_one1:
	if(UniversalIntruction(T0, T0, "T0", "T0"))  // T0 = T0 - T0 = 0
	{
		goto one_dot_two1;
	}
one_dot_two1:
	if(UniversalIntruction(T0, T, "T0", "T"))  // T0 = T0 - T = 0 - (-A) = A
	{
		goto one1;
	}
one1:
	if(UniversalIntruction(B0, B, "B0", "A"))  // A = A - B
	{
		goto two1;
	}
two1:
	if(UniversalIntruction(B0, T0, "B0", "T0"))  // A = A - T0 = A - B - (A) = -B
	{
		goto three1;
	}
three1:
	if(UniversalIntruction(T1, T1, "T1", "T1"))  // T1 = T1 - T1 = 0
	{
		goto four1;
	}
four1:
	if(UniversalIntruction(T1, B0, "T1", "B0"))  // T1 = T1 - A = 0 - (-B) = B
	{
		goto five1;
	}
five1:
	if(UniversalIntruction(B0, B0, "B0", "B0"))  // A = A - A = 0
	{
		goto six1;
	}
six1:
	if(UniversalIntruction(T2, T2, "T2", "T2"))  // T2 = T2 - T2 = 0
	{
		goto seven1;
	}
seven1:
	if(UniversalIntruction(T2, B, "T2", "B"))  // T2 = T2 - B = 0 - B = -B
	{
		goto eight1;
	}
eight1:
	if(UniversalIntruction(B0, T2, "B0", "T2"))  // A = A - T2 = 0 - (-B) = B
	{
		//return 0;
		goto nine1;
	}
nine1:
	printf("%s = %i, %s = %i\n", "B0", *B0, "B", *B);




		//printf("%s = %i, %s = %i\n", "A0", *A0, "B0", *B0);
		//return 0;






		// A0 = A
		// B0 = B
		// if A0 > B0
			// swap A, B


int c = 0;
int* C = &c;




	// same as A = A - B; if A >= 0 return true
	/////
	// UniversalIntruction(P1, P2)
	if(UniversalIntruction(B0, A0, "B0", "A0"))
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

		// C = B
		// B0 -> C
		if(UniversalIntruction(T, T, "T", "T"))  // T = T - T = 0
		{
			goto zero11;
		}
	zero11:
		if(UniversalIntruction(T, C, "T", "B0"))  // T = T - A = 0 - A
		{
			goto one_dot_one11;
		}	
	one_dot_one11:
		if(UniversalIntruction(T0, T0, "T0", "T0"))  // T0 = T0 - T0 = 0
		{
			goto one_dot_two11;
		}
	one_dot_two11:
		if(UniversalIntruction(T0, T, "T0", "T"))  // T0 = T0 - T = 0 - (-A) = A
		{
			goto one11;
		}
	one11:
		if(UniversalIntruction(C, B, "B0", "A"))  // A = A - B
		{
			goto two11;
		}
	two11:
		if(UniversalIntruction(C, T0, "B0", "T0"))  // A = A - T0 = A - B - (A) = -B
		{
			goto three11;
		}
	three11:
		if(UniversalIntruction(T1, T1, "T1", "T1"))  // T1 = T1 - T1 = 0
		{
			goto four11;
		}
	four11:
		if(UniversalIntruction(T1, C, "T1", "B0"))  // T1 = T1 - A = 0 - (-B) = B
		{
			goto five11;
		}
	five11:
		if(UniversalIntruction(C, C, "B0", "B0"))  // A = A - A = 0
		{
			goto six11;
		}
	six11:
		if(UniversalIntruction(T2, T2, "T2", "T2"))  // T2 = T2 - T2 = 0
		{
			goto seven11;
		}
	seven11:
		if(UniversalIntruction(T2, B, "T2", "B"))  // T2 = T2 - B = 0 - B = -B
		{
			goto eight11;
		}
	eight11:
		if(UniversalIntruction(C, T2, "B0", "T2"))  // A = A - T2 = 0 - (-B) = B
		{
			//return 0;
			goto nine11;
		}
	nine11:
		//printf("%s = %i, %s = %i\n", "C", *C, "B", *B);

		// B = A
		// C -> B
		// B -> A
		if(UniversalIntruction(T, T, "T", "T"))  // T = T - T = 0
		{
			goto zero111;
		}
	zero111:
		if(UniversalIntruction(T, B, "T", "B0"))  // T = T - A = 0 - A
		{
			goto one_dot_one111;
		}	
	one_dot_one111:
		if(UniversalIntruction(T0, T0, "T0", "T0"))  // T0 = T0 - T0 = 0
		{
			goto one_dot_two111;
		}
	one_dot_two111:
		if(UniversalIntruction(T0, T, "T0", "T"))  // T0 = T0 - T = 0 - (-A) = A
		{
			goto one111;
		}
	one111:
		if(UniversalIntruction(B, A, "B0", "A"))  // A = A - B
		{
			goto two111;
		}
	two111:
		if(UniversalIntruction(B, T0, "B0", "T0"))  // A = A - T0 = A - B - (A) = -B
		{
			goto three111;
		}
	three111:
		if(UniversalIntruction(T1, T1, "T1", "T1"))  // T1 = T1 - T1 = 0
		{
			goto four111;
		}
	four111:
		if(UniversalIntruction(T1, B, "T1", "B0"))  // T1 = T1 - A = 0 - (-B) = B
		{
			goto five111;
		}
	five111:
		if(UniversalIntruction(B, B, "B0", "B0"))  // A = A - A = 0
		{
			goto six111;
		}
	six111:
		if(UniversalIntruction(T2, T2, "T2", "T2"))  // T2 = T2 - T2 = 0
		{
			goto seven111;
		}
	seven111:
		if(UniversalIntruction(T2, A, "T2", "B"))  // T2 = T2 - B = 0 - B = -B
		{
			goto eight111;
		}
	eight111:
		if(UniversalIntruction(B, T2, "B0", "T2"))  // A = A - T2 = 0 - (-B) = B
		{
			//return 0;
			goto nine111;
		}
	nine111:
		//printf("%s = %i, %s = %i\n", "B", *B, "A", *A);


		// A = C
		// B -> A
		// A -> C
		if(UniversalIntruction(T, T, "T", "T"))  // T = T - T = 0
		{
			goto zero1111;
		}
	zero1111:
		if(UniversalIntruction(T, A, "T", "B0"))  // T = T - A = 0 - A
		{
			goto one_dot_one1111;
		}	
	one_dot_one1111:
		if(UniversalIntruction(T0, T0, "T0", "T0"))  // T0 = T0 - T0 = 0
		{
			goto one_dot_two1111;
		}
	one_dot_two1111:
		if(UniversalIntruction(T0, T, "T0", "T"))  // T0 = T0 - T = 0 - (-A) = A
		{
			goto one1111;
		}
	one1111:
		if(UniversalIntruction(A, C, "B0", "A"))  // A = A - B
		{
			goto two1111;
		}
	two1111:
		if(UniversalIntruction(A, T0, "B0", "T0"))  // A = A - T0 = A - B - (A) = -B
		{
			goto three1111;
		}
	three1111:
		if(UniversalIntruction(T1, T1, "T1", "T1"))  // T1 = T1 - T1 = 0
		{
			goto four1111;
		}
	four1111:
		if(UniversalIntruction(T1, A, "T1", "B0"))  // T1 = T1 - A = 0 - (-B) = B
		{
			goto five1111;
		}
	five1111:
		if(UniversalIntruction(A, A, "B0", "B0"))  // A = A - A = 0
		{
			goto six1111;
		}
	six1111:
		if(UniversalIntruction(T2, T2, "T2", "T2"))  // T2 = T2 - T2 = 0
		{
			goto seven1111;
		}
	seven1111:
		if(UniversalIntruction(T2, C, "T2", "B"))  // T2 = T2 - B = 0 - B = -B
		{
			goto eight1111;
		}
	eight1111:
		if(UniversalIntruction(A, T2, "B0", "T2"))  // A = A - T2 = 0 - (-B) = B
		{
			//return 0;
			goto nine1111;
		}
	nine1111:
		printf("%s = %i, %s = %i\n", "A", *A, "B", *B);

		return 0;
	}

answer:
	printf("P1 >= P2\n");
	//printf("A = A - B => 5 - %i = %i\n", *B, *A);




	return 0;
}