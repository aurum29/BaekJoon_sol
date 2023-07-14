#include <iostream>

int main(){
    int sum=0, a;
    for(int i=0;i<5;i++){
        std::cin>>a;
        sum+=a;
    }
    std::cout<<sum<<std::endl;
    return 0;
}