#include <iostream>
using namespace std;

int N;

void Star(int n)
{
    for(int i=0;i<N-n;i++)
        cout<<" ";
    for(int i=0;i<2*n-1;i++)
        cout<<'*';
    cout<<endl;
    return;
}

int main()
{
    cin>>N;
    for(int i=1;i<=N;i++)
        Star(i);
    return 0;
}