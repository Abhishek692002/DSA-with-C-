#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    // string str = "hello world";
    // cout << str << endl;

    // string str1 = "Abhishek";
    // string str2 = " Dutta";

    // string str3 = str1 + str2;
    // cout << str3 << endl;

    // string str1 = "Abhishek";
    // string str2 = "Abhishek";

    // cout << (str1 == str2) << endl;//true

    // string str = "Abhishek";

    // cout << str.length() << endl;

    // for (int i = 0; i < str.length(); i++)
    // {
    //     cout << str[i] << endl;
    // }
    // cout << endl;

    // for (char ch : str)
    // {
    //     cout << ch << " ";
    // }
    // cout << endl;

    // reverse a character array
    // char ch[] = "Hello";
    // int n = strlen(ch);
    // int st = 0, end = n - 1;
    // while (st < end)
    // {
    //     swap(ch[st], ch[end]);
    //     st++;
    //     end--;
    // }

    // for (char chr : ch)
    // {
    //     cout << chr << " ";
    // }
    // cout << endl;

    // for string
    // string str = "Abhishek";
    // reverse(str.begin(), str.end());

    // cout << str << endl;

    string str = "madam";
    string str1 = str;
    reverse(str.begin(), str.end());
    if (str == str1)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}