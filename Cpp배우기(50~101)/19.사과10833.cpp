#include <iostream>
using namespace std;

int main()
{
    int N,sum=0;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int student, apple;
        cin>>student>>apple;
        sum += apple%student;
    }
    cout<<sum<<endl;
}