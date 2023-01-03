#include <iostream>
using namespace std;

void printreverse()
{
    int s;
    cin >> s;
    if(s == 0)
        return;
    printreverse();
    cout<<s<<endl;
}
int main()
{
    printreverse();   
    return 0;
}