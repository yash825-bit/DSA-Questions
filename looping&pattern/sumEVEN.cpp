#include<iostream>

int main(){
    int n;
    std::cin>>n;

    int i = 1;
    int sum = 0;
    while(i<=n){
        if(i%2==0){
            sum = sum + i;
        }
        i++;
    }
    std::cout<<sum<<std::endl;
    return 0;
}