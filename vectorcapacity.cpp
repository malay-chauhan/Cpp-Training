#include <iostream>
#include <vector>
using namespace std;

/*int main ()
{
  std::vector<int> myvector;

  for (int i=0; i<100; i++) myvector.push_back(i);

  std::cout << "size: " << (int) myvector.size() << endl;
  std::cout << "capacity: " << (int) myvector.capacity() << endl;
  std::cout << "max_size: " << (int) myvector.max_size() << endl;
  return 0;
}*/
  
int main()
{
    std::vector<int> v;
    
    for (int i = 0; i < 10; i++) 
    {
        v.push_back(i * 10);
    }
  
    cout << "The size of vector is " << v.size();
    cout << "The maximum capacity is " << v.capacity();
    return 0;
}