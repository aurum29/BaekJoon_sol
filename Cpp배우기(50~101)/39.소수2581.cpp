#include <iostream>
using namespace std;

bool PrimeNum(int x)
{
    if(x==1) return false;
    for(int i=2;i<x;i++)
    {
        if(x%i==0) return false;
    }
    return true;
}

int main()
{
    int M, N, sum=0, min;
    cin>>M>>N;
    for(int i=M;i<=N;i++)
    {
        if(PrimeNum(i))
        {
            if(sum==0) min = i;
            sum+=i;
        }
    }
    if(sum==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<sum<<endl<<min<<endl;
    return 0;
}