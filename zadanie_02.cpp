// Задание 2. Условные конструкции C++
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a,b; cin>>a>>b; cout<<"Тернарный: "<<(a>b?a:b)<<"\n"; if(a>b) cout<<"if-else: "<<a; else cout<<"if-else: "<<b;
    cout << "\n";
    return 0;
}
