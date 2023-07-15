#include <iostream>
using namespace std;
int n;

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
    int n, cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if (PrimeNum(a))
        {
            cnt+=1;
        }
    }
    cout<<cnt<<endl;
}