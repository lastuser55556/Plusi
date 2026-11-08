// Задание 10. Условные конструкции C++
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a,b;cin>>a>>b;if(std::fabs(a-b)<1e-9)cout<<"Равны";else if(a>b)cout<<"Первое больше";else cout<<"Второе больше";
    cout << "\n";
    return 0;
}
