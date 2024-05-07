#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of your array: ";

    cin >> n;
    cout << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number: ";
        cin >> arr[i];
    }
    cout << endl;

    // precomputing
    int hash[12] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    // fetching
    int q;
    cout << "enter the number of elements you want to fetch: ";
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cout << "Enter number: ";
        cin >> x;
        cout << "Frequency: " << hash[x] << endl;
    }

    return 0;
}