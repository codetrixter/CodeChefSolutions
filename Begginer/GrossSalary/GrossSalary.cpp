/**

    In a company an emplopyee is paid as under: If his basic salary is less than Rs. 1500, then HRA = 10% of base salary and DA = 90% of basic salary.
    If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary. If the Employee's salary is input, write a program
    to find his gross salary.

    NOTE: Gross Salary = Basic Salary + HRA + DA
    Input

    The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer salary.
    Output

    Output the gross salary of the employee. Your answer will be considered correct if the absolute error is less than 10-2.
    Constraints

       1 ≤ T ≤ 1000
       1 ≤ salary ≤ 100000

    Example

    Input
    3
    1203
    10042
    1312

    Output
    2406.00
    20383.16
    2624

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double basic = 0.00, times = 0;
    double HRA = 0.00, gross = 0.00, DA = 0.00;
    cin >> times;

    while(times-- != 0)
    {
        cin >> basic;

        if(basic < 1500)
        {
            HRA = ((10.00*basic)/100.00);
            DA = ((90.00*basic)/100.00);
            gross = (double)(basic + HRA + DA);
            cout << fixed;
            cout << setprecision(2);
            cout << gross << endl;
        }
        else
        {
            if(basic >= 1500)
            {
                HRA = 500.00;
                DA = ((98.00*basic)/100.00);
                gross = (double)(basic + HRA + DA);
                cout << fixed;
                cout << setprecision(2);
                cout << gross << endl;
            }
        }
    }
    return 0;
}
