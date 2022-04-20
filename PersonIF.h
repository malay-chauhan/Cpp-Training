#pragma once
#include <iostream>
#include <string>

using namespace std;

class PersonIF
{
public:
    virtual ~PersonIF() {};

    virtual string getName() = 0;

    virtual int getAge() = 0;

    virtual void setName(string name) = 0;
    
    virtual void setAge(int age) = 0;

};


