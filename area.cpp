#include<iostream>
using namespace std;
class calculate{
    private:
     int l,b;
     public:
     void get_data(int x,int y) {
        l=x;
        b=y;
     }
     int parameter() {
        return 2*(l+b);
     }
     int area() {
        return l*b;
     }
};
int main() {
    calculate r;
    r.get_data(2,5);
    cout<<"Area of rectangle is :"<<r.area()<<endl;
   cout<<"Parameter of the rectangle is :"<< r.parameter();
   return 0;

}