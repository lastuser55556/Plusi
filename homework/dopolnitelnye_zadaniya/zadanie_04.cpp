// Dopolnitelnoe zadanie 4
#include <iostream>
int main(){int big=300;char small=big;double d=3.99;int i=d;std::cout<<"big="<<big<<", sizeof="<<sizeof(big)<<"\nsmall="<<static_cast<int>(small)<<", sizeof="<<sizeof(small)<<"\nd="<<d<<", i="<<i<<"\n";// On common 8-bit char systems, narrowing 300 to char keeps the low 8 bits (44); char signedness is implementation-dependent.
}
