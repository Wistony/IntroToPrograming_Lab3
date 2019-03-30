#include "Stack.h"
#include <string>
#include <iostream>
using namespace std; 

bool isNumber(char);
bool isOperator(char);
int operate_priority(char);
string postfixLine(string&);
