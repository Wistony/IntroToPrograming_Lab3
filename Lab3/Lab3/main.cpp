#include "Lab3.h"

int main(int argc, char* argv[])
{
	string mathFormula;
	//for (int i = 1; i < argc; i++)
	//	mathFormula += argv[i];

	getline(cin, mathFormula);
	string reversePolishNotation = "";
	reversePolishNotation = postfixLine(mathFormula);

	cout << reversePolishNotation;
	cout << " Result: " << CalculateResult(reversePolishNotation);
	
	cin.get();
}