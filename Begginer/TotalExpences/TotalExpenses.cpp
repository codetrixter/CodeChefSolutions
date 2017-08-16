/**
 * While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000. 
	If the quantity and price per item are input, write a program to calculate the total expenses.

	Input
	The first line contains an integer T, total number of test cases. Then follow T lines, each line contains integers quantity and price.

	Output
	Output the total expenses while purchasing items.

	Constraints
	1 ≤ T ≤ 1000
	1 ≤ quantity,price ≤ 100000
	Example
	Input

	3 
	100 120
	10 20
	1200 20

	Output

	12000.000000
	200.000000
	21600.000000
*/

#include <iostream>

using namespace std;

int main()
{
	double quant = 0, price = 0, newprice = 0;
	int times = 0;
	double totalex = 0.0;
	cin >> times;
	
	while (times-- != 0)
	{
		totalex = 0;
		cin >> quant >> price;
		
		if (quant > 1000)
		{
			newprice = price - ((10*price)/100);

			totalex += quant * newprice;
			cout << totalex;
			continue;
		}
		totalex = quant * price;
		cout << totalex << endl;
	}
}
