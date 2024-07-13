#include <iostream>
#include <array>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    array<int,5> arr = {1, 2, 3, 4};
    // cout << arr.at(0) << endl; // контролирует выход за границы контейнера
    
    arr.fill(4);
    cout << arr.front() << endl;

    for (auto el : arr){
        cout << el << endl;
    }


    return 0;
}