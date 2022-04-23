/*#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> myvector = {10,20,30};

  auto it = myvector.emplace ( myvector.begin()+1, 100 );
  myvector.emplace ( it, 200 );
  myvector.emplace ( myvector.end(), 300 );

  std::cout << "myvector contains:";
  for (auto& x: myvector)
    std::cout << ' ' << x;
  std::cout << '\n';

  return 0;
}*/

// C++ program to illustrate the
// vector::emplace() function
// insertion at thefront
#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> vec = { 10, 20, 30 };

	auto it = vec.emplace(vec.begin(), 15);

cout << "The vector elements are: ";
	for (auto it = vec.begin(); it != vec.end(); ++it)
		cout << *it << " ";

	return 0;
}
