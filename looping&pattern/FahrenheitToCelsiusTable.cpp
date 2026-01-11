#include<iostream>

int main(){
    double f1;
    f1 = 0;
    double f2;
    f2 = 100;
    int step = 10;

    std::cout<<"Fahrenheit"<<"      "<<"Celsius"<<std::endl;
    std::cout<<"-----------------------"<<std::endl;
    while(f1<=f2){
        double c = (f1-32)*5/9;
        std::cout<<"    "<<f1<<"        |    "<<c<<std::endl;
        f1 = f1 + step;
    }
    return 0;
}