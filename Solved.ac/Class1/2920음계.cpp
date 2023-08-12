#include <iostream>
using namespace std;

int main(void)
{
    int len=8;
    int * arr = new int[len];
    for(int i=0;i<len;i++)
        cin>>arr[i];

    if(arr[0]==1)   // ascending decide
    {
        bool ascend = true;
        for(int i=0;i<len-1;i++)
            if(arr[i]-arr[i+1]!=-1)
                ascend = false;
        if(ascend)
        {
            cout<<"ascending"<<endl;
            return 0;
        }
    }

    if(arr[0]==8)   // descending decide
    {
        bool descend = true;
        for(int i=0;i<len-1;i++)
            if(arr[i]-arr[i+1]!=1)
                descend = false;
        if(descend)
        {
            cout<<"descending"<<endl;
            return 0;
        }
    }

    cout<<"mixed"<<endl;
    return 0;
}