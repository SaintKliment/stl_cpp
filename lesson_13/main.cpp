#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


bool GreaterThanZero(int a) { // предикат(возвращает t | f) унарный предикат тк принимает один аргумент 
    return a > 0;
}

// bool MyPred(int a, int b) {
//     return a > b;
// }

bool LessThanZero(int a) { 
    return a < 0;
}

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
    setlocale(LC_ALL, "Russian");

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

    sort(people.begin(), people.end(), [](const Person &p1, const Person &p2) {
        // bool res = p1.Name < p2.Name;
        bool res = p1.Score < p2.Score;
        return res;
    });

    for ( auto el : people) {
        cout << "name: " << el.Name << "\t" << "scores: " << el.Score << endl;
    }

    // int result = count_if(people.begin(), people.end(), people.front());
    // cout << result << endl;

    // vector<int> v = {9, 4, 46, 123, 19};
    
    // sort(v.begin(), v.end(), [](int a, int b) { return a > b; });

    // for (auto el : v) {
    //     cout << el << endl;
    // }

    // const int SIZE = 7;
    // int arr[SIZE] = {1, 2, 3, 4, 9, -12, -100};

    // sort(arr, arr + SIZE, [](int a, int b) { return a > b; });

    // for (auto el : arr) {
    //     cout << el << endl;
    // }

    return 0;
}