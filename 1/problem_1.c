// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

// Find the sum of all the multiples of 3 or 5 below 1000.
#include <stdio.h>

int sum_multiples(void) //sum_multiples was an example of snake case
{
	int answer;
	answer = 0;

	for(int i = 1; i < 1000; i = i + 1) /*forloop needs to have initial condition; check; instruction that happens at the end of the loop*/ 
	{
		if((i % 3 == 0) || (i % 5 == 0)) // || is symbol for OR, which is specific in computer langauge//
		{
			answer = i + answer;
		}
	}
	return answer;
}



int main(int argc, char **argv) // take note of format of main
{
	int answer;
	answer = sum_multiples();
	printf("answer: %i\n", answer);
	return 0;
}

/* terminal commands to know:
cd
ls
mkdir
C LANGAUGE TO KNOW
string -> \n 
mod -> %
main -> entry point of program
int -> data type; every variable needs a type 
snake case -> underscores
camel case -> uppercases 


NEW DAY:
#include = copy and paste
array = a list of things 
argc = number of count
tessa was here
 
*/ 

