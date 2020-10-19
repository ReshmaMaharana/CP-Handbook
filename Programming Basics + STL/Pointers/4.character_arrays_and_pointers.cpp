#include<iostream>

using namespace std;

int main()
{
	int a[] = {1,2,3};
	char b[] = "abc";
	cout<< a <<endl; //prints an address 
	cout<< b <<endl; //prints the whole string
	
	char *c = &b[0];
	cout<<c<<endl;	//prints the whole string
	printf("%x\n",c); //prints the adress 
	//this is because cout is implemented differently
	
	//problem
	char c1 = 'a';
	char *pc = &c1;
	cout<<c1<<endl; //
	cout<<pc<<endl; //this prints garbage till it finds a \0 character
					//but we expect it to print an adress
	
	//difference in this
	char str[] = "abcde"; //string is stored in a temporary location
						  // then assigned to the str array
						  //so use this
	char *pstr = "abcde"; //in this the ptr locates to the temporary memory.
	                      //may give error or may not
	                      //dont use this
	
	return 0;
}
