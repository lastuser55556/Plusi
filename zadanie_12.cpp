// Задание 12. Условные конструкции C++
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char op;double a,b;cin>>op>>a>>b;switch(op){case '+':cout<<a+b;break;case '-':cout<<a-b;break;case '*':cout<<a*b;break;case '/':if(std::fabs(b)<1e-9)cout<<"Деление на ноль";else cout<<a/b;break;default:cout<<"Неизвестная операция";}
    cout << "\n";
    return 0;
}
