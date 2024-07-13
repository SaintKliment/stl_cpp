#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    // pair<int, string> p(1, "phone");

    map<int, string> m; // удалить элем по ключу (erase), используя обращение по [] можно переопределить, а вхудшем случае добавить новую пару
    m.emplace(3, "mouse");
    m.insert(make_pair(1, "phone"));
    m.insert(pair<int, string>(2, "laptop"));
    m.emplace(4, "keyboard");

    auto ff = m.find(4);
    cout << ff->second << endl;

    multimap<string, int> mm; // absent at() and обращение по []
    mm.emplace("vasya", 1231);
    mm.emplace("vasya", 999231);

    return 0;
}