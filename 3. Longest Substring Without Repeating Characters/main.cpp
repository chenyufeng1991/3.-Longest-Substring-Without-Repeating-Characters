//
//  main.cpp
//  3. Longest Substring Without Repeating Characters
//
//  Created by chenyufeng on 10/5/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

// 判断字符串是否有重复字符
bool isRepeatString(string s)
{
    for (int i = 0; i < s.length(); i++)
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                // 有重复
                return true;
            }
        }

    return false;
}

// abcabcbb-->abc
int lengthOfLongestSubstring(string s)
{
    long length = s.length();
    for (int i = 0; i < s.length(); i++)
    {
        if (i + length > s.length())
        {
            length--;
            i = -1;
            continue;
        }

        string temp = s.substr(i,length);
        if (!isRepeatString(temp))
        {
            return (int)length;
        }
        else
        {
            continue;
        }
    }

    return 1;
}



int main(int argc, const char * argv[])
{
    int result = lengthOfLongestSubstring("");
    cout << result;


    return 0;
}
