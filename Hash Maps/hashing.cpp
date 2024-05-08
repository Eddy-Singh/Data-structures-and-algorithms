#include <bits/stdc++.h>
using namespace std;

int main()
{ // Using hashing to store the frequency of numbers in an array
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

    // Using hashing to store the frequency of characters in a string
    string s;
    cout << "enter your string: ";
    cin >> s;

    // precomputing
    int hashh[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hashh[s[i] - 'a']++;
    }
    // fetching
    int k;
    cout << "enter the number of characters you want to fetch: ";
    cin >> k;
    cout << endl;
    while (k--)
    {
        char c;
        cout << "Enter character: ";
        cin >> c;
        cout << "Frequency: " << hashh[c - 'a'] << endl;
    }

    // Hash maps
    int t;
    cin >> t;
    int arrr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arrr[i];
    }

    // precomputing
    map<int, int> mpp;
    for (int i = 0; i < t; i++)
    {
        mpp[arrr[i]]++;
    }

    int y;
    cout << "enter the number of elements you want to fetch: ";
    cin >> y;
    while (y--)
    {
        int x;
        cin >> x;
        cout << "Frequency: " << mpp[x] << endl;
    }

    return 0;
}