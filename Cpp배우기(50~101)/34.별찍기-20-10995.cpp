#include <iostream>
using namespace std;
int N;

void Star(int n);

int main()
{
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        Star(i);
    }
    return 0;
}

void Star(int n)
{
    if(n%2==1)
        for(int i=0;i<N;i++)
            cout<<"* ";
    else
        for(int i=0;i<N;i++)
            cout<<" *";
    cout<<endl;
    return;
}
