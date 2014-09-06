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
#include <algorithm>
#include <vector>
using namespace std;

//Write a method that finds the longest subsequence
//of equal numbers in given array. Use linked list.



int main() {

	const int SIZE = 10;


	list < int > array;

	for (int i = 0; i < SIZE; i++)
	{
		int number;
		cout << "Enter a number " << i ;
		cin >> number;
		array.push_back(number);
	}

	list <int>:: const_iterator iter;

int count = 0;
int max = 0;
int number;
int n = 0;
int m = 0;



	for (iter = array.begin(); iter != array.end();iter ++)
	{
		n = *iter;
		if (m == n)
		{
			number = *iter;
			count++;

		}
		else
		{
			count = 0;
		}
		 if (count > max)
		{
			max = count;
		}
		 m = n;

	}
cout <<"the number sequence is : " <<  max  + 1  << " : " <<  number;




	return 0;
}
