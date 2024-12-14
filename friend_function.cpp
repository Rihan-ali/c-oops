//FUNCTION OVERLOADING AND FRIEND FUNCTION IMPLEMENTATION
#include <iostream>
using namespace std;
class base{
    public:
    int a,b;
    public:
    void set_data(){
        cout<<"Enter Value of a:";
        cin>>a;
        cout<<"Enter value of  b:";
        cin>>b;
    }
    void fun(){
        cout<<"Function for overloading :"<<endl;
        
    }
    void fun(int a){
        cout<<"Recieved integer vlaue :"<<a<<endl;
    }
    void fun(double a){
        cout<<"Recieved float value:"<<a<<endl;
    }
    void fun(int p,int q){
        int c=p+q;
        cout<<"SUM OF ARUGUMET :"<<c<<endl;
    }
    base(){
        cout<<"CONSTRUCTOR "<<endl;
    }
    friend void display(base );//Define a fucntion a friend
};
void display(base k){
    cout<<"Vlaue a :"<<k.a<<endl;
    cout<<"Value of b :"<<k.b<<endl;
}
int main() {
    base b1;
    b1.set_data();
    b1.fun();
    b1.fun(32);
    b1.fun(33);
    b1.fun(12.43);
    b1.fun(32,18);
    display(b1);
    return 0;
}
