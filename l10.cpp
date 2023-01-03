#include<iostream>
using namespace std;

string remDupl(string s)
{
    if(s.length()==0)
        return "";
    string sub = remDupl(s.substr(1));
    if(s[0]==sub[0])
        return sub;
    else   
        return s[0]+sub;
}
int main()
{
    cout<<remDupl("aaaaaabbbbbeeccd")<<endl;
    return 0;
}