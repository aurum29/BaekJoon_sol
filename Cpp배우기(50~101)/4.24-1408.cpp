#include <iostream>
using namespace std;

struct Time
{
    int hour, min, sec, data;
};

int main()
{
    Time start, now;
    int data;

    scanf("%d:%d:%d", &now.hour, &now.min, &now.sec);
    scanf("%d:%d:%d", &start.hour, &start.min, &start.sec);
    now.data = now.hour*3600 + now.min*60 + now.sec;
    start.data = start.hour*3600 + start.min*60 + start.sec;
    if(now.data<=start.data)
        data = start.data-now.data;
    else
        data = start.data-now.data+24*3600;
    printf("%02d:%02d:%02d\n", data/3600, (data%3600)/60, data%60);
    return 0;
}