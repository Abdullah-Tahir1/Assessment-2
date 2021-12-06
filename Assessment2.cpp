#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int main()
{
	int Num,Fact = 1, Counter = 1;
	long Exponent;
	string Name;
	cout << "Enter your name: ";
	getline(cin, Name);
	cout << "Enter a number: ";
	cin >> Num;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid number\nTry again: ";
		cin >> Num;
	}
	for (int i = Num; i > 0; i--)
	{
		Fact *= i;
	}
	cout << "Factorial is: " << Fact << endl;
	do
	{
		cout << Num << " x " << Counter << " = " << Num * Counter << endl;
		Counter++;
	} while (Counter < 11);
	for (int i = 0; i < 11; i++)
	{
		Exponent = pow(Num, i); // Putting the exponent value in a variable with long data type
		cout << Num << " with exponent of " << i << " = " << Exponent << endl; // Printing out the exponent with a varible with long data type so we can get the exact value
	}
	return 0;
}