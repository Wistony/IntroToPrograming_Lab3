#include "Lab3.h"

int main(int argc, char* argv[])
{
	string mathFormula;
	
	for (int i = 1; i < argc; i++)
		mathFormula += argv[i];

	fixMinus(mathFormula);
	string reversePolishNotation;
	reversePolishNotation = postfixLine(mathFormula);
	cout << " Result: " << CalculateResult(reversePolishNotation);
	
	cin.get();
}