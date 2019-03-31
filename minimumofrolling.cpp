#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
    int len=rotateArray.size();
    if(len==0)
        return 0;
    int left=0;
    int right=len-1;
    int middle=0;
    while(rotateArray[left]>=rotateArray[right])//相当于while(0),进行换位后遍历查找最小值
    {
        if(right-left==1)
        {
            middle = right;
            break;  //换位完成
        }
        middle=(left+right)/2;
        //如果数组左右中间值都相等则不能使用二分查找
        //因为不确定数组中间位置位于哪个有序子数组
        //只能用顺序查找
        if(rotateArray[left]==rotateArray[right]&&
           rotateArray[left]==rotateArray[middle])
        {
            return Midorder(rotateArray,left,right);
            //遍历判断数组最左端和最右端之间数的最小值
        }
        if(rotateArray[left]<=rotateArray[right])
        {
            left=middle;
        }
        else if(rotateArray[left]>=rotateArray[right])
        {
            right=middle;
        }
    }
    return rotateArray[middle]; //返回最小值
    }
    int Midorder(vector<int> &num,int left,int right)//顺序查找选出数组的最小值
{
    int minnum=num[left];
    for(int i=left+1;i<right;i++)
    {
        if(num[i]<minnum)
            minnum=num[i];
    }
    return minnum;
}
};
