//
//  StringController.hpp
//  StringsInC
//
//  Created by Morris, Seth on 2/2/17.
//  Copyright © 2017 Morris, Seth. All rights reserved.
//

#ifndef StringController_hpp
#define StringController_hpp

#include <string>

using namespace std;

class StringController
{
private:
    string derpness;
    string differentWords;
    void numberMethods();
    void length();
    void useBrackets();
    void atInt();
    void empty();
    void substringWithEnd();
    void substringWithStart();
    void compareString();
public:
    StringController();
    void start();
};

#endif /* StringController_hpp */
