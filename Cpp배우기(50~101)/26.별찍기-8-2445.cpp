#include <iostream>
using namespace std;

int N;

void Star(int n)
{
    for(int i=0;i<n;i++)
        cout<<"*";
    for(int i=0;i<2*(N-n);i++)
        cout<<" ";
    for(int i=0;i<n;i++)
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