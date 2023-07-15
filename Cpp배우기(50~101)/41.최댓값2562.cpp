#include <iostream>
using namespace std;
struct A{
    int data;
    int index;
};

int main()
{
    A max;
    max.data=0;
    for(int i=0;i<9;i++)
    {
        int a;
        cin>>a;
        if(max.data<a)
        {
            max.data = a;
            max.index = i;
        }
    }
    cout<<max.data<<endl<<max.index+1<<endl;
    return 0;
}