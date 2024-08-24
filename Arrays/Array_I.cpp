#include <bits/stdc++.h>
using namespace std;

// 1 Find the largest element of an array
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

// 2 Find the second largest element of an array
int findmax2(auto arr)
{
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 2];
}

// 3 check if array is sorted
bool isSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            return false;
    }

    return true;
}

// 4 remove duplicates from an array
void removeDuplicates(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j)
        {
            if (arr[i] == arr[j])
            {
            }
        }
    }
}

int main()
{
    int arr[] = {2, 5, 14, 2, 5, 16, 4, 23, 6, 18};
    vector<int> arr2 = {2, 5, 14, 2, 5, 16, 4, 23, 6, 18};
    int i = findmax(arr, sizeof(arr) / sizeof(arr[0]));
    int j = findmax2(arr2);
    removeDuplicates(arr2, sizeof(arr2) / sizeof(arr2[0]));
    cout << i << endl;
    cout << j << endl;
    return 0;
}