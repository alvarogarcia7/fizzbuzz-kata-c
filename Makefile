.PHONY: test
test:
	./make-tests.sh > AllTests.c
	clang AllTests.c CuTest.c CuTestTest.c fizzbuzz.c FizzBuzzTest.c itoa.c -o tests.ex
	./tests.ex