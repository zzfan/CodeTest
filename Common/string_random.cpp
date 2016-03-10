/*************************************************************************
	> File Name: string_random.cpp
	> Author: zzfan
	> Mail: zzfan@mail.ustc.edu.cn 
	> Created Time: 2015年11月16日 星期一 15时14分16秒
 ************************************************************************/

#include "string_random.hpp"

string rand_str(string str, const int len)
{
    srand(time(NULL));
    int temp; 
    for(temp=0; temp < len; temp++)
    str[temp] = 'a' + rand()%26;
    str[++temp] = '\0';
    return str;
}

string rand_str()
{
    int temp;
    int len = rand()%10 + 1;
    string str;
    for (temp = 0; temp < len; temp ++)
    {
        str += ('a' + rand()%26);
    }
    str += '\0';
    return str;
}
