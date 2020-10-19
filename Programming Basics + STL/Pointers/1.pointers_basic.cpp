#include<iostream>

using namespace std;

int main()
{
	//we can find address of a variable by using & operator
	int i;
	cout<<"Adress os i is "<<&i<<endl;
	
	
	//for storing adresses we use pointer variable
	int *ptr;  //declaring pointers for int(int * ptr /int* ptr also allowed)
	ptr = &i;
	cout<<"Adress of i through pointer is "<<ptr<<endl;
	
	//accesing value at pointer
	i=10;
	cout<<"Value of i initially "<<i<<endl;
	*ptr = 15;
	cout<<"Value of i after changing through pointer "<<i<<endl;
	
	//pointer is also stored at somewhere. so we can also find its address by using &
	cout<<"adress where ptr is stored is "<<&ptr<<endl;
	cout<<"size of ptr is "<<sizeof(ptr)<<endl; //which is same as that of int
	
	//its dangerous to initiate a random ptr as it can point to anything. So while intialising a pointer
	//always initialise it or initialise with NULL pointer or 0 pointer
	
	 
	
	
	
	
	
	return 0;
}
