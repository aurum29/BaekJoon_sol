#include <iostream>
using namespace std;

int main()
{
    int n, max=0;
    int sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int score;
        cin>>score;
        sum+=score;
        if(score>max)
            max=score;
    }
    double average = ((double)sum/(double)max*100.0)/(double)n;
    cout<<average<<endl;
    return 0;
}