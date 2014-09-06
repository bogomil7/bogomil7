//============================================================================
// Name        : STL.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

//Write a program that reads from the console a
//sequence of positive integer numbers. The
//sequence ends when the number 0 is entered.
//Calculate and print the sum and average of the
//elements of the sequence. Use linked list.


template <typename T> void print (list <T> &list1);
template <typename T> void input (list <T> &list1);
int main() {

list <unsigned int> value ;
list  <unsigned int> value1 ;

//ostream_iterator< unsigned int > output( cout, "," );



input(value);
print(value);
//cout << endl;
//input(value1);
//cout << "........";
//print(value1);

return 0;
}

template <typename T> void input (list <T> &list1)
{
	istream_iterator< unsigned int > inputInt( cin );
	unsigned int number = *inputInt ;
		while (number != 0)
		{
		cout << "Enter unsigned integers";
		cin >> number;
		list1.push_back(number);
		}
}
template <typename T> void print (list <T> &list1)
{
	if (list1.empty())
	{
		cout << "list is empty";
	}
	else
	{
		unsigned int sum = 0;
		unsigned int count = 0;

		ostream_iterator< T > output( cout, " " );
		copy( list1.begin(), list1.end(), output );
		typename list <T> :: const_iterator iter;
		for ( iter = list1.begin() ; iter != list1.end() ; ++iter )
		{
			sum+=*iter;
			iter++;
		}

		cout << "the sum is: " << sum << endl;
		cout << "the average  is: " << sum / count << endl;
	}
}
