#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    // char str[] = {'a', 'b', 'c', '\0'};

    // cout << strlen(str) << endl;

    // cout << str << endl;

    // char str[] = "college";
    // cout << str[2] << endl;

    char str[6];

    cout << "Enter char array :";
    cin.getline(str, 6, '$');

    // cout << "output :" << str << endl;

    for (char ch : str)
    {
        cout << ch << " ";
    }
    cout << endl;
    return 0;
}