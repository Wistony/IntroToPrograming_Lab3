#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	string mathFormula;
	for (int i = 1; i < argc; i++)
		mathFormula += argv[i];
	
	cin.get();
}