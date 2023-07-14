#include <iostream>
using namespace std;
int N;
void StarBigger(int n)
{
    for(int i=0;i<N-n;i++)
        cout<<" ";
    for(int i=0;i<2*n-1;i++)
        cout<<'*';
    cout<<endl;
    return;
}

void StarSmaller(int n)
{
    for(int i=0;i<n;i++)
        cout<<" ";
    for(int i=0;i<2*(N-n)-1;i++)
        cout<<'*';
    cout<<endl;
    return;
}

int main()
{
    cin>>N;
    for(int i=1;i<N;i++)
        StarBigger(i);
    for(int i=0;i<N;i++)
        StarSmaller(i);
    return 0;
}