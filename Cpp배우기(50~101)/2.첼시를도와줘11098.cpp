#include <iostream>
using namespace std;

struct player
{
    long int price;
    char Name[20];
};

void test(int const cnt)
{
    player A[cnt];
    int max_index=0;
    for(int i=0; i<cnt; i++)
    {
        cin>>A[i].price>>A[i].Name;
        if(A[max_index].price<A[i].price)
            max_index = i;
    }
    cout<<A[max_index].Name<<endl;
    return;    
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        test(p);
    }

    return 0;
}