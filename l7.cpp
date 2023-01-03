#include<iostream>

using namespace std;

void rev(string s,int i )
{
    if(i==-1)
        exit(0);
    cout<<s[i];
    rev(s,i-1);
}
int main()
{   
    string s = "Akash";
    rev(s,s.length());
    return 0;
}
/*
    another method to solve
    void rev(string s)
    {
        if(s.length()==0)
            return;
        string res = s.substring(1);
        rev(res);
        cout<<s[0];
    }
*/