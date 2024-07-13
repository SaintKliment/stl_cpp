#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Person {
public:
    Person(string name, double score, int age) { 
        this->Name = name;
        this->Score = score;
        this->Age = age;
    }

    string Name;
    double Score;
    int Age;
};

int main() {
    setlocale(LC_ALL, "Russian");

    // vector<int> v = {1, 4, 9, 16, 1};
    // auto itr = remove(v.begin(), v.end(), 1); // remove не удаляет, а группупирует обьекты
    // v.erase(itr, v.end());


    // vector<Person> people {
    //     Person("vasya", 30, 22),
    //     Person("nicole", 130, 62),
    //     Person("dasha", 120, 38),
    //     Person("ygol", 240, 26),
    //     Person("vanish", 270, 46),
    //     Person("kesar", 175, 25),
    //     Person("petya", 126, 32),
    // };

    // auto resu = remove_if(people.begin(), people.end(), [](const Person &p) {
    //     return p.Score > 100;
    // });
    // people.erase(resu, people.end());

    // for (auto el : people) {
    //     cout << el.Name << "\tscores = "<< el.Score << endl;
    // }

    string str = "lorem text is very beautiful thing";
    
    str.erase(remove(str.begin(), str.end(), ' '), str.end());

    cout << str << endl;

    return 0;
}