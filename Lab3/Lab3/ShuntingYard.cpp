#include "Stack.h"
#include <string>
#include <iostream>
using namespace std;

bool isNumber(char symbol) {
	if ((symbol >= '0' && symbol <= '9'))
		return true;

	return false;
}
bool isOperator(char symbol) {
	if (symbol == '^' || symbol == '*' ||
		symbol == '/' || symbol == '+' ||
		symbol == '-') {
		return true;
	}
	return false;
}
int operate_priority(const char symbol) {
	switch (symbol)
	{
	case '^':
		return 3;
	case '*':
		return 2;
	case '/':
		return 2;
	case '+':
		return 1;
	case '-':
		return 1;
	}
	return 0;
}

string postfixLine(string& formula) {
	Stack <char> stack(formula.length());
	string output = "";

	int i = 0;
	while (i < formula.length()) {
		if ((isNumber(formula[i])) || (formula[i] == '.') || (i == 0 && formula[i] == '-') || (i > 0 && formula[i] == '-' && formula[i - 1] == '(')) {
			if ((i + 1 == formula.length()) || (formula[i + 1] == '(') ||
				(formula[i + 1] == ')') || (isOperator(formula[i + 1]))) {
				output = output + formula[i] + ' ';
			}
			else
				output = output + formula[i];
		}
		else if (formula[i] == '(') {
			stack.push(formula[i]);
		}
		else if (formula[i] == ')') {
			while (stack.top() != '(') {
				output = output + stack.pop() + ' ';
			}
			stack.pop();
		}
		else if (isOperator(formula[i])) {
			while (!stack.isEmpty() && (operate_priority(stack.top()) >= operate_priority(formula[i]))) {
				output = output + stack.pop() + ' ';
			}

			stack.push(formula[i]);
		}
		else {
			cout << "Data error";
			break;
		}
		i++;
	}

	if (stack.size() > 0) {
		while (stack.size() > 1) 
			output = output + stack.pop() + ' ';
		
		output = output + stack.pop();
	}

	return output;
}