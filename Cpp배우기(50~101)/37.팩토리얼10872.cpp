#include <iostream>
using namespace std;

int main()
{
    int x, fac=1;
    cin>>x;
    for(int i=1;i<=x;i++)
        fac*=i;
    cout<<fac<<endl;
    return 0;
}