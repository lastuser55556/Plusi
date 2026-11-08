// Задание 14. Условные конструкции C++
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;cin>>n;if(n==0)cout<<"ноль";else cout<<(n>0?(n%2==0?"положительное чётное":"положительное нечётное"):(n%2==0?"отрицательное чётное":"отрицательное нечётное"));
    cout << "\n";
    return 0;
}
