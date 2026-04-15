#include<iostream>

int main()
{
    int t;
    std::cin>>t;
    for(int i = 0; i < t; i++)
    {
        for(char ch = 'a'; ch <= 'z'; ch++)
        {
            std::cout<<ch<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}