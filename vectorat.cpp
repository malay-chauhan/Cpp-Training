#include <iostream>
#include <vector>

using namespace std;

int main()
{
    std::vector<int> myvector(10);

    for (unsigned i = 0; i < myvector.size(); i++)
        myvector.at(i) = i;

    cout << "myvector contains:";

    for (unsigned i = 0; i < myvector.size(); i++)
        cout << ' ' << myvector.at(i);
    cout << endl;

    return 0;
}