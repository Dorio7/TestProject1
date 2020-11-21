#include <iostream>
using namespace std;

int Fib(int n)
{
	return n < 2 ? 1 : (Fib(n - 1) + Fib(n - 2));
}

int main()
{
	cout << Fib(10) << endl;

	char aw[] = "asdww";

}