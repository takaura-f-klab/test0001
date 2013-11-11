//
//  main.cpp
//  Test0001
//
//  Created by takaura-f on 13/11/11.
//  Copyright (c) 2013年 takaura-f. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main(int argc, const char * argv[])
{
    vector<int> vec;
    vec.push_back(1);
    
    string str;
    str = "string";
    cout << str << endl;

    map<int,int> m;
    m.insert(make_pair(1, 123));
    
    return 0;
}

