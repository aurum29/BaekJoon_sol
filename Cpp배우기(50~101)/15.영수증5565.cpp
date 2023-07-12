#include <iostream>
using namespace std;

int main(void)
{
    int TotalPrice, temp;
    cin>>TotalPrice;
    int sum=0;
    for(int i=0;i<9;i++)
    {
        cin>>temp;
        sum+=temp;        
    }
    cout<<TotalPrice-sum<<endl;
    return 0;    
}