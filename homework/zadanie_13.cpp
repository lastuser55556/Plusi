// Задание 13. Условные конструкции C++
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int age,student;cin>>age>>student;if((age>=65)||(student==1&&age<25))cout<<"Скидка положена";else cout<<"Скидки нет";
    cout << "\n";
    return 0;
}
