#include <iostream>
using namespace std;

void Test(int n);

int main()
{
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int n;
        cin>>n;
        Test(n);
    }
}

void Test(int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        sum+=a;
    }
    cout<<sum<<endl;
    return;
}