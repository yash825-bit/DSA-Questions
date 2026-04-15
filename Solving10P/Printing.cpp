#include<iostream>

int main()
{
    int t;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        for(int j = 100; j <= 200; j++){
            std::cout<<j<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}