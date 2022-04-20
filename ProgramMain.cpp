#include "PersonIF.h"
#include "Person.h"
#include <vector>

int main()
{

    PersonIF *per = new Person();

    per->setName("Malay");
    per->setAge(50);

    cout << "print name \n" << per->getName() << endl;
    cout << "Total age is: " << per->getAge() << endl;

    return 0;
}
