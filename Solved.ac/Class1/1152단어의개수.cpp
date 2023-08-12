#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    char arr[1000000];
    int cnt=0;
    cin.getline(arr, 1000000);
    cout<<arr<<endl;
    if(strlen(arr)==1&&arr[0]==' ')
    {
        cout<<0<<endl;
        return 0;
    }
    for(int i=1;i<strlen(arr)-1;i++)    // -1한 이유는 마지막 단어에 띄어쓰기가 같이 들어간 경우는 제외하기 위함
    {
        if(arr[i]==' ') cnt++;
    }
    cout<<cnt+1<<endl;
    return 0;
}