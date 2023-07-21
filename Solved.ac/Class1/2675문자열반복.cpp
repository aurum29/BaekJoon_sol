#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int n;
        char a[21];
        cin>>n;
        cin>>a;
        int j=0;
        int cnt=0;
        while(a[j]!=NULL)
        {
            cout<<a[j];
            cnt++;
            if(cnt==n)
            {
                cnt=0;
                j++;
            }
        }
        cout<<endl;
    }

    return 0;
}