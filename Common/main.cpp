/*************************************************************************
	> File Name: main.cpp
	> Author: zzfan
	> Mail: zzfan@mail.ustc.edu.cn 
	> Created Time: 2015年11月17日 星期二 09时18分08秒
 ************************************************************************/

#include "string_random.hpp"
#include <vector>

int main()
{
    srand(time(NULL));
    vector<string> str_test;
    for (int i = 0; i < 10; i++)
    {
        str_test.push_back(rand_str());
    }
    for (vector<string>::size_type j = 0; j < str_test.size(); j++)
    {
        cout << str_test[j] << endl;
    }
}
