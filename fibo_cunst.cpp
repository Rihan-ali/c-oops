#include<iostream>
using namespace std;
class fibo{
    int n;
    int n1=0,n2=1,next;
    public:
    fibo(int x) {
        n=x;
    }
    void series() {
        cout<<n1<<" "<<n2<<" ";
        for(int i=0;i<=n;i++) {
            next=n1+n2;
                cout<<next<<" ";
                n1=n2;
                n2=next;
        }
    }
};
int  main() {
    fibo s1(20);
    s1.series();

    return 0;
}