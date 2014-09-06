//============================================================================
// Name        : STL.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>
#include <iterator>
using namespace std;


int main() {

	list<int> list1;
	int numbers;
	while (numbers != 1)
	{
		cout << "Enter numbers : " ;
		cin >> numbers;
		if (numbers % 10 == 0)
		{
		list1.push_front(numbers);
		}
	}

	list1.sort();
	cout << "After sort " << endl;

	if ( list1.empty() )

		cout << "List is empty";

	else
	{

		ostream_iterator< int > output( cout, " " );
		copy( list1.begin(), list1.end(), output );

	}


	return 0;
}
