#include<iostream>
using namespace std;
class emp{
    int age,salary;
    char name[30];
    public:
    void set_data() {
        cout<<"Enter name :";
        cin>>name;
        cout<<"Enter age :";
        cin>>age;
        cout<<"Enter Salry :";
        cin>>salary;
    }
    void display() {
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
        cout<<"Salry :"<<salary;
    }
};
int main()
{
    emp e1;
    e1.set_data();
    e1.display();

    return 0;
}