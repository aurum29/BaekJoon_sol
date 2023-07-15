#include <iostream>
using namespace std;

int main()
{
    for(int i=0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<4;j++)
        {
            int a;
            cin>>a;
            sum+=a;
        }

        switch (sum)
        {
        case 4: //모
            cout<<"E"<<endl;
            break;
        
        case 3: //도
            cout<<"A"<<endl;
            break;
        
        case 2: //개
            cout<<"B"<<endl;
            break;

        case 1: //걸
            cout<<"C"<<endl;
            break;

        case 0: //윷
            cout<<"D"<<endl;
            break;

        default:
            cout<<"Error"<<endl;
            return 0;
        }
    }
    return 0;
}