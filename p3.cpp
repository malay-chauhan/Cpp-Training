#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Person
{
public:
    int AGE;
    string NAME;

    void getm_Age(int age)
    {
        std::shared_ptr<Person> per(new Person());
        per->AGE = age;
        myvector.push_back(per);
    }

    void getm_Name(string name)
    {
        std::shared_ptr<Person> per(new Person());
        per->NAME = name;
        myvector.push_back(per);
    }

    void print()
    {
        int ID = 0;
        std::cout << myvector[ID]->NAME << std::endl;
        ID++;
        std::cout << myvector[ID]->AGE << std::endl;
    }

public:
    std::vector<std::shared_ptr<Person>> myvector;
};

int main()
{
    Person p1;
    p1.getm_Name("Malay");
    p1.getm_Age(21);
    p1.print();

}
