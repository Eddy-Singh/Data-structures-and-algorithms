#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int, int> p = {1, 3};
    pair<int, int> y = {5, 7};
    cout << p.first << " " << p.second << endl;
    pair<int, pair<int, int>> q = {1, {3, 2}};
    cout << q.first << " " << q.second.second << " " << q.second.first << endl;
    pair<int, int> arr[] = {{1, 2}, {3, 5}, {7, 9}};
    cout << arr[1].second;
    p.swap(y);
}

void explainVector()
{
    vector<int> v;
    v.emplace_back(2);
    v.emplace_back(4);
    v.emplace_back(6);
    v.emplace_back(8);

    vector<pair<int, int>> vec;
    vec.emplace_back(4, 6);

    vector<int> ve(5, 100); // 100 100 100 100 100
    vector<int> vect(5);    // 0 0 0 0 0

    vector<int> v3(ve); // v3= 100 100 100 100 100

    vector<int>::iterator it = v3.begin();
    auto ite = v.begin();
    ite = v.end(); // points next to the last element in the vector

    ite--;
    ite -= 2;
    ite++;

    for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++)
    {
        cout << *iter << " ";
    }
    for (auto iter = v.begin(); iter != v.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl
         << v.back() << endl; // last element value

    v.erase(v.begin());
    v.erase(v.begin(), v.begin() + 2); // 2nd term points to the element next to the mentioned address
    vector<int> v4(2, 100);            // 100 100
    v4.insert(v4.begin(), 300);        // 300 100 100
    v4.insert(v4.begin() + 1, 2, 10);  // 300 10 10 100 100
    cout << v4.size();

    vector<int> copy(2, 50);                         // 50 50
    v4.insert(v4.begin(), copy.begin(), copy.end()); // 50 50 300 10 10 100 100

    cout << v4.size();
    v4.pop_back();

    v.swap(v4);
    v4.clear();        // clears whole  vector
    cout << v.empty(); // bool
    cout << v.front();
}

void explainList()
{

    // everything is exactly similar to the vectors except the emplace_front function
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(9);
    ls.emplace_front(6);
    for (list<int>::iterator it = ls.begin(); it != ls.end(); it++)
    {
        cout << *it << " ";
    }
    cout << ls.front();
}

void explainDeque()
{
    // everything is exactly similar to the vectors except the emplace_front function
    deque<int> dq;
    dq.emplace_back(2);
    dq.emplace_front(5);
    dq.front();
    dq.back();
};

void explainStack()
{
    // LIFO
    stack<int> st;
    st.push(3);
    st.emplace(10);
    st.pop(); // 10
    st.emplace(14);
    st.emplace(3);
    cout << st.top();   // 3
    cout << st.empty(); // bool
    cout << st.size();
    stack<int> st1, st2;
    st1.swap(st2);
}
class Cookie
{
private:
    string color;

public:
    Cookie(string color)
    {
        this->color = color;
    }
    string getColor()
    {
        return color;
    }
    void setColor(string abc)
    {
        this->color = abc;
        cout << "color has been set to: " << color << endl;
    }
};

int main()
{
    explainPair();

    Cookie *cookieone = new Cookie("Green");
    cout << cookieone->getColor();
    cookieone->setColor("blue");
    cout << cookieone->getColor();

    int arr[5] = {1, 2, 3, 4, 5};
    string num = "0123456789";
    cout << num.substr(3, 4) << endl;
    explainList();
    return 0;
}