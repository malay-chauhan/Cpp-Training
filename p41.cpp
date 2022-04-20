#include <iostream>
#include <vector>
#include <string>
#include <functional>
using namespace std;

class Person
{
public:
    int AGE;
    string NAME;

    Person(string name, int age) : AGE(age), NAME(name) {}
    void printadd(int) const {std::cout << age_+i << endl;}
    int age_;
    Person();
};

void getAge(std::function<void(int)> age)
{
    age(21);
}

void getageint(int Age)
{
    std::cout << "recevied value is" << Age << endl;
}

void getName(std::function<void(string)> NAME)
{
    NAME("Malay");
}

void getNameint(string name)
{
    std::cout << "recevied value is" << name << endl;
}

int main()
{
    //std::function for age
    std::function<void(int)> f_display = getageint;
    getAge(f_display);

    //lambda function
    std::function<void()> f_display_21 = [](){ getageint(33); };
    f_display_21();

    //std::function for name
    std::function<void(std::string)> m_display = getNameint;
    getName(m_display);

    //lambda function
    std::function<void()> m_display_manan = [](){ getNameint("mayur"); };
    m_display_manan();

    //bind function
    std::cout << "std::bind call" << endl;
    std::function<void()> f_display_55 = std::bind(getageint, 99);
    f_display_55();

}
