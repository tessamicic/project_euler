/* The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 */ 


#include <stdio.h>
#include <stdlib.h>
typedef unsigned long long uint64;

typedef struct List_Member
{
	uint64 Number;
	int Is_Prime;
} List_Member;

#define MAX_VALUE 13195 

void generate_primes(void)
{
	List_Member *List = malloc(sizeof(List_Member)*MAX_VALUE);
	List_Member *Current_Number = List;


	for( uint64 i=2; i < MAX_VALUE; i++)
	{
		Current_Number->Number = i;
		Current_Number->Is_Prime = 1;

		printf("Number: %llu , Is_Prime: %d ", Current_Number->Number, Current_Number->Is_Prime);
		Current_Number++;
	}
	
	free(List);
}



int main(int argc, char **argv) 
{
	
	generate_primes();

	return (0);
}


