#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int sum, n;
        cin>>sum;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int q, p;
            cin>>q>>p;
            sum += q*p;
        }
        cout<<sum<<endl;
    }
    return 0;
}