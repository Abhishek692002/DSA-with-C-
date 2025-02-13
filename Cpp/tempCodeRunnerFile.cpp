string modified_str = "";
    for (char ch : str)
    {
        if (isalpha(ch))
        {
            if (ch == 'z')
            {
                ch = 'a';
                modified_str += ch;
            }
            else if (ch == 'Z')
            {
                ch = 'A';
                modified_str += ch;
            }
            else
            {
                ch = ch + 1;
                modified_str += ch;
            }
        }
        modified_str += ch;
    }