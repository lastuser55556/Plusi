// Dopolnitelnoe zadanie 5
#include <iostream>
int main(){int a,b;std::cin>>a>>b;if(b==0){std::cout<<"Cannot divide by zero\n";return 0;}std::cout<<"Integer division: "<<a/b<<"\nFloating-point division: "<<static_cast<double>(a)/b<<"\n";}
