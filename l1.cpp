#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    int* p = arr;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
    for(i=0;i<n;i++)
    {
        cout<<*p<<endl;
        *p++;
    }
    return 0;
}