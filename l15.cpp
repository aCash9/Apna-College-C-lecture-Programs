#include <iostream>
using namespace std;

void permutataion(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string temp = s.substr(0,i)+s.substr(i+1);
        permutataion(temp, ans+ch);
    }
    
}
int main()
{
    permutataion("ABC","");
    return 0;
}