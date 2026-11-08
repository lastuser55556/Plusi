// Dopolnitelnoe zadanie 2
#include <iostream>
int main(){int a,b;std::cin>>a>>b;std::cout<<"a+b="<<a+b<<"\na-b="<<a-b<<"\na*b="<<a*b<<"\n";if(b==0){std::cout<<"Division and modulo by zero are undefined\n";}else{std::cout<<"a/b="<<a/b<<"\na%b="<<a%b<<"\n";}int x=a;x+=b;std::cout<<"a+=b: "<<x<<"\n";x=a;x-=b;std::cout<<"a-=b: "<<x<<"\n";x=a;x*=b;std::cout<<"a*=b: "<<x<<"\n";if(b!=0){x=a;x/=b;std::cout<<"a/=b: "<<x<<"\n";x=a;x%=b;std::cout<<"a%=b: "<<x<<"\n";}}
