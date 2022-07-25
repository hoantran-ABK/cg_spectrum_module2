#include <iostream>

using namespace std;

int main() 
{
	int a, b;
	int* ptrA;
	int* ptrB;

	cout << "Enter an integer value: ";
	cin >> a;

	cout << "Enter another integer value: ";
	cin >> b;

	ptrA = &a;
	ptrB = &b;

	cout << "ptrA val : " << ptrA << endl;
	cout << "value @ *ptrA : " << *ptrA << endl;

	cout << "ptrB val : " << ptrB << endl;
	cout << "value @ *ptrB : " << *ptrB << endl;
}