#include <iostream>
using namespace std;

int main()
{
    int N, sum=0;
    cin>>N;
    for(int i=0; i<N;i++)
    {
        int x;
        cin>>x;
        sum += x;
    }
    sum = sum - N + 1;
    cout<<sum<<endl;
    return 0;
}