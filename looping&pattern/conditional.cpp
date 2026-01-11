#include<iostream>

int main(){
    int a;
    std::cin>>a;

    if(a>0){
        std::cout<<a<< " is positive"<<std::endl;
    }else{
        if(a<0){
            std::cout<<a<<" is negative"<<std::endl;
        }else{
            std::cout<<a<<" is 0"<<std::endl;
        }
    }
    return 0;
}