#include <iostream>
using namespace std;

int main(void)
{
    string s;
    getline(cin, s);
    int n;
    cin>>n;
    cout<<s[n-1]<<endl;
    return 0;
}