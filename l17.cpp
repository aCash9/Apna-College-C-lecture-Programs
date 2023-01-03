#include <iostream>
using namespace std;

bool poss(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
        return true;
    return false;
}
bool ratMaze(int** arr, int n, int x, int y, int **ans)
{
    if (x == (n-1) && y == (n-1))
    {
        ans[x][y] = 1;
        return true;
    }
    if (poss(arr, x, y, n))
    {
        ans[x][y] = 1;
        if (ratMaze(arr,n,x+1,y,ans))
            return true;
        if (ratMaze(arr,n,x,y+1,ans))
            return true;
        ans[x][y] = 0; // backtracking
        return false;
    }
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for(int j =0 ;j<n;j++)
            cin>>arr[i][j];
    }
    int **ans =new int *[n];
    for (int i = 0; i < n; i++)
    {
        ans[i] = new int[n];
        for(int j =0 ;j<n;j++)
            ans[i][j]=0;
    }
    if(ratMaze(arr,n,0,0,ans))
    {
        for (int i = 0; i < n; i++)
        {
            for(int j =0 ;j<n;j++)
                cout<<ans[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}