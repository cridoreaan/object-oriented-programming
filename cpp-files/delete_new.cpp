#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
};

int main() {
    // One Way
    Student s1;
    s1.name = "Jawad Ahmed";
    cout << s1.name << endl;

    // Using the Pointer
    Student *s;
    s = &s1;
    cout << s->name;  // Which is Exactly Equal to the (*s).name
    
    // Using the New Keyword

    s = new Student;  // This will make the New Student and return the address of it
    cout << s->name << endl;

    // Delete Keyword

    delete s; // Only that can be chunks can be freed up that are maked up using new instance
    return 0;
}