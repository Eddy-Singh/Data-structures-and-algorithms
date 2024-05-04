#include <bits/stdc++.h>
#include <iostream>
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
    long result = 0;
    for (int i = 0; i < 32; ++i)
    {
        int bit = n & 1;
        result <<= 1;
        result |= bit;
        n >>= 1;
    }

    // Return the result
    return result;
}

int calcGCD(int n, int m)
{
    int j = 0;
    for (int i = 1; i <= min(n, m); i++)
    {
        if (min(n, m) % i == 0 && (max(n, m) % i) == 0)
            j = i;
    }
    return j;
}

// You are given an integer 'n'. Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.
// An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised to 'kth' power is equal to the number itself. For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.
bool checkArmstrong(int n)
{
    int dup = n;
    int dig = 0;
    while (dup > 0)
    {
        dup = dup / 10;
        dig++;
    }
    int sum = 0;
    int dup2 = n;
    int temp = 0;
    while (dup2 > 0)
    {
        temp = dup2 % 10;
        sum = sum + pow(temp, dig);
        dup2 = dup2 / 10;
    }
    return (n == sum);
}

// You are given an integer ‘n’. Function ‘sumOfDivisors(n)’ is defined as the sum of all divisors of ‘n’. Find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to ‘n’.
int sumOfDivisors(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}
int sumOfAllDivisors(int n)
{
    int sum = 0;
    int dup = n;

    for (int i = 0; i < n; i++)
    {
        sum = sum + sumOfDivisors(dup);
        dup--;
    }
    return sum;
}

int main()
{
    cout << countDigits(336) << endl;
    cout << reverseBits(12) << endl;
    cout << calcGCD(20, 15) << endl;
    cout << checkArmstrong(371) << endl;
    cout << sumOfAllDivisors(5) << endl;
    return 0;
}