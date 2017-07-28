//
//  main.cpp
//  StringTest
//
//  Created by Jacoblee on 2017/7/28.
//  Copyright © 2017年 Jacoblee. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

//int main()
//{
//    string str = "qweasdzxc";
//    for (auto &c : str ) { //使用引用，改变的是字符串str的值
//        c = 'X';
//        
//    }
//    cout << str << endl;
//    return 0;
//}
int main()
{
    string str;
    while (getline(cin, str)) {
        for (auto &c : str) {
            if (!ispunct(c)) {
                cout << c;
            }
        }
    }
    return 0;
}
