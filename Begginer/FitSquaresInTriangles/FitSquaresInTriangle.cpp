/**

    What is the maximum number of squares of size 2x2 that can be fit in a right angled isosceles triangle of base B.
    One side of the square must be parallel to the base of the isosceles triangle.
    Base is the shortest side of the triangle
    Input
    First line contains T, the number of test cases.
    Each of the following T lines contains 1 integer B.
    Output
    Output exactly T lines, each line containing the required answer.
    Constraints
    1 ≤ T ≤ 103
    1 ≤ B ≤ 104

    Sample Input(Base)

    11
    1
    2
    3
    4
    5
    6
    7
    8
    9
    10
    11
    Sample Output(number of Squares)

    0
    0
    0
    1
    1
    3
    3
    6
    6
    10
    10

*/

#include <iostream>

using namespace std;

int numberOfSquares(int base)
{
    int n = 0;
    while(base != 0)
    {
        n += base;
        base--;
    }
    return n;
}

int main()
{
    int base = 0, numberofsquares = 0, basesquare = 0;
    int times = 0;
    cin >> times;
    
    while(times != 0)
    {
        cin >> base;

        if(base < 4)
            cout << numberofsquares << endl;

        if(base >=4)
        {
            basesquare = (base-2)/2;
            numberofsquares = numberOfSquares(basesquare);
            cout << numberofsquares << endl;
        }

        times--;
    }
    return 0;
}
