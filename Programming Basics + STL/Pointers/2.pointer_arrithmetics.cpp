#include<iostream>

using namespace std;

int main()
{
	// Question: Does it really matter whether its int pointer or char
	// if the size is same for both?
	
	int i = 10;
	int *p = &i;
	cout<<p<<endl;
	p = p + 1;
	cout<<p<<endl; //the adress goes up by 4(size of int), not 1 
	
	//in case of array, all the variables are stored one after another
	
	//we can also compare two pointers
	//p1<p2, but its only logical in case of arrays
	
	
	return 0;
}
