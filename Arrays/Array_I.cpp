#include <bits/stdc++.h>
using namespace std;

int findmax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main()
{
    int arr[] = {2, 5, 14, 2, 5, 16, 4, 23, 6, 18};
    int i = findmax(arr, sizeof(arr) / sizeof(arr[0]));
    cout << arr[i] << endl;
    return 0;
}