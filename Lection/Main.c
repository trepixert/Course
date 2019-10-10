#define _CRT_SECURE_NO_WARNINGS

#include "Calculator.h"
#include <stdio.h>
#include <locale.h>

int main() {
	char* locale = setlocale(LC_ALL,"");

	int firstNumber;
	int secondNumber;
	char operation;
	char status;

	while (1) {
		printf("Enter operation: \n");
		scanf(" %c", &operation);
		printf("Enter first num: \n");
		scanf_s("%d", &firstNumber);
		printf("Enter second num: \n");
		scanf_s("%d", &secondNumber);

		printf("%d\n\n", doOperation(operation, firstNumber, secondNumber));

		printf("Continue? y/n \n");
		scanf(" %c", &status);

		if (status == 'y') break;
	}
	return 0;
}

int doOperation(char operation, int first, int second) {
	switch (operation) {
		case '+':
			return sum(first,second);
		case '-':
			return minus(first, second);
		case '*':
			return multiply(first, second);
		case '/':
			return division(first, second);
		case '!':
			return factorial(first);
	}
}