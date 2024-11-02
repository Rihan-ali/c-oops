#include<iostream>
using namespace std;
class func_over {
    int a,b,c;
    float f;
    public:
    void func1(){
        cout<<"NOT ARGUMENT "<<endl;
    }
    void func1(int x)  {
        a=x;
        cout<<"x is :"<<x<<endl;
    }
    void func1(int x,int y) {
        a=x;
        b=y;
        cout<<"X IS :"<<x<<"Y IS :" <<y;
           }

};
int main()
{
    func_over a;
    a.func1();
    a.func1(2);
    a.func1(45,67);
return 0;
}