/**

    Today is Chef's birthday. His mom has surprised him with truly fruity gifts: 2 fruit baskets. The first basket contains N apples, and the second one contains M oranges.
    Chef likes apples and oranges very much but he likes them equally, and therefore, wants to have the minimum possible difference between
    the number of apples and oranges he has. To do so, he can purchase 1 apple or 1 orange by paying exactly 1 gold coin (that's some expensive fruit, eh?).
    Chef can purchase fruits at most K times (as he has only K gold coins in his pocket) to make the difference the minimum possible.

    Our little Chef is busy in celebrating his birthday to the fullest, and therefore, he has handed this job to his best friend — you. Can you help him by finding
    the minimum possible difference he can achieve between the number of apples and orange he owns?

    Input
    The first line of input contains a single integer T denoting the number of test cases. The first and only line of each test case contains 3 space
    separated integers — N, M and K — denoting the number of apples, number of oranges, and number of gold coins our little Chef has.

    Output
    For each test case, output the minimum possible difference between the number of apples and oranges that Chef can achieve.

    Constraints
    1 ≤ T ≤ 100
    1 ≤ N, M, K ≤ 100
    Example
    Input
    3
    3 4 1
    5 2 1
    3 4 3

    Output
    0
    2
    0
    Explanation
    Test 1: Chef will buy 1 apple by paying 1 gold coin and will have equal number of apples and oranges.
    Test 2: Chef will buy 1 orange by paying 1 gold coin and will have 5 apples and 3 oranges.

*/

#include <iostream>

using namespace std;

int main()
{
    int times = 0, large = 0, small = 0, N = 0, M = 0, K = 0;
    cin >> times;

    while(times-- != 0)
    {
        cin >> N >> M >> K;

        if(N < M)
        {
            small = N;
            large = M;
        }
        else
        {
            small = M;
            large = N;
        }

        if(K <= (large-small))
        {
            small += K;
            cout << (large-small) << endl;
        }

        else
        if(K > (large-small))
        {
            K -= (large-small);
            small += (large-small);
            if(K % 2 == 0)
                cout << 0 << endl;
            else
                cout << 1 << endl;
        }

    }
    return 0;
}
