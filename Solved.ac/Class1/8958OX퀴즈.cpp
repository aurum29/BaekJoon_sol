#include <iostream>
#include <cstring>
using namespace std;

class test
{
private:
    char arr[81];
    int len;
    int score;
public:
    test()
    {
        score=0;

        // first correct input !!
        cin.getline(arr, 81);
        len = strlen(arr);

        /* second correct input !!
        scanf("%s",&arr);
        len = strlen(arr);
        */


        /* wrong input !!
        char a;
        while(cin>>a)   // same as a!=cin.eof()
        {
            if(a=='1') cout<<"IF"<<endl;
            arr[len++] = a;
        }
        */
        
    }
    void ShowScore(void)
    {
        int counti=1;
        for(int i=0;i<len;i++)
        {
            if(arr[i]=='O')
            {
                score+=counti++;
            }
            if(arr[i]=='X')
            {
                counti=1;
            }
        }
        cout<<score<<endl;
        return;
    }
};

int main(void)
{
    int N;
    cin>>N;
    cin.ignore();       // for first correct input !!

    for(int i=0; i<N;i++)
    {
        test temp;
        temp.ShowScore();
    }
    return 0;
}