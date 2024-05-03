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

// There is a song concert going to happen in the city. The price of each ticket is equal to the number obtained after reversing the bits of a given 32 bits unsigned integer ‘n’.
long reverseBits(long n)
{
    // Initialize result to 0
    long result = 0;

    // Iterate through each bit of the given number
    for (int i = 0; i < 32; ++i)
    {
        // Get the least significant bit of n
        int bit = n & 1;

        // Shift the result to the left by 1 bit
        result <<= 1;

        // Add the current bit to the result
        result |= bit;

        // Right shift n by 1 bit to process the next bit
        n >>= 1;
    }

    // Return the result
    return result;
}

int main()
{
    cout << countDigits(336) << endl;
    cout << reverseBits(12) << endl;
    return 0;
}