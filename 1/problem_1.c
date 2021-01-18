/* If we list all the natural numbers below 10 that are multiples of 3 or 5, 
we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000. */

#include <stdio.h>

int sum_multiples(void) 
{
	int answer;
	answer = 0;

	for(int i = 1; i < 1000; i = i + 1) 
	{
		if((i % 3 == 0) || (i % 5 == 0)) 
		{
			answer = i + answer;
		}
	}
	return answer;
}



int main(int argc, char **argv) 
{
	int answer;
	answer = sum_multiples();
	printf("answer: %i\n", answer);
	return 0;
}

