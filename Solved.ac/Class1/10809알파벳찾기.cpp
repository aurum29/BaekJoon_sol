#include <iostream>
using namespace std;

int main(void)
{
    string S;
    cin>>S;
    for(int i=0;i<26;i++)
    {
        for(int j=0;j<S.length();j++)
        {
            if(S[j]==97+i)
            {
                cout<<j<<" ";
                break;
            }
            else if(j==S.length()-1) cout<<"-1 ";
        }
    }
    return 0;
}