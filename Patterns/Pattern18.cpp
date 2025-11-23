#include<iostream>

void pattern18(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            std::cout<<(char)('A'+i+j)<<" ";
        }
        std::cout<<std::endl;
    }
}

int main(){
    int t;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        int n;
        std::cin>>n;
        pattern18(n);
    }
}