
#include <iostream>
#include <queue>
#include <list>
#include <iterator>
#include <map>

using namespace std;
void task4();
void task5();
void task6();
void task7();

int main()
{

//	task4();
//	task5();
//	task6();
	task7();

return 0;
}

void task4()
{
	queue < int > values;
	int number;

	cout << "Enter number: ";
	cin >> number;
	values.push(number);

	for(int i = 0; i < 100; ++i)
	{
		values.push( values.front() + 1 );
		values.push( 2*values.front() + 1 );
		values.push( values.front() + 2 );
		cout << values.front()<<' ';
		values.pop();
	}
}

void task5()
{
	list <int> numbers;
	int n;
	cout << "Enter 1 for end" << endl;
	while (n != 1)
	{
		cout << "Enter number: ";
		cin >> n;
		if (n % 10 == 0)
		{
			numbers.push_back(n);
		}
	}
	numbers.sort();
	cout << "After sort: ";

	if (numbers.empty())
	{
		cout << "List is empty.";
	}
	else
	{
		ostream_iterator <int> output (cout, " ");
		copy (numbers.begin(), numbers.end(), output);
	}
}


void task6 ()
{
	vector <int> num;
	int n;
	cout << "Enter number: ";
	while (n != 0)
	{
		cin >> n;
		num.push_back(n);
	}
	map <int, int > numbers;
	map<int,int>::iterator it;

	for (unsigned int i = 0; i < num.size(); i++)
	{
		it = numbers.find(num[i]);
		if (it == numbers.end())
		{
			numbers.insert(pair <int,int> (num[i], 1));
		}
		else
		{
			it->second++;
		}
	}
	for (it = numbers.begin(); it != numbers.end(); it++)
	{
		cout << it->first << " -> " << it->second << endl;
	}
}


void task7()
{
	vector <int> num;
	int n;
	cout << "Enter number: ";
	while (n != 0)
	{
		cin >> n;
		num.push_back(n);
	}
	list<int> numbers;

}








