#include<iostream>
using namespace std;
class maxx
{
private:
    int a,b,c;
public:
    void get_data(int x,int y,int z){
        a=x;
        b=y;
        c=z;
    }
    int maximum()
    {
        int l;
        if(a>b && a>c) {
            l=a;
        }
        else if(b>a&&b>c) {
            l=b;
        }
        else {
            l=c;
        }
        return l;
    }
    void display() {
       int  large=maximum();
       cout<<"Largest number is :"<<large;
    }
};
int main() {
    maxx a;
    a.get_data(3,7,40);
    //a.maximum();
    a.display();
   // cout<<l;

}