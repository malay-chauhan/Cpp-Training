#include "Person.h"

string Person::getName()
{
    return m_name;
}

int Person::getAge()
{
    return m_age;
}

void Person::setName(string name)
{
    m_name = name;
}

void Person::setAge(int age)
{
    m_age = age;
}
