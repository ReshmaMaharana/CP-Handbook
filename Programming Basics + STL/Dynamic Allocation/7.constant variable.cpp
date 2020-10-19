#include<iostream>

using namespace std;

int main()
{
	//constant variables
	const int i = 10;
//	i++;			//error
	
	cout<<i<<endl;
	
	//another error, we have to initialise there only
//	const int i2;	//error
//	i2=10;
//	cout<<i2<<endl;
//	

//	interesting stuff
	int j = 12;
	const int &k = j;  //const int /int const both are allowed
//	k++;	//not allowed
	j++;	//allowed
//	its not the storage which is constant, its the variable which is constant


//	we can make constant reference from both constant or non constant int

//	reference from a const int
	int const j3 = 123;
//	int &k3 = j3;	//error
	k3++;
	
	//we can make functions not allowed to change the value
	//void g(int const *p)
	//{
	//	code;
	//}
	
	
	//for declaring a pointer pointing to a constant integer
	//		int const *p = &i;
	//for declaring a constant address to a variable
	//		int * constant p2 = &i;
	
	//we can also declare
	// int const * const p3 = &1;
	// it says p3 is a constant pointer to a costant integer

	return 0;
}
