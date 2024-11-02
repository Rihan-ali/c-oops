#include<iostream>
#include<math.h>
using namespace std;
class quardic{
    
    int a,b,c;
    int  root,fn,fp;
    public:
    
    void set_data(int x,int y,int z){
        a=x;
        b=y;
        c=z;
    }
    void solve() {
       root=sqrt(b*b-4*a*c);
       fp=(-b+root)/2*a;
        fn=(-b-root)/2*a;

    }
    void display() {
        cout<<"First :"<<fp<<endl;
        cout<<"second :"<<fn;
    }
};
int main() {
    quardic e1;
    e1.set_data(2,3,4);
    e1.solve();
    e1.display();
    return 0;
}