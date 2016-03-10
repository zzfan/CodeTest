/*************************************************************************
	> File Name: sort_test.cpp
	> Author: zzfan
	> Mail: zzfan@mail.ustc.edu.cn 
	> Created Time: 2015年11月16日 星期一 15时03分05秒
 ************************************************************************/

#include<iostream>
#include <string>
#include <algorithm>
#include "../Common/string_random.hpp"
#include <vector>

#define MAX_NUM 10 

bool
isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    srand(time(NULL));
    vector<string> test_str;
    for (int temp = 0; temp < MAX_NUM; temp++){
        test_str.push_back(rand_str());
    }

    sort(test_str.begin(), test_str.end());
    cout << ">> Basic sort algorithm: " << endl;
    for (vector<string>::size_type i = 0; i < test_str.size(); i++)
        cout << test_str[i] << endl;

    sort(test_str.begin(), test_str.end(), isShorter);
    cout << ">> Binary predicate sort on size: " << endl;
    for (vector<string>::size_type i = 0; i< test_str.size(); i++)
        cout << test_str[i] << endl;

    stable_sort(test_str.begin(), test_str.end(), isShorter);
    cout << ">> Stable sort on size and order: " << endl;
    for (vector<string>::size_type i = 0; i < test_str.size(); i++)
        cout << test_str[i] << endl;


}
