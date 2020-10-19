#include<iostream>

using namespace std;

void increment(int& n)
{
	n++;
}

//bad practice
int& f(int n)
{
	int a = n;
	return a''
}

//bad practice
int* f2()
{
	int i = 10;
	return &i;
}

//the above two codes are bad practice as i is a local variable
//so if we pass the address of a variable which gets deleted once 
//we leave the function, it cam be deleted by the system. Warning

int main()
{
	//reference
	int i=10;
	int j = i;
	i++;
	cout<<j<<endl; //no change
	
	int i2 = 10;
	int& j2 = i2;    //its refernce variable. i and j are same
	i2++;
	cout<<j2<<endl;  //here j2 changes 
	
	//whats the use?
 	//we can use it for increment operator
	cout<<"value of i before "<<i<<endl;
	increment(i);
	cout<<"value of i after "<<i<<endl;
	
	
	return 0;
}
