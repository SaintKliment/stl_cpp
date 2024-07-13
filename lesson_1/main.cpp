#include <iostream>
#include <vector>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    vector<int> myVector = {4, 7, 1};
    vector<int> v2(20); // указываем сколько элементов будет в веткоре, а второй аргумент позволяет хаполнить определенным значением поле
    cout << v2.empty() << endl; // возвращает ложь или правду, пуст или нет
    v2.resize(25); // перезадать заполняемые значения в векторе 
    
    // v2.insert(); // вставить элемент по индексу, работает не по индексу, а по итератору
    // v2.erase(); // индексу стереть, работает не по индексу, а по итератору

    myVector.reserve(5); // кол-во элементов, которое будет содержать capacity
    myVector.shrink_to_fit(); // позволяет удалить много лишнего места занятого capacity vector'a
    
    myVector.push_back(1);
    myVector.push_back(41);
    myVector.push_back(13);
    
    myVector.capacity(); // все все все доступные ячейки
    
    cout << myVector.capacity() << "\t" << myVector.size();

    // myVector[0] = 123131;

    // cout << myVector.at(1) << endl; // проверка элемента на принадлеэность памяти в определенной ячейке, но медленные чем обращение по []

    // myVector.clear(); // убирает все элементы
    // myVector.pop_back(); // убирает элемент последний 

    // for (int i = 0; i < myVector.size(); i++) {
    //     cout << myVector[i] << endl;
    // }


    return 0;
}