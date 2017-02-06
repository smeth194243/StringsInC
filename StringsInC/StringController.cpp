//
//  StringController.cpp
//  StringsInC
//
//  Created by Morris, Seth on 2/2/17.
//  Copyright © 2017 Morris, Seth. All rights reserved.
//

#include "StringController.hpp"
#include <iostream>

using namespace std;

StringController :: StringController()
{
    derpness = "Derp DErp deRP";
    differentWords = "The answer is 666";
}

void StringController:: start()
{
    //numberMethods();
    useBrackets();
    atInt();
    length();
    empty();
    substringWithEnd();
    substringWithStart();
    compareString();
}

void StringController:: useBrackets()
{
    string useDemBrackets;
    useDemBrackets = "Boxy things";
    for (int index = 0; index < useDemBrackets.length(); index++)
    {
        cout << useDemBrackets.at(index) << endl;
    }
}

void StringController:: length()
{
    string withLength;
    withLength = "This method checks the length of the String.";
    cout << withLength.length() << endl;
}

void StringController :: empty()
{
    string withEmpty;
    withEmpty = "This checks if the String is empty or not.";
    cout << withEmpty.empty() << endl;
}

void StringController :: substringWithEnd()
{
    string withEnd;
    withEnd = "This creates a substring with the specified startin and ending values.";
    cout << withEnd.substr(5,12) << endl;
}

void StringController :: substringWithStart()
{
    string withStart;
    withStart = "This creates a substring from the specified starting value.";
    cout << withStart.substr(12)<< endl;
}

void StringController:: compareString()
{
    string firstString = "The Same String.";
    string secondString = "The Same String.";
    cout << firstString.compare(secondString) << endl;
}

//void StringController::numberMethods()
//{
//    int count
//}
