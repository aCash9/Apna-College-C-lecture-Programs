#include<iostream>
using namespace std;

string keypad[] = {"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void permut(string s, string ans)
{
    if(s.length()==0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string code = keypad[ch-'0'];
    string res = s.substr(1);

    for(int i =0;i<code.length();i++)
    {
        permut(res , ans + code[i]);
    }

}
int main()
{
    permut("24","");
    return 0;
}