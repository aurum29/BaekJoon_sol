#include <iostream>
using namespace std;

int main(void)
{
    int remainder[42]={0};
    int a, cnt=0;
    for(int i=0;i<10;i++)
    {
        cin>>a;
        remainder[a%42]++;
    }
    
    for(int i=0;i<42;i++)
        if(remainder[i]!=0) cnt++;
    cout<<cnt<<endl;
    return 0;
}