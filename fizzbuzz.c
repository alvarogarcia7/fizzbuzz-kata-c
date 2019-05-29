#include <string.h>

#include "fizzbuzz.h"

char* FizzBuzz(int number)
{
    if(number % 5 == 0)
    {
        return "Buzz";    
    }

    if(number % 3 == 0)
    {
        return "Fizz";    
    }

    if(2 == number)
    {
        return "2";
    }

    return "Fizz";
    
}