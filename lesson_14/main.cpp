#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Person {
public:
    Person(string name, double score) { this->Name = name; this->Score = score;}
    
    bool operator()(const Person &p) {
        return p.Score > 180;
    }

    string Name;
    double Score;
};



int main() {
    setlocale(LC_ALL, "ru");

    vector<Person> people {
        Person("Vasya",181),
        Person("Petya",120),
        Person("Masha",134),
        Person("Dasha",201),
        Person("Andrei",61),
        Person("Sergei",91),
        Person("Ivan",131),
        Person("Petya",141),
        Person("Katya",101),
    };

    auto res = find_if(people.begin(), people.end(), [](const Person &p) {
        return p.Name == "Dasha";
    });
    if (res != people.end()) {
        cout << "+" << endl;
    }


    // vector<int> v = {1, 234, 657, 123, 879, 345, 762};

    // auto res = find(v.begin(), v.end(), 1234); // find elem in list
    // // cout << "res: " << *res << endl;
    // if (res == v.end()){
    //     cout << "not found" << endl;
    // } else { cout << *res << endl;}

    // auto res = find_if_not(v.begin(), v.end(), [](int a) {
    //     return a % 2 != 0;
    // });
    // if (res != v.end()) {
    //     cout << *res << endl;
    // }

    return 0;
}