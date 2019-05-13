#include <iostream>
#include <conio.h>

using namespace std;
int main()

{
	cout << "Water Bill Computation" << endl;

	int a, b;
	cout << "Enter amount of gallon consumed: "; cin >> a;
	cout << "Enter unpaid balance from previous months: "; cin >> b;

	if (b > 0)
		cout << "Your bill is " << (35 + (1.1 * a) + b + 20);
	else
		cout << "Your bill is " << (35 + (1.1 * a));

	_getch();
return 0;
	
}