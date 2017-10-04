/**
 * A certain grade of steel is graded according to the following conditions.

	Hardness must be greater than 50.
	Carbon content must be less than 0.7.
	Tensile strength must be greater than 5600.



	The grades are as follows:


	Grade is 10 if all three conditions are met.
	Grade is 9 if conditions (i) and (ii) are met.
	Grade is 8 if conditions (ii) and (iii) are met.
	Grade is 7 if conditions (i) and (iii) are met.
	Garde is 6 if only one condition is met.
	Grade is 5 if none of three conditions are met.


	Write a program, if the user gives values of hardness, carbon content and tensile strength of the steel under consideration and display the 
	* grade of the steel. 

	Input
	The first line contains an integer T, total number of testcases. Then follow T lines, each line contains three numbers hardness, carbon content 
	* and tensile strength of the steel.

	Output
	Print Grade of the steel depending on Conditions.

	Constraints
	1 ≤ T ≤ 1000
	1≤ hardness, carbon content, tensile strength ≤ 10000
	Example
	Input

	3 
	53 0.6 5602
	45 0 4500
	0 0 0 
	Output

	10
	6
	6
*/

#include <iostream>

using namespace std;

int main()
{
	double hardness = 0, carbonContent = 0, tensileStrength = 0;
	int grade = 0, times = 0;
	cin >> times;
	
	while (times-- != 0)
	{
		hardness = 0, carbonContent = 0, tensileStrength = 0,grade = 0;
		cin >> hardness >> carbonContent >> tensileStrength;
		
		if ((hardness > 50) && (carbonContent < 0.7) && (tensileStrength > 5600))
		{
			grade = 10;
			cout << grade << endl;
		}
		else if ((hardness > 50) && (carbonContent < 0.7))
		{
			grade = 9;
			cout << grade << endl;
		}
		else if ((carbonContent < 0.7) && (tensileStrength > 5600))
		{
			grade = 8;
			cout << grade << endl;
		}
		else if ((hardness > 50) && (tensileStrength > 5600))
		{
			grade = 7;
			cout << grade << endl;
		}
		else if ((hardness > 50) || (carbonContent < 0.7) || (tensileStrength > 5600))
		{
			grade = 6;
			cout << grade << endl;
		}
		else
		{
			grade = 5;
			cout << endl;
		}
	}
}
