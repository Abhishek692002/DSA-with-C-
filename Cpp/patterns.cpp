#include <iostream>
using namespace std;
int main()
{
    // pattern 1
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // int n = 5;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << " " << j;
    //     }
    //     cout << endl;
    // }

    // pattern 2
    //  for (int i = 0; i < n; i++)
    //  {
    //      char ch = 'A';
    //      for (int j = 0; j < n; j++)
    //      {
    //          cout << " " << ch;
    //          ch++; // ch=ch+1=65+1=66
    //      }
    //      cout << endl;
    //  }

    // pattern 3
    // 1 2 3
    // 4 5 6
    // 7 8 9
    // int n = 3, num = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << " " << num;
    //         num++;
    //     }
    //     cout << endl;
    // }

    // pattern 4
    // int n = 3;
    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << " " << ch;
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // pattern 5
    //*
    //* *
    //* * *
    //* * * *
    // int n = 4, i, j;
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j <= i; j++)
    //     {
    //         cout << " " << "*";
    //     }
    //     cout << endl;
    // }

    // pattern 6
    // char ch = 'A';
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j <= i; j++)
    //     {
    //         cout << " " << ch;
    //     }
    //     ch++;
    //     cout << endl;
    // }

    // pattern 7
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4

    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j <= i; j++)
    //     {
    //         cout << " " << j + 1;
    //     }
    //     cout << endl;
    // }

    // pattern 8
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1

    // for (i = 0; i < n; i++)
    // {
    //     for (j = i + 1; j > 0; j--)
    //     {
    //         cout << " " << j;
    //     }
    //     cout << endl;
    // }

    // pattern 9
    // A
    // B A
    // C B A
    // D C B A
    // char ch = 'A';
    // for (i = 0; i < n; i++)
    // {
    //     for (j = i; j >= 0; j--)
    //     {
    //         cout << " " << (char)(ch + j);
    //     }
    //     cout << endl;
    // }

    // pattern 10
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // int num = 1;
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j <= i; j++)
    //     {
    //         cout << " " << num;
    //         num++;
    //     }
    //     cout << endl;
    // }

    // pattern 11
    // 1 1 1 1
    //   2 2 2
    //     3 3
    //       4
    // for (i = 0; i < n; i++)
    // {
    //     // spaces
    //     for (j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     // numbers
    //     for (j = 0; j < n - i; j++)
    //     {
    //         cout << i + 1;
    //     }
    //     cout << endl;
    // }

    // pattern 12
    // char ch = 'A';
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (j = 0; j < n - i; j++)
    //     {
    //         cout << (char)(ch + i);
    //     }
    //     cout << endl;
    // }

    // pattern 13
    // pyramid pattern
    // for (i = 0; i < n; i++)
    // {
    //     // spaces
    //     for (j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     // num1
    //     for (j = 1; j <= i + 1; j++)
    //     {
    //         cout << j;
    //     }
    //     // num2
    //     for (j = i; j >= 1; j--)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // hollow diamond pattern
    // top
    // for (i = 0; i < n; i++)
    // {
    //     // spaces
    //     for (j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";
    //     if (i != 0)
    //     {
    //         // spaces
    //         for (j = 0; j < 2 * i - 1; j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // // bottom
    // for (i = 0; i < n - 1; i++)
    // {
    //     // spaces
    //     for (j = 0; j < i + 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";
    //     if (i != n - 2)
    //     {
    //         // spaces
    //         for (j = 0; j < 2 * (n - i) - 5; j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    int n = 4, i, j;
    // top
    for (i = 0; i < n; i++)
    {
        // print *
        for (j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        // spaces
        for (j = 0; j < (2 * (n - i) - 2); j++)
        {
            cout << " ";
        }
        // print *
        for (j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // bottom
    for (i = 0; i < n; i++)
    {
        // print *
        for (j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        // print spaces
        for (j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }
        // print *
        for (j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j <= n - i - 1; j++)
    //         cout << " ";

    //     for (j = 0; j <= i; j++)
    //         cout << "*";

    //     cout << endl;
    // }

    return 0;
}