#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair < int , char > p1;
    p1.first = 12;
    p1.second = 'A';
    cout << p1.first<<endl;    
    cout << p1.second<<endl; 
    int n;
    cin >> n;
    int a , b;
    vector < pair < int , int > > v1;
    for(int i = 0; i < n;i++)
    {
        cin >> a >> b;
        v1.push_back(make_pair(a,b));
    }
    for(int i = 0;i<v1.size();i++)
        cout<<v1[i].first<<" "<<v1[i].second<<" ";

return 0;
}