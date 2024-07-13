#include <iostream>
#include <vector>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    vector<int> v1 = {1, 9, 44, 422, 767, 78};

    vector<int>::iterator it = v1.begin();

    // advance(it, 3); // cдвигает итератор на 3 индекс, можно юзать, если нет вохможности *(it + 3)

    it++;
    v1.insert(it, 999);


    // for (vector<int>::iterator i = i = v1.begin(); i != v1.end(); i++) { // можно использовать const_iterator, если нам ни надо менять значения      cbegin() and cend()  const оператор
    //         cout << *i << endl;
    // }


    vector<int>::iterator itEr = v1.begin();
    itEr++;
    v1.erase(itEr, itEr+3);

    for (vector<int>::reverse_iterator i = i = v1.rbegin(); i != v1.rend(); i++) { 
            cout << *i << endl;
    }

    // it++;
    // *it = 1000;
    // it--;
    // it += 3;
    // cout << *it << endl;

    // int arr[] = {1, 3, 6};

    // cout << arr[1] << endl;
    // cout << *(arr + 1) << endl; // арифметико указатель

    return 0;
}