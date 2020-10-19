#include<iostream>

using namespace std;

int main()
{
	//typecasting
	int i = 65;
	char c = i;
	cout<<c<<endl;
	
	//typecasting int to char
	int *p = &i;
//	char *pc = p; //error because we cant put int to char
	char *pc = (char*)p; //explicit typecasting. this is allowed
	
	cout<<*(pc)<<endl;  //it prints A
	cout<<*(pc+1)<<endl;//null
	cout<<*(pc+2)<<endl;//null
	cout<<*(pc+3)<<endl; //this doesnt
	//the values in an int are stored in reverse order
	//65 is stored in 4 bytes as 65|0|0|0 and not like
	// we expect 0|0|0|65. this is the "Little Endian system"
	//opposite to this is the "Big Endian System"
	
	cout<<p<<endl;
	cout<<pc<<endl; //this prints only A, as the next value is a null pointer
	
	
	
	
	return 0;
}
