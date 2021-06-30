#include<iostream>
using namespace std;

void fun1(int n)
{
	if (n > 0)
	{
		fun1(n - 1);
		cout << n << "\n";
		

	}
}

void fun2(int n)
{
	if (n > 0)
	{
		cout << n << "\n";
		fun2(n - 1);

	}
}

void main()
{
	int x = 3;
	cout << "function 1: calling then returning \n";
	fun1(x);
	cout << "function2: returning then calling\n";
	fun2(x);

}