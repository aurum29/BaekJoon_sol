#include <iostream>
using namespace std;

int main(void)
{
    int N, sum=0;
    cin>>N;
    char a;
    for(int i=0;i<N;i++)
    {
        cin>>a;
        sum+=a-48;  // since ascii code
    }
    cout<<sum<<endl;
    return 0;
}