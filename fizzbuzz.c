#include <string.h>
#include <stdio.h>

#include "fizzbuzz.h"
#include "itoa.h"

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

    static char buffer[2];
    itoa(number, buffer);
    return buffer;
}