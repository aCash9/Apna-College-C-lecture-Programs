#include<bits/stdc++.h>
using namespace std;

//main function
int main() {
    int n; 
    cin>>n; // taking size of vector from user
    int a;
    vector<int> v;
    // we can also mention size here like
    // vector<int> v(n);
    for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(auto &p : v)
    {
        cout<<p<<" ";
    }
    cout<<endl;

    for (int i = 0; i < v.size(); i++)
         cout<<v[i]<<" ";
    cout<<endl;
    sort(v.begin(), v.end(),greater<int>());
    cout<<"After sorting"<<endl;

    for (int i = 0; i < v.size(); i++)
         cout<<v[i]<<" ";
    return 0;
}