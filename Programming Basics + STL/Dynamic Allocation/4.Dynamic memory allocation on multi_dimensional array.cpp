#include<iostream>

using namespace std;

int main()
{
	//new int[10][10] is not allowed
	int **p = new int*[10];
	for(int i = 10;i<10;i++)
	{
		p[i] = new int[20];
	}    					//this creates a multidimensional array
	//here the arrays can also not be stacked together like in stack
	
	
	//deleting multidimensional arrays
	for(int i=0;i<10;i++)
	{
		delete [] p[i];
	}
	delete [] p;
	
	
	
	return 0;
}
