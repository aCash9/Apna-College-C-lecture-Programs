#include <iostream>
using namespace std;

void permutations(int **arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        
    }
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    for(int i =0 ;i < n;i++ )
    {
        cin >> arr[i];
    }
    permutations(arr,n);
    return 0;
}