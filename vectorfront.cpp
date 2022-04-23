#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myvector;

  myvector.push_back(78);
  myvector.push_back(16);

  myvector.front(); 
  myvector.back();

  std::cout << "myvector.front() is now " << myvector.front() << '\n';
  std::cout << "myvector back() is now" << myvector.back() << '\n';

  return 0;
}