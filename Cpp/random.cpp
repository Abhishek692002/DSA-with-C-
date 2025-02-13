#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string stringChallenge(string str, string challenge_Token)
{
    string modified_str = "";
    for (char ch : str)
    {
        if (isalpha(ch))
        {
            if (ch == 'z')
            {
                ch = 'a';
            }
            else if (ch == 'Z')
            {
                ch = 'A';
            }
            else
            {
                ch = ch + 1;
            }
        }
        modified_str += ch;
    }

    for (char ch : modified_str)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            ch = toupper(ch);
        }
    }

    string result_str = modified_str + challenge_Token;

    for (int i = 2; i < result_str.length(); i += 3)
    {
        result_str[i] = 'X';
    }

    return result_str;
}
int main()
{
    string str = "hello*3";
    string challengeToken = "qn3kxy2le7";

    cout << "Updated String : " << stringChallenge(str, challengeToken) << endl;
    return 0;
}