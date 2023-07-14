#include <iostream>
using namespace std;

int main()
{
    int N, sum=0;
    cin>>N;
    for(int i=N;i>=0;i--)
    {
        for(int j=i;j>=0;j--)
            sum += i+j;
    }
    cout<<sum<<endl;
    return 0;
}