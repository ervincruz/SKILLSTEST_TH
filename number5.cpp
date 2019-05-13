#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a, b, c;
	a = 0;
	b = 1;

	for (int counter = 0; counter < 20; counter++)
	{
		if (counter == 0)
		{
			cout << "Fibonnacci Numbers: ";
			cout << a << ", " << b << ", ";
		}
		else
		{
			c = a + b;
			a = b;

			b = c;

			cout << c << ", ";
		}
	}
	for (int counter = 10496; counter <= 10496; counter++)
	{
		cout << counter;
	}

	_getch();
	return 0;
}
