#include <iostream>
using namespace std;

int GCD(int n1, int n2);    // 최대공약수 n1<n2
int LCM(int n1, int n2);    // 최소공배수 n1<n2

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<(a < b ? GCD(a, b) : GCD(b, a))<<endl;    // 삼항연산자 활용
    cout<<(a < b ? LCM(a, b) : LCM(b, a))<<endl;
    
    return 0;
}

int GCD(int n1, int n2)
{
    int max = 1;
    for(int i=2;i<=n1;i++)  // for 문이 역순으로 구성되면 int max 할당 안해도 됌
    {
        if(n1%i==0 && n2%i==0)
            max = i;
    }
    return max;
}

int LCM(int n1, int n2)
{
    for(int i = n2;i<n1*n2;i++)
        if(i%n1==0 && i%n2==0)
            return i;
    return n1*n2;
}