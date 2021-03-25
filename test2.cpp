//
// Created by 黄彦铎 on 2021/3/26.
//
#include <deque>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

class solution{
public:
    vector<int> ans(deque<int> deq)
    {
        //非法判断
        int controller=1;
        vector<int> result={};
        while(!deq.empty())
        {
            if(controller%2)//奇
            {
                result.push_back(deq.front());
                deq.pop_front();
            }else
            {
                deq.push_back(deq.front());
                deq.pop_front();
            }
            controller++;
        }
        return result;
    }
};
int main()
{
    deque<int> deq={6,3,1,7,5,8,9,2,4};
    solution so;
    for(int i=0;i<so.ans(deq).size();i++)
    {
        cout<<so.ans(deq)[i];
    }
}