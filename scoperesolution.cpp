#include<iostream>
using namespace std;
class scopee{
    public:
   static int x,y;
   public:
    static void setdata() {
        x=6;
        y=4;
    }
   static void display() {
        cout<<"x="<<x<<endl;
        cout<<"Y="<<y;
    }
};
int scopee::x;
int scopee::y;
int main() {
    scopee::setdata();
    scopee::display();
    cout<<endl<<"Heloo duniya";
    return 0;
}