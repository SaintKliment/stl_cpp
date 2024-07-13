#include <iostream>
#include <array>

using namespace std;


int main() {
    setlocale(LC_ALL, "Russian");

    array<int, 4> arr = {1, 2, 3, 4};

    array<int, 4> arr2 = {1, 2, 3, 4};

    bool result = (arr == arr2); // >, < можно сравнивать элементы
    cout << result << endl;

    return 0;
}