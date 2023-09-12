#include<iostream>
using namespace std;
class Emp{
private :
    string name;
    int id;
public:
    Emp(string n , int i){
    name=n;
    id=i;
    }
    void display(){
    cout<<"employee name:"<<name<<endl;
    cout<<"Employee id:"<<id<<endl;
    }
    ~Emp(){
    cout<<"Constructor deleted"<<endl;
    }
};
int main(){
Emp emp1("pradeep",108);
Emp emp2("prajual",109);
emp1.display();
emp2.display();
return 0;
}
