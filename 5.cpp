#include <iostream>
using namespace std;

class Student {
public:
    int age;

    // Copy Constructor
    Student(const Student &s) {
        age = s.age;
        cout << "Copy Constructor Called!" << endl;
    }

    void display() {
        cout << "Age = " << age << endl;
    }
};

int main() {
    Student s1 = *(new Student);  // object creation workaround
    s1.age = 25;

    Student s2 = s1;  // copy constructor

    s2.display();

    return 0;
}
