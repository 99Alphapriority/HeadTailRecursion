// static variable function
#include<iostream>
using namespace std;
// global vaiable will act same as static variable i.ie. only a single copy will be made

// int x = 0;


int fun(int n)
{ static int x = 0;
	
	if (n > 0)
	{
		x++;
		return fun(n - 1) + x;

	}
	return 0;
}

void main()
{
	int a = 5;
	cout << fun(a);
}