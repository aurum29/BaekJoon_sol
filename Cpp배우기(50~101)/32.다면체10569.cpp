#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int V, E;
        cin>>V>>E;
        cout<<2-V+E<<endl;
    }
    return 0;
}