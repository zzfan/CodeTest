/*************************************************************************
	> File Name: biggies.cpp
	> Author: zzfan
	> Mail: zzfan@mail.ustc.edu.cn 
	> Created Time: 2015年11月23日 星期一 19时04分05秒
 ************************************************************************/

#include<iostream>
#include <string>
#include <algorithm>
#include "../../Common/string_random.hpp"
#include <vector>

#define MAX_NUM 20

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    for_each(words.begin(), words.end(), [](const string &s){ cout << s << " "; });
    cout << endl;
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

string make_plural(int count, string a, string b)
{
    if (count > 1)
    return a+b;
    else 
    return a;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(), words.end(), [](const string &a, const string &b){return a.size() < b.size();});
    auto wc = find_if(words.begin(), words.end(), [sz](const string &a){ return a.size() >= sz; });
    auto count = words.end() - wc;
    cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer "  << endl;
    for_each(wc, words.end(), [](const string &a){ cout << a << " "; });
    cout << endl;
}

int main()
{
    srand(time(NULL));
    vector<string>::size_type sz = 5;
    vector<string> test_str;
    for (int i = 0; i < MAX_NUM; i++){
        test_str.push_back(rand_str());
    }
    for_each(test_str.begin(), test_str.end(), [](const string &s){ cout << s << " "; });
    cout << endl;
    biggies(test_str, sz);


}
