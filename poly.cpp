#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

class Person
{
private:
    string m_Name;
    int m_Age;

public:
    Person(string Name1, int Age) : m_Name(Name1), m_Age(Age)
    {
        cout << "I am in Const : " << m_Name << endl;
    }

    string getm_Name()
    {
        return m_Name;
    }
    int getm_Age()
    {
        return m_Age;
    }
};

int main()
{
    Person per("malay", 70);

    std::vector<Person> myvector{};
    myvector.push_back(per);
    myvector.push_back({"manan", 31});

    for (auto ele : myvector)
    {
        cout << ele.getm_Name() << endl;
        cout << ele.getm_Age() << endl;
    }

    std::map<std::string, int> mymap;
    mymap.insert(pair<string, int>("malay", 1));
    mymap.insert(pair<string, int>("manan", 21));

    for (auto ele : mymap)
    {
        cout << ele.first << endl;
        cout << ele.second << endl;
    }

    return 0;
}
