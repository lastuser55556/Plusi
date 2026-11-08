// Dopolnitelnoe zadanie 6
#include <iostream>
#include <string>
#include <exception>
int main(){std::string input;std::cin>>input;try{std::size_t pos=0;int n=std::stoi(input,&pos);if(pos!=input.size()){std::cout<<"Invalid integer\n";return 0;}int result=n*3;std::cout<<"Number: "<<result<<"\nString: "<<std::to_string(result)<<"\n";}catch(const std::exception&){std::cout<<"Invalid integer or out of range\n";return 0;}double pi=std::stod("3.14");std::cout<<"stod: "<<pi<<"\n";}
