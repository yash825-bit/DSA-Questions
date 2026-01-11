#include<iostream>

int main(){
    int n;
    std::cin>>n;
    int i = 1;
    int count = 0;

    while(i<=n){
        if(n%i==0){
            count++;
        }
        i++;
    }
    if(count==2){
        std::cout<<n<<" is a prime number"<<std::endl;
    }else{
        std::cout<<n<<" is not a prime number"<<std::endl;
    }
    return 0;
}