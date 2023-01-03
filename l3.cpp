#include<iostream>
using namespace std;

class employee
{
    int eID;
    static int counter;

    public:
        void setData(void){
            cout<<"Enter the Employee ID "<<endl;
            cin>>eID;
            counter++;
        }
        void getData(void){
            cout<<"Employee ID of the "<<counter<<" employee is "<<eID<<endl;
        }

};
int employee :: counter; //static variables are automatically set as 0 ,  this statement is also imp to write 
int main()
{
    employee Akash,Aditya,Ashu;
    
    Akash.setData();
    Akash.getData();
    
    Aditya.setData();
    Aditya.getData();
    
    Ashu.setData();
    Ashu.getData();

    return 0;
}