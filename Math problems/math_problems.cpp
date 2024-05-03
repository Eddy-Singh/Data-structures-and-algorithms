#include <bits/stdc++.h>
using namespace std;

// Find the number of digits of ‘n’ that evenly divide ‘n’.
int countDigits(int n)
{
    int k = n;
    int j = 0;
    while (k > 0)
    {
        int u = k % 10;
        if (u == 0)
        {
            k = k / 10;
            continue;
        }
        if (n % u == 0)
        {
            j++;
        }
        k = k / 10;
    }
    return j;
}

int main()
{
    cout << countDigits(336) << endl;
    return 0;
}