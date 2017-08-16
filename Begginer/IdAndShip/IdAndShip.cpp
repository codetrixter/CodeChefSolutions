/**
 * Write a program that takes in a letterclass ID of a ship and display the equivalent string class description of the given ID. Use the table below.

	Class ID	Ship Class
	B or b	BattleShip
	C or c	Cruiser
	D or d	Destroyer
	F or f	Frigate
	Input
	The first line contains an integer T, total number of testcases. Then follow T lines, each line contains a character.

	Output
	Display the Ship Class depending on ID.

	Constraints
	1 ≤ T ≤ 1000
	Example
	Input

	3 
	B
	c
	D

	Output
	BattleShip
	Cruiser
	Destroyer
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	char ch;
	int times = 0;
	cin >> times;
	while (times-- != 0)
	{
		cin >> ch;
		
		if (ch == 'b' || ch == 'B')
		cout << "BattleShip" << endl;
		
		else if (ch == 'c' || ch == 'C')
		cout << "Cruiser" << endl;
		
		else if (ch == 'd' || ch == 'D')
		cout << "Destroyer" << endl;
		
		else
		cout << "Wrong input" << endl;
	}
}


