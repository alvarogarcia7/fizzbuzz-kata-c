#include <string.h>

#include "fizzbuzz.h"

char* FizzBuzz(int number)
{
    if(number == 5){
        return "Buzz";    
    }
    return "Fizz";
}