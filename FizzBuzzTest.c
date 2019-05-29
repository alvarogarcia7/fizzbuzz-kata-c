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

/*-------------------------------------------------------------------------*
 * main
 *-------------------------------------------------------------------------*/

CuSuite* CuGetSuite_FizzBuzzTest(void)
{
	CuSuite* suite = CuSuiteNew();

	SUITE_ADD_TEST(suite, Test_Multiples_of_3_are_translated_to_Fizz);

	return suite;
}
