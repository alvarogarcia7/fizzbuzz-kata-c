.PHONY: test
test:
	./make-tests.sh > AllTests.c
	clang AllTests.c CuTest.c CuTestTest.c -o tests.ex
	./tests.ex