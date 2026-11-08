// Задание 8. Условные конструкции C++
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a,b,c; cin>>a>>b>>c; double m; if(a>b){if(a>c)m=a;else m=c;}else{if(b>c)m=b;else m=c;} cout<<"if-else: "<<m<<"\n";cout<<"Тернарный: "<<((a>b)?((a>c)?a:c):((b>c)?b:c));
    cout << "\n";
    return 0;
}
