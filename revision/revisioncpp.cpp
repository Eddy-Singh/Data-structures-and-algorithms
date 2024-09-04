#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int tar)
{
    int found = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == tar)
        {
            return i;
        }
    }
    return -1;
}
void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int i = 1; i < n; i++)
        {
            if (arr[i - 1] > arr[i])
            {
                swap(arr[i - 1], arr[i]);
            }
        }
    }
}
const int rows = 2;
const int cols = 3;
void printMatrix(int mat[rows][cols])
{

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            cout << mat[row][col] << endl;
        }
    }
}

void switchptr(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void printString(char word[])
{
    for (int i = 0; i < strlen(word); i++)
    {
        cout << word[i];
    }
    cout << endl;
}

bool isValid(string customerNumber)
{

    if ((!customerNumber.length() == 6))
        return false;
    for (int i = 0; i < 2; i++)
    {
        if (!isalpha(customerNumber[i]))
            return false;
    }
    for (int i = 2; i < customerNumber.length(); i++)
    {
        if (!isdigit(customerNumber[i]))
            return false;
    }

    return true;
}

int main()
{
    // int *numbers = new int[5];
    // int entries = 0;
    // while (true)
    // {

    //     cout << "number: ";
    //     cin >> numbers[entries];
    //     if (cin.fail())
    //         break;
    //     if (entries == 5)
    //     {
    //         int *numbers2 = new int[10];
    //         for (int i = 0; i < 5; i++)
    //         {
    //             numbers2[i] = numbers[i];
    //         }
    //         delete[] numbers2;
    //         numbers = numbers2;
    //     }
    //     entries++;
    // }
    char name1[] = "Joker";
    char name2[] = "Batman";
    printString(name1);
    // strcpy(name1, name2);

    cout << strcmp(name2, name2) << endl;
    string name = "no hello world wide";
    cout << name.rfind("e") << endl;

    string fullname = "Gopal Yadavyadavyadav";
    int spc = fullname.find(" ");
    int length = fullname.length();
    string first = fullname.substr(0, spc);
    cout << first << endl;
    string second = fullname.substr(spc + 1);
    cout << second << endl
         << endl;

    string a = "qe1234";
    string b = "12ff12";
    cout << isValid(a) << endl;
    cout << isValid(b) << endl;
    cout << to_string(12).length() << endl;
    cout << (stoi("9875")) + 25 << endl
         << endl;
    string c = "aaaaaaaaaa";
    int s = a.size();
    int arr[5] = {90, 80, 70, 60, 50};
    int q = a.length();

    cout << s << " " << q;
    return 0;
}