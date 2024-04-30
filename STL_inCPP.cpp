#include <bits/stdc++.h>
using namespace std;

// Pairs
void explainPair()
{
    pair<int, int> p = {1, 4};
    cout << p.first << " " << p.second << endl;
    pair<int, pair<string, string>> p2 = {2, {"namaste", "Salaam"}};
    cout << p2.first << " " << p2.second.first << endl;
    pair<int, double> jj[] = {{1, 2.3}, {2, 3.4}, {3, 4.5}};
    cout << jj[2].second;
}

// Vectors
void explainVectors()
{
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, double>> v2;
    v2.push_back({1, 2.3});
    v2.emplace_back(4, 5.5);

    vector<int> v3(5, 100); //{100,100,100,100,100}

    vector<int> v4(5); //{0,0,0,0,0}

    vector<int> v4(v); // copy of v in v4
}

int main()
{
    explainPair();
    return 0;
}