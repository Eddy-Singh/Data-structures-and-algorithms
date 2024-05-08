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
    cout << endl
         << endl;

    // Given an array of size N. Find the highest and lowest frequency element.
    int maxFreq = 0, minFreq = a;
    int maxEle = 0, minEle = 0;
    // Traverse through map to find the elements.
    for (auto it : mpp)
    {
        int count = it.second;
        int element = it.first;

        if (count > maxFreq)
        {
            maxEle = element;
            maxFreq = count;
        }
        if (count < minFreq)
        {
            minEle = element;
            minFreq = count;
        }
    }

    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
    return 0;
}