#include<iostream>
using namespace std;
#define PI 3.14

int main()
{
	//#define
	int r;
	cout<<"Enter radius "<<endl;
	cin>>r;
	double pie =3.14;
	cout<<"Area before changing pie"<<pie*r*r<<endl;
	pie++;
	cout<<"Area after changing pie"<<pie*r*r<<endl;
	cout<<"Area before changing PI"<<PI*r*r<<endl;
//	PI++;//error. cant change
	cout<<"Area after changing PI"<<PI*r*r<<endl;
	
	//global variables
	//if we want to declare a variable global, we can declare it outside main
	//we shouldnt used variables globaally, pass by reference if required
	
	
	
	return 0;
}
