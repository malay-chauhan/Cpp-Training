#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myvector;

  for (int i=1; i<=10; i++) myvector.push_back(i);

  myvector.erase (myvector.begin()+5);

  myvector.erase (myvector.begin(),myvector.begin()+1);

  std::cout << "myvector contains:";
  for (unsigned i=0; i<myvector.size(); ++i)
    std::cout << ' ' << myvector[i];
  std::cout << '\n';

  return 0;
}
