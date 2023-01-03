#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // for (int i = 0; i < v.size(); i++)
    //     cout<<v[i]<<endl;
    
    // vector<int>::iterator it;
    // for(it=v.begin();it!=v.end();it++)
    //     cout<<*it<<endl;
    
    // for(auto element:v)
    //     cout<<element<<endl;

    // v.pop_back();
    int n,a;
    cin>>n;

    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v2.push_back(a);
    }
    vector <int>::iterator akash;
    for(akash = v2.begin();akash!=v2.end();akash++)
        cout<<*akash<<endl;

    for(auto it:v2)
        cout<<it<<" ";
return 0;
}