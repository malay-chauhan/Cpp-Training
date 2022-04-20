#pragma once
#include "PersonIF.h"

class Person : public PersonIF
{
public:
    virtual ~Person(){};

    virtual string getName() override;

    virtual int getAge() override;

    virtual void setName(string name) override;

    virtual void setAge(int age) override;

public:
    string m_name;
    int m_age;
};
