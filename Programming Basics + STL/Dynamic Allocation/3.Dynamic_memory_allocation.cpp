#include<iostream>

using namespace std;

int main()
{
//	bad practice
    //int n;
	//cin>>n;
    //int arr[n];     //because at compile time we should know the size of the array
//arr[n] will be created is stack(having a low space). so if we
//allocate a big n while compile time, it may throw error

//the process of allocating memory in heap(having larger size is dynamic memory allocation)
int *p = new int;    //p is storing the address, new is the keyword
*p = 10;
cout<<*p<<endl;

//allocating an array
int *pa = new int[50];

//best part is we can do this here
//int n;
//cin>>n;
//
//int *pa2 = new int[n];	//no problem here

//the variables made dynamically dont have a scope. so it doesnt get released
//whenever we go out. So manual release is required

//how to deallocate?
delete p; //this doesnt delete pointer, but deletes the value in p
delete [] pa; //array deletion
	
	
	return 0;
}
