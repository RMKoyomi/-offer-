#include <iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;     //测试点的个数
    while(n--){
        int t,m,s;  //时，分，秒
        char k;     //冒号
        cin>>t>>k>>m>>k>>s;
        if(t>23){
            t=t%10;     //改变尽量少的数字代替超出范围的数字
            cout<<"0"<<t;
        }
        else if(t>=10)
        {
            cout<<t;
        }
        else{
            cout<<"0"<<t;
        }
        cout<<":";

        if(m>59)
        {
            m=m%10;     //改变尽量少的数字代替超出范围的数字
            cout<<"0"<<m;
        }
        else if(m>=10)
        {
            cout<<m;
        }
        else{
            cout<<"0"<<m;
        }
        cout<<":";

        if(s>59)
        {
            s=s%10;     //改变尽量少的数字代替超出范围的数字
            cout<<"0"<<s;
        }
        else if(s>=10)
        {
            cout<<s;
        }
        else{
            cout<<"0"<<s;
        }
        cout<<endl;
    }

    return 0;
}
