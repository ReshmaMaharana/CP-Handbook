#include<iostream>

using namespace std;

void print(int *p)
{
	cout<<*p<<endl;
}

void incrementPointer(int *p)
{
	p++;
}

void increment( int *p)
{
	(*p)++;
}

int sum(int a[], int size)//also use int *a in place of array
{
	cout<<"Size of a in function is "<<sizeof(a)<<endl;    //here a is passed as pointer, so 8 only
	int sum=0;
	for(int i = 0; i<size;i++ )
	{
		sum+=a[i];	
	}
	return sum;
}


int main()
{
	int i = 10;
	int *p = &i;
	
	print(p);
	
	//a copy of p is passed
	cout<<p<<endl;
	incrementPointer(p);
	cout<<p<<endl; //value of p doesnt change as we have passed a copy of p
	
	//does the value of int changes??
	cout<<*p<<endl;
	increment(p);
	cout<<*p<<endl;  //yes it changes
	
	//how does it work in case of array
	int arr[10];
	cout<<"Size of a in function is "<<sizeof(arr)<<endl; //a refers to array here, hence 40. but in function the size is 8 only
	cout<<"Sum of array elements is "<< sum(arr,10)<<endl;
	return 0;
}
