#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int l = str.length();

    for (int i=0, j=l-1; i<l, j>=0; i++,j--)
    {
        if (str[i]!=str[j])
            {cout << "NO";
            return 0;}
    }
            cout << "YES";
    return 0;
}