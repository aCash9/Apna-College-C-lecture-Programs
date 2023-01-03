#include<iostream>
using namespace std;

string removex(string s )
{
    if(s.length()==0)
        return "";
    string sub = removex(s.substr(1));
    if(s[0]=='x')
        return (sub+s[0]);
    return s[0]+sub;
}
int main()
{
    cout<<removex("xxxhelxxxlloxxwxxorlxxd")<<endl;   
    return 0;
}