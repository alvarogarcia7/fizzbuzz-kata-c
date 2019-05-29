#include <assert.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "CuTest.h"

#include "fizzbuzz.h"


void Test_Multiples_of_3_are_translated_to_Fizz(CuTest* tc)
{

    const char* expected = "Fizz";
    const char* actual = FizzBuzz(3);

	CuAssertStrEquals(tc, expected, actual);
}

void Test_Multiples_of_5_are_translated_to_Buzz(CuTest* tc)
{

    const char* expected = "Buzz";
    const char* actual = FizzBuzz(5);

	CuAssertStrEquals(tc, expected, actual);
}

void Test_any_multiple_of_5_are_translated_to_Buzz(CuTest* tc)
{

    const char* expected = "Buzz";
    const char* actual = FizzBuzz(10);

	CuAssertStrEquals(tc, expected, actual);
}
