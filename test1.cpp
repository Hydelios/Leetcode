//
// Created by 黄彦铎 on 2021/3/26.
//
#include <deque>
#include <vector>
#include <map>
#include <iostream>
#include "test1.h"


using namespace std;

class solution {
public:
    int so(vector<int> vec) {
        int count = 0;
        map<int, int> mapper;
        for (int i = 0; i < vec.size(); i++) {
            if (mapper.count(100 - vec[i]) != 0)
                count += mapper[100 - vec[i]];
            mapper[vec[i]]++;
        }
        return count;
    }
};

int test() {
    solution getans;
    vector<int> vec = {50, 50, 50};
    cout << getans.so(vec) << endl;
    return 1;
}
