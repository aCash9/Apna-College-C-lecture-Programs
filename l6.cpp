#include <iostream>
using namespace std;

int firstocc(int a[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    if (a[i] == key)
    {
        return i+1;
    }
    return firstocc(a, n, i + 1, key);
}
int lastocc(int a[],int n , int i, int key)
{
    if(n==i)
        return -1; 
    if(a[n-1]==key)
        return n;
    return lastocc(a,n-1,i,key);
}
int main()
{
    int a[] = {2, 56, 77, 43, 2,56 ,99};
    cout << firstocc(a, 7, 0, 56) << endl;
    cout << lastocc(a, 7, 0, 56) << endl;
    return 0;
}