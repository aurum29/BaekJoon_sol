#include <iostream>
using namespace std;

struct Cut
{
    int x, y, n;
    bool B;
};

char arr[50][50];

Cut Test(int a, int b);

int main(void)
{
    // input
    int M, N;
    cin>>M>>N;
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
            cin>>arr[i][j];


    //find min
    Cut min={0, 0, Test(0, 0).n, true};

    for(int i=0;i<M-7;i++)
        for(int j=0;j<N-7;j++)
        {
            if(min.n>Test(i, j).n)
            {
                min = Test(i, j);
            }
        }
    
    // output
    cout<<min.n<<endl;
    return 0;
}

Cut Test(int a, int b)
{
    int cnt1=0, cnt2=0;
    bool scan_black = true;
    // black start
    for(int i=a;i<a+8;i++)
    {
        for(int j=b;j<b+8;j++)
        {
            if(scan_black)
            {
                if(arr[i][j]!='B')
                    cnt1++;
            }
            else
            {
                if(arr[i][j]!='W')
                    cnt1++;
            }
            scan_black = !scan_black;
        }
        scan_black = !scan_black;
    }
    
    // white start
    scan_black=false;
    for(int i=a;i<a+8;i++)
    {
        for(int j=b;j<b+8;j++)
        {
            if(scan_black)
            {
                if(arr[i][j]!='B')
                    cnt2++;
            }
            else
            {
                if(arr[i][j]!='W')
                    cnt2++;
            }
            scan_black = !scan_black;
        }
        scan_black = !scan_black;
    }
    
    if(cnt1>cnt2)
        return {a, b, cnt2, false};
    else
        return {a, b, cnt1, true};
}