#include <iostream>
using namespace std;

int main()
{
    int sum=0;
    int min=100;    // 문제에서 100보다 작은 수 입력하므로
    for(int i=0;i<7;i++)
    {
        int a;
        cin>>a;
        if(a%2==1)  // 홀수인 경우
        {
            sum+=a;
            if(a<min) min=a;
        }
    }
    if(sum==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<sum<<endl<<min<<endl;
    return 0;
}