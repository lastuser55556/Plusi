// Задание 9. Условные конструкции C++
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b; cin>>a>>b; if(b!=0&&a%b==0) cout<<"Делится нацело";else if(b==0) cout<<"Деление на ноль";else cout<<"Не делится нацело";
    cout << "\n";
    return 0;
}
