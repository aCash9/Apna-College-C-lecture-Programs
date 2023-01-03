#include<iostream>
using namespace std;

void towerofhanoi(int n , char sou , char helper , char dest)
{
    if (n==0)
        return;
    towerofhanoi(n-1,sou,dest,helper);
    cout<<"Move disk "<<n<<" from rod "<<sou<<" to "<<dest<<endl;
    towerofhanoi(n-1,helper,sou,dest);
}
int main()
{
    towerofhanoi(3,'A','B','C');
    return 0;
}