#include <iostream>
using namespace std;

class A {

    private:
    int a;
    public:

    A (int val) {

        a = val;
        cout << "Class A ... " << endl;
        cout << val << endl;
    }
};

class B : public A{

    private:

    public:

    B (int val) : A(val) {

        cout << "Class B ... " << endl;
    }
};
class C {

    private:

    public:

    C () {

        cout << "Class C ... " << endl;

    }
};

class D {

    private:

    public:

    D () {

        cout << "Class D ... " << endl;
    }
};
int main() {


    B b(10);

    return 0;
}