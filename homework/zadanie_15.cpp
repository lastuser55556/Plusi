// Задание 15. Условные конструкции C++
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;unsigned int y;cin>>x>>y;cout<<std::boolalpha;cout<<"Корректно: "<<(static_cast<long long>(x)<static_cast<long long>(y))<<"\n";cout<<"Наивно: "<<(x<y)<<"\n";// При x=-1 и y=1 отрицательное x преобразуется в unsigned, поэтому наивное сравнение может дать false.
    cout << "\n";
    return 0;
}
