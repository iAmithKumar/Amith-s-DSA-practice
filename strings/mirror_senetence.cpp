#include <bits/stdc++.h>
using namespace std;
 
string reverseWords(string s)
{

    vector<string> tmp;
    string str = "";
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == ' ')
        {
            tmp.push_back(str);
            str = "";
        }

        else
            str += s[i];
    }

    tmp.push_back(str);
 
    string res = "";
    int i;
    for (i = tmp.size() - 1; i > 0; i--)
        //cout << tmp[i] << " ";
        res = res + tmp[i] + ' ';
      
    res += tmp[0];

    return res;
}

int main()
{
    string s = "hello world";
    cout << reverseWords(s) << endl;
    return 0;
}