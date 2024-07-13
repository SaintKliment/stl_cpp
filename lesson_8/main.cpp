#include <iostream>
#include <vector>
#include <deque>

using namespace std;


int main() {
    setlocale(LC_ALL, "Russian");

    deque<int> dq = {1, 83, 900}; // двусвяз список векторов
    dq.push_back(12);
    dq.push_front(112);
    
    // dq.at(1);
    // dq[1];

    return 0;
}