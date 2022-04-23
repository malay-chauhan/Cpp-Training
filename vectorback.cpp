#include <iostream>
#include <vector>
using namespace std;

int main()
{
    std::vector<int> myvectore;
    myvectore.push_back(10);

    while (myvectore.back() != 0)
    {
        myvectore.push_back(myvectore.back() -2);
    }

    std::cout<<"my vector" << endl;
    for (int i = 0; i < myvectore.size(); i++)
        cout  << myvectore[i];
        cout << endl;

    return 0;
}


