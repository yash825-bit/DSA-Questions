#include<iostream>

int main()
{
    int t;
    std::cin>>t;
    for(int i = 0; i < t; i++)
    {
        for(int j = 1 ; j <= 100; j=j+3){
            std::cout<<j<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}