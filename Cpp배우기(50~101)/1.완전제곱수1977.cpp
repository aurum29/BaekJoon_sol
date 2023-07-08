#include <iostream>

int main()
{
    int M, N;
    std::cin>>M>>N;
    int min;
    int i = 1;
    int sum = 0;
    
    while(i*i<=N)
    {
        if(i*i>=M)
        {
            if(sum==0) min = i*i;
            sum+=i*i;
        }
        i++;
    }

    if(sum!=0)
    {
        std::cout<<sum<<std::endl;
        std::cout<<min<<std::endl;
    }
    else
        std::cout<<"-1"<<std::endl;
    return 0;
}