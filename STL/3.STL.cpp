//============================================================================
// Name        : STL.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stack>
using namespace std;

int main() {

	stack <int> numbers;
	int number;
	for (int i = 0; i < 5 ; i ++ )
	{
		cout << "Enter number " << i + 1;
		cin >> number;
		numbers.push(number);
	}



	while (!numbers.empty())
	{
		cout << numbers.top() << " ";
		numbers.pop();
	}

	return 0;
}
