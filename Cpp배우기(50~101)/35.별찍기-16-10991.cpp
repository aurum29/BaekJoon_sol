#include <iostream>
using namespace std;
int N;

void Star(int n);

int main()
{
    cin>>N;
    for(int i=1;i<=N;i++)
        Star(i);
    return 0;
}

void Star(int n)
{
    for(int i=0;i<N-n;i++)
        cout<<" ";
    for(int i=0;i<n;i++)
        cout<<"* ";
    cout<<endl;
}
