#include <iostream>
#include <vector>
using namespace std;

int main()
{
    std::vector<int> first;
    std::vector<int> second;
    std::vector<int> third;

    first.assign(7,100);

    std::vector<int>::iterator it;
    it=first.begin();

    second.assign (it,first.end()-1);

    int mylist[] = {233,8990,78};
    third.assign (mylist,mylist+1);

    cout << "size of first " << int (first.size()) << endl;
    cout << "size of second " << int (second.size()) << endl;
    cout << "size of third " << int (third.size()) << endl;


}