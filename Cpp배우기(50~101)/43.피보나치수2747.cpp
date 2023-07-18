// 피보나치수-2-2748과 같음
#include <iostream>
using namespace std;

int F(int n)    // 재귀함수로 하면 시간초과
{
    if(n>=2) return F(n-1)+F(n-2);
    if(n==1) return 1;
    if(n==0) return 0;
}

int main()
{
    int n;
    long long int Fibo[100];
    Fibo[0] = 0, Fibo[1]=1;
    cin>>n;
    for(int i=2;i<=n;i++)
        Fibo[i] = Fibo[i-1] + Fibo[i-2];
    cout<<Fibo[n]<<endl;
    return 0;
}