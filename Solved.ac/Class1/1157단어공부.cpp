#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    int cnt[26]={0};
    string arr;
    getline(cin, arr);
    for(int i=0;i<arr.length();i++)
    {
        arr[i];
        if(65<=arr[i]&&arr[i]<=90)
            cnt[arr[i]-65]++;
        else if(97<=arr[i]&&arr[i]<=122)
            cnt[arr[i]-97]++;
    }
    int max_idx=0;
    bool same=false;
    for(int i=1;i<26;i++)
    {
        if(cnt[max_idx]==cnt[i]) same=true;
        if(cnt[max_idx]<cnt[i])
        {
            max_idx=i;
            same = false;
        }
    }

    if(same)
    {
        cout<<"?"<<endl;
        return 0;
    }
    cout<<(char)(max_idx+65)<<endl;
    return 0;
}