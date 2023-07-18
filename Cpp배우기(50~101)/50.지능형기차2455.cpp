#include <iostream>
using namespace std;

class Train
{
private:
    int people;
public:
    Train(int n) : people(n)
    { }
    int check(void) const
    {
        return people;
    }
    void in(int x)
    {
        people+=x;
        return;
    }
    void out(int x)
    {
        people-=x;
        return;
    }
    ~Train()
    { }
};

int main()
{
    Train T(0);
    int max=0;
    for(int i=0;i<4;i++)
    {
        int a, b;
        cin>>a>>b;
        T.out(a);
        T.in(b);
        if(max<T.check())
            max = T.check();
    }
    cout<<max<<endl;
}