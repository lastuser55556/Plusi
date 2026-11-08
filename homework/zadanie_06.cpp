// Задание 6. Условные конструкции C++
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char c; cin>>c; switch(c){case 'a':case 'e':case 'i':case 'o':case 'u':case 'A':case 'E':case 'I':case 'O':case 'U':cout<<"Гласная";break;default:if((c>='a'&&c<='z')||(c>='A'&&c<='Z')) cout<<"Согласная";else cout<<"Не буква";}
    cout << "\n";
    return 0;
}
