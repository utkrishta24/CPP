#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{

    string str;
    int n = 0, c = 0, a = 0;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            n++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            c++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            a++;
        }
    }
    

    if (a != 0 && n != 0 && c != 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}