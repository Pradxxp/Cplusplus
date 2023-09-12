#include<iostream>
using namespace std;

class Bank{
private:
    string name;
    int acc;
    int bal;
public:
    void get(){
    cout<<"Enter customer name:"<<endl;
    cin>>name;
    cout<<"Enter acc no:"<<endl;
    cin>>acc;
    cout<<"enter balance:"<<endl;
    cin>>bal;
    }
    void add(Bank b1,Bank b2){
    cout<<"enter customer name:"<<endl;
    cin>>name;
    cout<<"enter acc number:"<<endl;
    cin>>acc;
    b1.display();
    b2.display();
    bal=b1.bal+b2.bal;
    cout<<"customer name:"<<name<<endl;
    cout<<"account number:"<<acc<<endl;
    cout<<"added balance :"<<bal;
    }
    void display(){
    cout<<"Customer name:"<<name<<endl;
    cout<<"acc number:"<<acc<<endl;
    cout<<"balance:"<<bal<<endl;
    }
};
int main(){
Bank b1 , b2 , b3;
b1.get();
b2.get();

b3.add(b1,b2);
return 0;
}
