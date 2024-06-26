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

// Stacks
void explainStack()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.emplace(3);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << s.size() << endl;
    cout << boolalpha << s.empty() << endl;
}

// Queues
void explainQueue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    cout << q.size() << endl;
    cout << boolalpha << q.empty() << endl;
}

// Priority Queues
void explainPriorityQueue()
{
    // max heap
    priority_queue<int> pq;
    pq.push(6);
    pq.push(12);
    pq.emplace(4);
    pq.emplace(5);
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    cout << pq.size() << endl;
    cout << boolalpha << pq.empty() << endl;

    // min heap
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(6);
    pq2.push(12);
    pq2.emplace(4);
    pq2.emplace(5);
    cout << pq2.top() << endl;
    pq2.pop();
    cout << pq2.top() << endl;
    cout << pq2.size() << endl;
    cout << boolalpha << pq2.empty() << endl;
}

// Sets
void explainSet()
{ // ordered and unique elements
    set<int> s;
    s.insert(10);
    s.emplace(20);
    s.insert(70);
    s.insert(40);
    s.emplace(50);
    s.insert(10); // 10 20 40 50 70
    auto i = s.find(1000);
    s.erase(40);
    cout << s.count(50) << endl; // returns 1 if found else 0
    cout << *i << endl;          // returns iterator to 1 if found else returns iterator to end
}

// Multi Sets
void explainMultiSet()
{ // ordered and non-unique elements
    multiset<int> s;
    s.insert(10);
    s.emplace(20);
    s.insert(70);
    s.insert(40);
    s.emplace(50);
    s.insert(50);
    s.emplace(50);
    s.insert(50);
    s.insert(10); // 10 10 20 40 50 70
    auto i = s.find(1000);
    s.erase(40);
    s.erase(s.find(50));
    cout << s.count(10) << endl; // returns 2 if found else 0
    cout << s.count(50) << endl;
    cout << *i << endl; // returns iterator to 1 if found else returns iterator to end
}

// Unordered Sets
void explainUnorderedSet()
{ // unordered and unique elements
    unordered_set<int> s;
    s.insert(10);
    s.emplace(20);
    s.insert(70);
    s.insert(40);
    s.emplace(50);
    s.insert(10); // 50 10 20 70 40
    // auto i = s.find(1000);
    s.erase(40);
    cout << s.count(50) << endl; // returns 1 if found else 0
    // cout << *i << endl;          // returns iterator to 1 if found else returns iterator to end
}

// Maps
void explainMaps()
{ // ordered and unique keys
    map<int, int> mpp1;
    map<int, pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp3;

    mpp1[1] = 2;
    mpp1.insert({2, 3});
    mpp1.emplace(5, 10);
    mpp3[{4, 1}] = 10;

    for (auto i : mpp1)
    {
        cout << i.first << " " << i.second << endl;
    }
    auto it = mpp1.find(5);
    cout << it->second << endl;
}

// Multi Maps
void explainMultiMaps()
{ // ordered and non-unique keys
    multimap<int, int> mpp1;
    multimap<int, pair<int, int>> mpp2;
    multimap<pair<int, int>, int> mpp3;

    mpp1.insert({1, 2});
    mpp1.insert({1, 3});
    mpp1.insert({2, 3});
    mpp1.insert({2, 4});
    mpp1.emplace(5, 10);

    for (auto i : mpp1)
    {
        cout << i.first << " " << i.second << endl;
    }
    auto it = mpp1.find(5);
    cout << it->second << endl;
}

// Unordered Maps
void explainUnorderedMaps()
{ // unordered and unique keys
    unordered_map<int, int> mpp1;
    unordered_map<int, pair<int, int>> mpp2;

    mpp1[1] = 2;
    mpp1.insert({2, 3});
    mpp1.emplace(5, 10);

    for (auto i : mpp1)
    {
        cout << i.first << " " << i.second << endl;
    }
    auto it = mpp1.find(5);
    cout << it->second << endl;
}

int main()
{
    explainPair();
    explainVectors();
    explainList();
    explainStack();
    explainQueue();
    explainPriorityQueue();
    explainSet();
    explainMultiSet();
    explainUnorderedSet();
    explainMaps();
    explainMultiMaps();
    explainUnorderedSet();
    return 0;
}