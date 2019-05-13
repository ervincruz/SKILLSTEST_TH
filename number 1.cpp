#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;
int main()
{
	char pack;
	float hours, cost;
	bool payUp = false;

	do
	{
		cout << "A: 995 = good for 10 hrs (addt'l 20php/hr) \nB: 1495 = good for 20 hrs (addt'l 10php/hr) \nC: 1995 = unli" << endl;
		cout << "Choose your package: "; cin >> pack;
		
		cout << "How many hours consumed?: "; cin >> hours;

		if ((pack != 'A' && pack != 'a' && pack != 'B' && pack != 'b' && pack != 'C' && pack != 'c') || hours < 0)
		{
			cout << "INVALID INPUT!!!!";
			break;
		}

		else
		{
			switch (pack)
			{
			case 'A':
			case 'a':
				if (hours < 10)
					cost = 995;
				else

					cost = (995 + (hours - 10) * 20);
				break;
			case 'B':
			case 'b':
				if (hours < 20)
					cost = 1495;
				else
					cost = 1495 + (hours - 20) * 10;
				break;
			case 'C':
			case 'c':
				cost = 1995;
				break;
			}
		}
		cout << "TOTAL BILL: " << cost << endl;
	} while (!payUp);
	
	_getch();
	return 0;

	
}

