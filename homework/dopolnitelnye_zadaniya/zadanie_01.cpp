// Dopolnitelnoe zadanie 1
#include <iostream>
int main(){int a=25;short b=12;long long c=9000000000LL;unsigned int d=42;float e=2.5f;double f=3.14159;char g='A';bool h=true;std::cout<<std::boolalpha;
std::cout<<"int: "<<a<<", "<<sizeof(a)<<" bytes\n"<<"short: "<<b<<", "<<sizeof(b)<<" bytes\n"<<"long long: "<<c<<", "<<sizeof(c)<<" bytes\n"<<"unsigned int: "<<d<<", "<<sizeof(d)<<" bytes\n"<<"float: "<<e<<", "<<sizeof(e)<<" bytes\n"<<"double: "<<f<<", "<<sizeof(f)<<" bytes\n"<<"char: "<<g<<", "<<sizeof(g)<<" bytes\n"<<"bool: "<<h<<", "<<sizeof(h)<<" bytes\n";}
