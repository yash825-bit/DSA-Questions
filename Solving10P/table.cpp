#include<iostream>

int main()
{
    int t;
    std::cin>>t;

    for(int i = 0; i < t; i++)
    {
        int n;
        std::cin>>n;
        for(int i = 0; i <= 10; i++)
        {
            std::cout<<n<<" x "<<i<<" = "<<n*i<<std::endl;
        }
    }
    return 0;
}