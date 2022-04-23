/*#include <iostream>
#include <vector>

int main()
{
    std::vector<int> myvector(3, 100);
    std::vector<int>::iterator it;

    it = myvector.begin();
    it = myvector.insert(it, 200);

    myvector.insert(it, 2, 300);
    it = myvector.begin();

    std::vector<int> anothervector(2, 400);
    myvector.insert(it + 2, anothervector.begin(), anothervector.end());

    int myarray[] = {501, 502, 503};
    myvector.insert(myvector.begin(), myarray, myarray + 3);

    std::cout << "myvector contains:";
    for (it = myvector.begin(); it < myvector.end(); it++)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}*/

// Program below illustrates the
// vector::insert() function

#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> vec = { 10, 20, 30, 40 };

	auto it = vec.insert(vec.begin(), 3);
	vec.insert(it, 2);

	int i = 2;
	it = vec.insert(vec.begin() + i, 7);

	cout << "The vector is: "<<"\n";
	for (auto it = vec.begin(); it != vec.end(); ++it)
		cout << *it << " ";

	return 0;
}
