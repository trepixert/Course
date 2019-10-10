#include "Calculator.h"

int sum(int first, int second) {
	return first + second;
}

int minus(int first, int second) {
	return first - second;
}

int multiply(int first, int second) {
	return (first * second);
}

int division(int first, int second) {
	return first / second;
}

int factorial(int number) {
	int result = 1;
	while (number != 1) {
		result *= number;
		number--;
	}
	return result;
}