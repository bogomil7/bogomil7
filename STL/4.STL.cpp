//============================================================================
// Name        : STL.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <queue>
using namespace std;

int main() {

	queue <int> numbers;
	int n = 2;



	for ( n = 2; n < 100 ; n++)
	{
		int S1 = n ;
		numbers.push(S1);
		int S2 = S1 + 1;
		numbers.push(S2);
		int S3 = 2*S1 + 1;
		numbers.push(S3);
		int S4 = S1 + 2;
		numbers.push(S4);


		S1 = numbers.front();
		cout <<	S1 << " ";
		numbers.pop();
	}

	return 0;
}
