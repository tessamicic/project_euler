
/*Each new term in the Fibonacci sequence is generated by adding the previous two terms. 
By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four 
million, find the sum of the even-valued terms. */

#include <stdio.h>

unsigned int SumEvenFibonacci(unsigned int max_value)
{
	// why start at 2? Only start coding from f_i = 3 but need 1st 2 terms before = 2
	unsigned int sum = 2; 			
	unsigned int f_i = 0;
	unsigned int f_i_minus_1 = 2;
	unsigned int f_i_minus_2 =1;

	while(f_i < max_value)
	{
		// order NB so all variables can be updated without disruption.
		f_i = f_i_minus_1 + f_i_minus_2; 	
		f_i_minus_2 = f_i_minus_1;
		f_i_minus_1 = f_i;
		if(f_i % 2 == 0) 
		{
			sum += f_i;
		}
	
	}
	return sum;
}

int main(int argc, char **argv) 
{
	unsigned int answer = 0; 
	unsigned int max_value = 4000000;

	answer = SumEvenFibonacci(max_value);

	printf("%u\n", answer); 
	return 0;
}



