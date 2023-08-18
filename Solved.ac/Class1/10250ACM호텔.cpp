#include <iostream>
using namespace std;

int main(void)
{
    int T;
    cin>>T;
    int H, W, N, RoomNum;
    for(int i=0;i<T;i++)
    {
        cin>>H>>W>>N;
        if(N%H==0)
            RoomNum = H*100+(N/H);
        else
            RoomNum = (N%H)*100+(N/H+1);
        cout<<RoomNum<<endl;
    }
    return 0;
}