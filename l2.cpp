#include<iostream>
using namespace std;

class numbers
{
    private :
        int a, b;
    public :
        int c , d;
        void setData(int a1,int b1);
        void giveData()
        {
            cout<<"a is "<<a<<endl;
            cout<<"b is "<<b<<endl;
            cout<<"c is "<<c<<endl;
            cout<<"d is "<<d<<endl;
        }
};
void numbers :: setData(int a1,int b1)
{
    a=a1;
    b=b1;
}
int main()
{
    numbers one;
    one.setData(45,54);
    one.giveData();
    cout<<one.c<<endl;
    return 0;
}