#include <iostream>

int main()
{
    int n;
    std::cin>>n;
    for(int i=n;i>=1;i--)
        std::cout<<i<<"\n"; //endl은 버퍼를 비우는 작업하기에 안 씀
    return 0;
}