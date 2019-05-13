#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a, b, c;
	cout << "enter any number: "; cin >> a;

	do
	{
		c = 0;
		for (b = 1; b <= a; b++)
		{
			c += b;
		}
		cout << "the sum of all numbers from 1 to " << a << " is " << c << endl;
		cout << "enter any number: "; cin >> a;

	} 
	while (a > 0);
	cout << "thank you" << endl;

	_getch();
	return 0;
}