#include <iostream>
using namespace std;

class poly {
protected:
    int roll;

public:
    // Overloaded fun functions
    int fun(int a, int b) {
        return a + b;
    }

    int fun(int a, int b, int c) {
        return a + b + c;
    }

    double fun(double a, double b) {
        return a + b;
    }

    void setroll() {
        cout << "Enter roll number: ";
        cin >> roll;
    }
};

class drive : public poly { // Single inheritance
    int r;

public:
    // Area of circle
    double fun(int a) {
        r = a;
        return 3.14 * r * r;
    }
};

class drive2 : public drive { // Multilevel inheritance
    int l, b;

public:
    // Constructor to initialize length and breadth
    drive2(int a, int y) {
        l = a;
        b = y;
    }

    // Area of rectangle
    void fun() {
        cout << endl << "Area of rectangle is: " << l * b << endl;
    }
};

class poly2 {
protected:
    string name;
    int id;

public:
    void setdata() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter id: ";
        cin >> id;
    }
};
//Multiple inharitance 
class multiple : public poly, public poly2 {
    string father;

public:
    void setfath() {
        cout << "Enter father name: ";
        cin >> father;
    }

    void show() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Father Name: " << father << endl;
        cout << "Roll Number: " << roll << endl;
    }
};

int main() {
    // Creating an object of the multiple class
    multiple f;

    // Setting data for name, id, and father name using setfath() and setdata()
    f.setdata();
    f.setfath();
    f.setroll();

    // Display the details using show() method
    f.show();

    // Uncomment and modify the following if you want to test the area of circle and rectangle
    /*
    drive d;
    drive2 d2(4, 6);
    int x = d.fun(2, 6);  // Example: calling the overloaded fun() from poly
    cout << x << endl;
    cout << d.fun(2, 6, 5) << endl;
    cout << d.fun(2.8, 6.2) << endl;
    cout << "Area of circle is: " << d.circle_area(3);   
    d2.fun(); // Area of rectangle
    */

    return 0;
}
