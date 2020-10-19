#include<iostream>

using namespace std;

inline int max(int a, int b)
{
	return (a>b)?a:b;
} 

int sum(int a[],int size, int start=0)
{
	int ans =0;
	for(int i=size;i<size;i++)
	{
		ans+=a[i];
	}
	return ans;
}

int sum2(int a, int b, int c=0, int d=1)
{
	return a+b+c+d;
}

int main()
{
	//inline functions.
	//we can use inline functions when code is small, or else no advantage
	int a=10,b=7;
	int c = max(a,b);
	
	//default arguments
	//we can make an input optional by this, like sum function above
	cout<<sum2(2,3,5)<<endl;
	return 0;
}
