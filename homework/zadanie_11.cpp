// Задание 11. Условные конструкции C++
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int d;cin>>d;switch(d){case 1:case 2:case 3:case 4:case 5:cout<<"Рабочий день";break;case 6:case 7:cout<<"Выходной";break;default:cout<<"Некорректный день";}
    cout << "\n";
    return 0;
}
