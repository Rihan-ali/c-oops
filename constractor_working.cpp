#include<iostream>
using namespace std;
class parent {
    public:
    
    parent(){
        cout<<"Parent comstructor "<<endl;
    }
};
class child : public parent {
    public:
    child() {
        cout<<"Parent comstructor ";
    }
};
int main() {
   child c;
   return 0;

}