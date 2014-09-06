//============================================================================
// Name        : 6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int>l;
	int value;
	do{
		cout<<"enter positiv number 0 for exit: "<<endl;
		cin>>value;
		if(value>0)l.push_back(value);
	}while(value!=0);
l.sort();
list<int>::const_iterator it = l.begin();
int count= 1;
value =*it;
it++;
while(it!=l.end())
{
	if(value!=*it)
	{
		cout<<"value :"<<value<<" - "<<cout<<endl;
	cout<< 1 ;
	value = *it;
}
else count++;
	it++;

}
if(value==*l.end())cout<<"value : "<<value<<" - "<<count+1<<endl;

	return 0;
}
