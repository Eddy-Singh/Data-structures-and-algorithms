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
    cout << jj[2].second << endl
         << endl;
}

// Vectors
void explainVectors()
{
    vector<int> v = {1, 2, 3, 4, 5};

    v.push_back(1);
    v.emplace_back(2);
    vector<int>::iterator i = v.begin();
    auto j = v.begin(); // same as above line
    auto k = v.end();   // points next to the last element
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    } // same as above
    cout << endl;

    v.erase(v.begin() + 2);                // erase 3rd element
    v.erase(v.begin() + 1, v.begin() + 3); // erase 2nd and 3rd element
    v.insert(v.begin() + 1, 7);            // insert 300 at 2nd position
    v.insert(v.begin() + 1, 3, 8);         // insert 100, 100 at 2nd position

    cout << v.size() << endl;
    v.pop_back(); // remove last element

    for (auto i : v)
    {
        cout << i << " ";
    } // for each loop
    cout << endl;

    v.clear();                              // clear the vector
    cout << boolalpha << v.empty() << endl; // boolean value if vector is empty or not

    vector<pair<int, double>> v2;
    v2.push_back({1, 2.3});
    v2.emplace_back(4, 5.5);
    cout << v2[0].second << " " << v2[1].first << endl;

    vector<int> v3(5, 100); //{100,100,100,100,100}
    cout << v3.back() << endl;

    vector<int> v4(5); //{0,0,0,0,0}

    vector<int> v5(v); // copy of v in v5
}

// Lists
void explainList()
{
    list<int> ls;
    ls.push_back(4);
    ls.push_front(5);
    ls.emplace_back(6);
    ls.emplace_front(7); // rest functions are same as vectors
}

int main()
{
    explainPair();
    explainVectors();
    return 0;
}