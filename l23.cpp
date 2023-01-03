#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,16,7,14,5,3,12,9};
    vector < pair < int , int > > v ;
    for ( int i =0 ;i<(sizeof(arr)/sizeof(arr[0]));i++)
    {
        v.push_back(make_pair(arr[i],i));
    }
    cout<<"before"<<endl;
    for ( int i =0 ;i<(sizeof(arr)/sizeof(arr[0]));i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
     for(int i = 0;i<v.size();i++)
        cout<<v[i].first<<" ";
    cout<<endl;
    int a;
    for ( int i =0 ;i< v.size();i++)
    {
        a=v[i].second;
        arr[a]=i;
    }
    cout<<"after"<<endl;
    for ( int i =0 ;i<(sizeof(arr)/sizeof(arr[0]));i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}
    // for(int i = 0;i<v.size();i++)
    //     cout<<v[i].first<<" ";
    // cout<<endl;
    // for(int i = 0;i<v.size();i++)
    //     cout<<v[i].second<<" ";