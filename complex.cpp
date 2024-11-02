#include<iostream>
using namespace std;
class complex{
    int x,y;
    public:
    void setdata(int a,int b) {
        x=a;
        y=b;
    }
    complex add(complex g) {
        complex h;
        h.x=g.x+x;
        h.y=g.y+y;
        return h;
    }
    void display() {
        cout<<x<<"+"<<y;
    }
};
int main() {
    complex c1,c2,c3;
    c1.setdata(44,160);
    c2.setdata(66,40);
   c3=c1.add(c2);
    c3.display();
    return 0;
}