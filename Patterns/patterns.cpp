#include <iostream>
#include <cctype>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
     cout << "Pattern 1: " << endl;
     for (int i = 0; i < 5; i++)
     {
          for (int j = 0; j < 5; j++)
          {
               cout << "*";
          }
          cout << endl;
     }
     cout << endl
          << endl;

     cout << "Pattern 2: " << endl;
     for (int i = 0; i < 5; i++)
     {
          for (int j = 0; j <= i; j++)
          {
               cout << "*";
          }
          cout << endl;
     }
     cout << endl
          << endl;

     cout << "Pattern 3: " << endl;
     for (int i = 0; i < 5; i++)
     {
          for (int j = 1; j <= i + 1; j++)
          {
               cout << j;
          }
          cout << endl;
     }
     cout << endl
          << endl;

     cout << "Pattern 4: " << endl;
     for (int i = 1; i <= 5; i++)
     {
          for (int j = 0; j < i; j++)
          {
               cout << i;
          }
          cout << endl;
     }
     cout << endl
          << endl;

     cout << "Pattern 5: " << endl;
     for (int i = 0; i < 5; i++)
     {
          for (int j = 0; j < 5 - i; j++)
          {
               cout << "*";
          }
          cout << endl;
     }
     cout << endl
          << endl;

     cout << "Pattern 6: " << endl;
     for (int i = 0; i < 5; i++)
     {
          for (int j = 0; j < 5 - i; j++)
          {
               cout << j + 1;
          }
          cout << endl;
     }
     cout << endl
          << endl;

     cout << "Pattern 7: " << endl;
     for (int i = 0; i < 5; i++)
     {
          for (int j = 1; j < 5 - i; j++)
          {
               cout << " ";
          }
          for (int j = 0; j <= 2 * i; j++)
          {
               cout << "*";
          }
          cout << endl;
     }
     cout << endl
          << endl;

     cout << "Pattern 8: " << endl;
     for (int i = 0; i < 5; i++)
     {
          for (int j = 1; j <= i; j++)
          {
               cout << " ";
          }
          for (int j = 0; j < 2 * (5 - i) - 1; j++)
          {
               cout << "*";
          }
          cout << endl;
     }
     cout << "Pattern 9: " << endl;

     cout << endl
          << endl;

     cout << "Pattern 10: " << endl;

     cout << endl
          << endl;

     cout << "Pattern 11: " << endl;

     cout << endl
          << endl;

     cout << "Pattern 12: " << endl;

     cout << endl
          << endl;

     cout << "Pattern 13: " << endl;

     cout << endl
          << endl;

     cout << "Pattern 14: " << endl;

     cout << endl
          << endl;

     cout << "Pattern 15: " << endl;

     cout << endl
          << endl;

     cout << "Pattern 16: " << endl;

     cout << endl
          << endl;

     cout << "Pattern 17: " << endl;

     cout << endl
          << endl;

     cout << "Pattern 18: " << endl;

     cout << endl
          << endl;

     cout << "Pattern 19: " << endl;

     cout << endl
          << endl;

     cout << "Pattern 20: " << endl;

     cout << endl
          << endl;

     cout << "Pattern 21: " << endl;

     cout << endl
          << endl;

     cout << "Pattern 22: " << endl;

     cout << endl
          << endl;

     return 0;
}