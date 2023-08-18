#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    int IsYun = 0;
    if(n%4==0)
    {
        if(n%100==0)
        {
            if(n%400==0)
                IsYun=1;
            else
                IsYun=0;
        }
        else IsYun=1;
    }
    cout<<IsYun<<endl;
    return 0;
}