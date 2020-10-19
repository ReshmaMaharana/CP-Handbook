#include<iostream>

using namespace std;

int main()
{
	//if we can store address of i then we have also save adress of pointers
	int i=10;
	int *p1 = &i;
	int **p2 = &p1;    //p2 stores the address of a pointer that has the address of an int
	
	//how to reference values?
	cout<<"value of a is "<<i<<" "<<*p1<<" "<<**p2<<endl;
	
	
	return 0;
}
