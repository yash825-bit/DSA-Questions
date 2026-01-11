#include<iostream>

int main(){
    int n;
    std::cin>>n;

    int i = 1;
    int sum = n/2*(1+n); //direct formula for sum;
    std::cout<<sum<<std::endl;
    return 0;
}