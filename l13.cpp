#include<iostream>
using namespace std;

void subs(string s , string ans)
{
    if (s.length()==0)
    {
        cout<< ans << endl;
        return;
    }
    char ch = s[0];
    string res = s.substr(1);
    int code = ch;
    subs(res, ans);
    subs(res, ans+ch);
    subs(res, ans+to_string(code));
}
int main()
{
    subs("AB","");    
    return 0;
}