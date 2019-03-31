#include <iostream>
#include <algorithm>
using namespace std;

struct time{
    int h;
    int m;
};

bool comp1(time a,time b){
    return a.h*60+a.m<b.h*60+b.m;
}

int main()
{
    int t1,t2;
    int n;
    cin>>n;
    time *t=new time[n];
    for(int i=0;i<n;i++)
    {
        cin>>t[i].h>>t[i].m;      //闹钟调节时间
    }
    sort(t,t+n,comp1);      //对闹钟早晚排序
    int getup;  //起床时间
    cin>>getup;
    int A,B;
    cin>>A>>B;  //上课时间
    int A1=(A*60+B-getup)/60;   //最晚的闹钟的小时
    int B1=(A*60+B-getup)%60;   //最晚的闹钟的分钟
    for(int i=0;i<n;i++)        //求出符合条件的闹钟
    {
        if(t[i].h<A1||t[i].h==A1&&t[i].m<=B1){ //选出最晚的闹钟
            t1=t[i].h;
            t2=t[i].m;
        }
    }
    cout<<t1<<" "<<t2;
    return 0;
}
