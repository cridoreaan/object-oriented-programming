#include <iostream>
#include <vector>

using namespace std;

void output_vector(vector <int> v);
void output_reverse_vector(vector <int> v);
void remove(vector <int> * v, int indexNumber);

int main() {
    vector <int> marks;
    for (int i = 1; i <= 5; i++) 
        marks.push_back(i * 10);
    // Alternative syntax for only Initialization
    // vector <int> marks{10, 20, 30, 40, 50};

    output_vector(marks);
    output_reverse_vector(marks);
    remove(&marks, 1);
    output_vector(marks);
    return 0;
}

void output_vector(vector <int> v) {
    // cout << "[";
    // for (auto i = v.begin(); i != v.end(); i++) 
    //     cout << *i << " ";
    // cout << "]" << endl;

    // Using foreach loop
    cout << "[";
    for (int x : v){
        cout << x << " ";
    }
    cout << "]" << endl;
}

void output_reverse_vector(vector <int> v) {
    cout << "[";
    for (auto i = v.rbegin(); i != v.rend(); i++) 
        cout << *i << " ";
    cout << "]" << endl;
}

void remove(vector <int> * v, int indexNumber) {
        auto it = v->begin();
        v->erase(it + indexNumber);
}