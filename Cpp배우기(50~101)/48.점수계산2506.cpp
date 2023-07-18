#include <iostream>
using namespace std;

int main()
{
    int n;
    int score=0;
    int cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int ans;
        cin>>ans;
        if(ans==1)
        {
            cnt++;
            score+=cnt;
        }
        else
            cnt=0;
    }
    cout<<score;
    return 0;
}