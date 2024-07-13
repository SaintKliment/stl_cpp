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

    vector<Person> result;

    // copy(people.begin(), people.end(), back_inserter(result));
    copy_if(people.begin(), people.end(), back_inserter(result), [](const Person &p) {
        // return p.Name == "Petya";
        return p.Score > 100;
    });

    sort(result.begin(), result.end(), [](const Person &p1, const Person &p2) {
        return  p1.Score > p2.Score;
    });

    cout << result.size() << endl;
    for ( auto el : result) {
        cout << "name = " << el.Name << "\t" << "score = " << el.Score << endl;
    }

    return 0;
}