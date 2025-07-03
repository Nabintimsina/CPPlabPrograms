#include<iostream>
using namespace std;

class A {
protected:
    int x;

public:
    A(int a) {
        x = a;
    }

    void display() {
        cout << "X is " << x << endl;
    }
};

class B {
protected:
    int y;

public:
    B(int b) {
        y = b;
    }

    void display() {
        cout << "Y is " << y << endl;
    }
};

class C : public A, public B {
protected:
    int z;

public:
    C(int a, int b, int c) : A(a), B(b) {
        z = c;
    }

    void display() {
        A::display();
        B::display();
        cout << "Z is " << z << endl;
    }
};

int main() {
    C c(4, 5, 6);
    c.display();
    return 0;
}

