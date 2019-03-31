#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    void push(int node){
        stack1.push(node);
    }

    int pop(){
        while(!stack1.empty())
        {
        stack2.push(stack1.top());
        stack1.pop();
        }
        int a=stack2.top();
        stack2.pop();
        while(!stack2.empty())
        {
            stack1.push(stack2.top());  //s2的元素倒回s1（意味不明）
            stack2.pop();
        }
        return a;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};

