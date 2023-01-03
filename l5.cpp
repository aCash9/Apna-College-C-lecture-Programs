#include<iostream>
using namespace std;

bool checkSorted(int a[],int n )
{   
    if(n==1)
    return true ;
    bool restArray=checkSorted(a++,n-1);
    return (a[0]<a[1]) && restArray ;
}
int main()
{
    int a[]={1,5,77,444};
    cout<<checkSorted(a,4)<<endl;  
    return 0;
}