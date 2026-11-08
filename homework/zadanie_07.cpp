// Задание 7. Условные конструкции C++
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int y; cin>>y; if((y%4==0&&y%100!=0)||(y%400==0)) cout<<"Високосный";else cout<<"Не високосный";
    cout << "\n";
    return 0;
}
