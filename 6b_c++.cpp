#include<iostream>
using namespace std;
class SREC{
protected:
    int roll;
    string name;
public:
    void setRoll(int r){
    roll=r;
    }
    void setName(string n){
    name=n;
    }
};
class Dept{
public:
    string dept;
    string sec;
    int year;
public:
    void setDept(string d){
    dept=d;
    }
    void setSection(string s){
    sec=s;
    }
    void setYear(int y){
    year=y;
    }
};
class Student : public SREC , public Dept {
public:
    void display_details(){
    cout<<"Name of student:"<<name<<endl;
    cout<<"Roll:"<<roll<<endl;
    cout<<"Dept:"<<dept<<endl;
    cout<<"Section:"<<sec<<endl;
    cout<<"Year of study:"<<year<<endl;
    }
};
int main(){
string n,d,s;
int r,y;
Student s1;
cout<<"Enter student name:"<<endl;
cin>>n;
cout<<"Enter student roll:"<<endl;
cin>>r;
cout<<"Enter student Department:"<<endl;
cin>>d;
cout<<"Enter student Section:"<<endl;
cin>>s;
cout<<"Enter student year of study:"<<endl;
cin>>y;

s1.setRoll(r);
s1.setName(n);
s1.setDept(d);
s1.setSection(s);
s1.setYear(y);
s1.display_details();
return 0;
}
