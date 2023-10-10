#include<iostream>
using namespace std;
 class Shape{
 public:
     int length;
     int breadth;
 public:
    void setLength(int l){
    length=l;
    }
    void setBreadth(int b){
    breadth=b;
    }
 };

 class Rectangle : public Shape {
 public:
     int calc_area(){
     return(length*breadth);
     }
 };
 int main(){
 Rectangle r1;
 r1.setLength(5);
 r1.setBreadth(10);
 cout<<"Area:"<<r1.calc_area()<<endl;
 return 0;
 }

