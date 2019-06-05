#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "fizzbuzz.h"
#include "itoa.h"

char* FizzBuzz(int number)
{
    char* buffer = calloc(4, sizeof(char));

    if(number % 5 == 0)
    {
        strcpy(buffer, "Buzz");
        return buffer;    
    }

    if(number % 3 == 0)
    {
        strcpy(buffer, "Fizz");    
        return buffer;
    }

    itoa(number, buffer);
    return buffer;
}