#include<iostream>

int main(){
    char ch;
    std::cin>>ch;

    if(ch>='a' && ch <='z'){
        std::cout<<ch<<" is a lowercase character"<<std::endl;
    }else if(ch>='A' && ch<='Z'){
        std::cout<<ch<<" is an uppercase charcter"<<std::endl;
    }else if(ch>='0' && ch<='9'){
        std::cout<<ch<<" is a digit"<<std::endl;
    }
    return 0;
}