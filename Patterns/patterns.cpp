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
     cout << endl
          << endl;

     cout << "Pattern 9: " << endl;
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
     cout << endl
          << endl;

     cout << "Pattern 10: " << endl;
     for (int i = 0; i < 5; i++)
     {
          for (int j = 0; j <= i; j++)
          {
               cout << "*";
          }
          cout << endl;
     }
     for (int i = 0; i < 5; i++)
     {
          for (int j = 1; j < 5 - i; j++)
          {
               cout << "*";
          }
          cout << endl;
     }

     cout << endl
          << endl;

     cout << "Pattern 11: " << endl;
     for (int i = 0; i < 5; i++)
     {
          for (int j = 0; j <= i; j++)
          {
               cout << (j + 1) % 2;
          }
          cout << endl;
     }
     cout << endl
          << endl;

     cout << "Pattern 12: " << endl;
     for (int i = 0; i < 4; i++)
     {
          for (int j = 1; j <= i + 1; j++)
          {
               cout << j;
          }
          for (int j = 0; j < 2 * (4 - i - 1); j++)
          {
               cout << "*";
          }
          for (int j = i + 1; j >= 1; j--)
          {
               cout << j;
          }

          cout << endl;
     }
     cout << endl
          << endl;

     cout << "Pattern 13: " << endl;
     int p = 1;
     for (int i = 1; i <= 5; i++)
     {
          for (int j = 1; j <= i; j++)
          {
               cout << p << " ";
               p++;
          }
          cout << endl;
     }
     cout << endl
          << endl;

     cout << "Pattern 14: " << endl;
     char arr[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
     for (int i = 0; i < 5; i++)
     {
          for (int j = 0; j <= i; j++)
          {
               cout << arr[j];
          }
          cout << endl;
     }
     cout << endl
          << endl;

     cout << "Pattern 15: " << endl;
     for (int i = 0; i < 5; i++)
     {
          for (int j = 0; j < 5 - i; j++)
          {
               cout << arr[j];
          }
          cout << endl;
     }
     cout << endl
          << endl;

     cout << "Pattern 16: " << endl;
     for (int i = 0; i < 5; i++)
     {
          for (int j = 0; j <= i; j++)
          {
               cout << arr[i];
          }
          cout << endl;
     }
     cout << endl
          << endl;

     cout << "Pattern 17: " << endl;
     for (int i = 0; i < 4; i++)
     {
          for (int j = 1; j < 4 - i; j++)
          {
               cout << " ";
          }
          for (int j = 0; j <= i; j++)
          {
               cout << arr[j];
          }
          for (int j = i; j > 0; j--)
          {
               cout << arr[j - 1];
          }

          cout << endl;
     }
     cout << endl
          << endl;

     cout << "Pattern 18: " << endl;
     for (int i = 0; i < 5; i++)
     {
          for (int j = 5 - i - 1; j < 5; j++)
          {
               cout << arr[j] << " ";
          }
          cout << endl;
     }
     cout << endl
          << endl;

     cout << "Pattern 19: " << endl;
     for (int i = 1; i <= 5; i++)
     {
          for (int j = 0; j < 5 - i + 1; j++)
          {
               cout << "* ";
          }
          for (int j = 0; j < i - 1; j++)
          {
               cout << "    ";
          }
          for (int j = 0; j < 5 - i + 1; j++)
          {
               cout << "* ";
          }
          cout << endl;
     }
     for (int i = 1; i <= 5; i++)
     {
          for (int j = 0; j < i; j++)
          {
               cout << "* ";
          }
          for (int j = 0; j < 5 - i; j++)
          {
               cout << "    ";
          }
          for (int j = 0; j < i; j++)
          {
               cout << "* ";
          }
          cout << endl;
     }
     cout << endl
          << endl;

     cout << "Pattern 20: " << endl;
     for (int i = 1; i < 5; i++)
     {
          for (int j = 0; j < i; j++)
          {
               cout << "* ";
          }
          for (int j = 0; j < 5 - i; j++)
          {
               cout << "    ";
          }
          for (int j = 0; j < i; j++)
          {
               cout << "* ";
          }
          cout << endl;
     }
     for (int i = 1; i <= 5; i++)
     {
          for (int j = 0; j < 5 - i + 1; j++)
          {
               cout << "* ";
          }
          for (int j = 0; j < i - 1; j++)
          {
               cout << "    ";
          }
          for (int j = 0; j < 5 - i + 1; j++)
          {
               cout << "* ";
          }
          cout << endl;
     }
     cout << endl
          << endl;

     cout << "Pattern 21: " << endl;
     for (int i = 0; i < 4; i++)
     {
          for (int j = 0; j < 4; j++)
          {
               if (j == 4 - 1 || j == 0 || i == 0 || i == 4 - 1)
               {
                    cout << "*";
               }
               else
               {
                    cout << " ";
               }
          }
          cout << endl;
     }
     cout << endl
          << endl;

     cout << "Pattern 22: " << endl;
     for (int i = 0; i < 2 * 4 - 1; i++)
     {

          for (int j = 0; j < 2 * 4 - 1; j++)
          {

               int top = i;
               int bottom = j;
               int right = (2 * 4 - 2) - j;
               int left = (2 * 4 - 2) - i;

               cout << (4 - min(min(top, bottom), min(left, right)));
          }

          cout << endl;
     }
     cout << endl
          << endl;

     return 0;
}