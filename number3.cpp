#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>

using namespace std;
int main()

{
	cout << "Put any number on each line." << endl;

	
	int a;
	double x, y, z, V;
	z = 2.50;
	cout << "X: "; cin >> a;
	cout << "Y: "; cin >> y;

	switch(a)
	{
	case 1:
	{
		if (x = 1 && y < 5 && y>1)
		{
			x = 1;
			V = x * y * z;
			cout << "V is equal to " << setprecision(2) << setw(10) << fixed << V << endl;
		}
		else if (x = 1 && y >= 5)
		{
			x = 1;
			V = x + (y / z);
			cout << "V is equal to " << setprecision(2) << setw(10) << fixed << V << endl;
		}
	}
	break;

	case 2:
	{
	
		{
			if (x = 2 && y <= 5)
				V = abs((x - y) / z);
			cout << "V is equal to " << setprecision(2) << setw(10) << V << endl;
		}

		if (x = 2 && y > 5)
		{
		V = (x - sqrt(y + z));
		cout << "V is equal to " << setprecision(2) << setw(10) << V << endl;
		}
	}
	break;

	default:
	{
		x = a;
		V = x + y + z;
		cout << "V is equal to " << setprecision(2) << setw(10) << V << endl;
	}
	break;
	}

	_getch();
	return 0;





}