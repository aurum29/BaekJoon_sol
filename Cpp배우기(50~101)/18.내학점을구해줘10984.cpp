#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int N, C, sumC=0;
        float G, sum=0.0;
        cin>>N;
        for(int j=0;j<N;j++)
        {
            cin>>C>>G;
            sum+=C*G;
            sumC += C;
        }
        sum = sum / sumC;
        printf("%d %.1f\n",sumC, sum);
//      cout.precision(2);
//      cout<<sumC<<" "<<sum;
    }
    return 0;
}