/* The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 */ 


#include <stdio.h>
#include <stdlib.h>
// Include math.h for the sqrt() function.
#include <math.h>
typedef unsigned long long uint64;

int main(int argc, char **argv)
{
    uint64 Max_Value = 600851475143; // or whatever value max_value is

    uint64 Current_Max_Value = Max_Value; //8bytes
    uint64 Sqrt_Max_Value = (uint64)sqrt(Max_Value); //8bytes
    uint64 Max_Prime_Factor = 1; //8bytes

    //Start dividing by 2 since we know that 2 is the first prime number. 
    //NOTE: We don't need to worry about skipping composite numbers because
    //      any composite number would already be divided out by the earlier 
    //      prime factor!

    for(uint64 i = 2; i < Max_Value; i++) //8bytes
    {
        if(Current_Max_Value % i == 0)
        {
            Max_Prime_Factor = i;
            Current_Max_Value /= i;
            if( (i > Sqrt_Max_Value) ||
                (Current_Max_Value == 1))
            {
                break;
            }
            // Mak sure i stays the sam in the nect iteration of the loop in 
            // case there are more powers of i that factor into Current_Max_Value
            i--;
        }
    }

    printf("Answer is: %llu\n", Max_Prime_Factor);

    return(0);        

}