#include <iostream>
using namespace std;

int N;

void Star(int n)
{
    for(int i=0;i<n-1;i++)
        cout<<" ";
    for(int i=0;i<2*(N-n+1)-1;i++)
        cout<<"*";
    cout<<endl;
    return;
}

int main()
{
    cin>>N;
    for(int i=1;i<=N;i++)
        Star(i);
    
    for(int i=N-1;i>=1;i--)
        Star(i);

    return 0;
}