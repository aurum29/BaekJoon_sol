#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    int A, B, C;
    cin>>A>>B>>C;
    string multi = to_string(A*B*C);
    int cnt[10]={0};
    for(int i=0;i<multi.length();i++)
        cnt[(int)(multi[i]-'0')]++;
    for(int i=0;i<10;i++)
        cout<<cnt[i]<<endl;
    return 0;
}