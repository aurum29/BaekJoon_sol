#include <iostream>
using namespace std;

struct Person
{
    char Name[15];
    int Day;
    int Month;
    int Year;
    int Data;   // 빠른 비교를 위해 설정
};

int main()
{
    int n;
    cin>>n;
    Person list[n];
    int MinIndex=0;
    int MaxIndex=0;
    for(int i=0; i<n; i++)
    {
        cin>>list[i].Name>>list[i].Day>>list[i].Month>>list[i].Year;
        list[i].Data = list[i].Year*10000 + list[i].Month*100 + list[i].Day;
        if(list[MinIndex].Data>list[i].Data) MinIndex = i;
        if(list[MaxIndex].Data<list[i].Data) MaxIndex = i;
    }
    cout<<list[MaxIndex].Name<<endl<<list[MinIndex].Name<<endl;
    return 0;
}