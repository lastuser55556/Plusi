// Задание 4. Условные конструкции C++
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int s; cin>>s; if(s<0||s>100) cout<<"Некорректные баллы"; else if(s>=90) cout<<"A"; else if(s>=80) cout<<"B"; else if(s>=70) cout<<"C"; else if(s>=60) cout<<"D"; else cout<<"F";
    cout << "\n";
    return 0;
}
