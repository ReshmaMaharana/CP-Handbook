#include<iostream>

using namespace std;

int main()
{
	//while declaring array
	int a[10];
	int *p = &a[0];
	cout<<"Value of a is "<<a<<endl;
	cout<<"Adress of a[0] is "<<p<<endl;
	
	//initialising values
	a[0] = 0;
	a[1] = 1;
	
	//arithmetic
	cout<<"Value at a is "<<*a<<endl;
	cout<<"Value at a+1 address is "<<*(a+1)<<endl; //*(a+1)==a[i]
	//**this is so dumb that i[a] is same as a[i] as both gets translated to *(a+i)
	
	//Differences
	//1. Size of
	cout<<"Size of a is "<<sizeof(a)<<endl; //gives 40
	cout<<"Size of p is "<<sizeof(p)<<endl; //gives 8
	//2. & operator
	cout<<"Values of a is "<<a<<endl;
	cout<<"Adress of a is "<<&a<<endl;	//same as that of a
	cout<<"Values of p is "<<p<<endl;		
	cout<<"Adress of p is "<<&p<<endl;//different than that of p
	//3. Changebility(we cant change data added to the symbol table
	// a = a+3 is invalid, but p = &a[3] is valid
	p = p+1;	//valid
	cout<<p<<endl; 
//	a = a+1;	//can't reassign value of a. Gives error
//	cout<<a<<endl;
	
	
	
	
	
	
	
	
	return 0;
}
