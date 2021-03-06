#include "Lab3.h"

double CalculateResult(string& output) 
{
	Stack <double> resultStack(output.length());
	string number = "";
	double first, second;
	double calc = 0;
	int i = 0;

	while (i < output.length()) 
	{
		if (output[i] == ' ')
			i++;

		else if (isNumber(output[i]) || (output[i] == '.') || (i == 0 && output[i] == '-' && isNumber(output[i + 2]) != true) ||
			(i > 0 && output[i] == '-' && isNumber(output[i + 1])))
		{
			number = number + output[i];

			if (!isNumber(output[i + 1]) && (output[i + 1] != '.'))
			{
				resultStack.push(stod(number));
				number = "";
			}
			i++;
		}

		else {
			second = resultStack.pop();
			first = resultStack.pop();
			switch (output[i]) 
			{
			case '+':
				calc = first + second; break;
			case '-':
				calc = first - second; break;
			case '*':
				calc = first * second; break;
			case '/':
				calc = first / second; break;
			case '^':
				calc = pow(first, second); break;
			default:
				cout << " Error "; break;

			}
			resultStack.push(calc);

			i++;
		}
	}
	if (resultStack.size() > 1)
	{
		cout << " Incorrect formula ";
		return 0;
	}
	return resultStack.top();
}