#include <bits/stdc++.h>
using namespace std;

int main()
{ // Given an array, we have found the number of occurrences of each element in the array.
    int a;
    cout << "Enter the size of your array: ";
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cout << "Enter number: ";
        cin >> arr[i];
    }
    unordered_map<int, int> mpp;
    for (int i = 0; i < a; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto i : mpp)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}