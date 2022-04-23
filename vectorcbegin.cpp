#include <iostream>
#include <string>
#include <vector>
  
using namespace std;
  
int main()
{
    vector<string> vec;
    std::vector<int> myvector = {10,20,30,40,50};

    for(auto it = myvector.cbegin(); it != myvector.cend(); i++)
        std::cout << '' << *it;
    std::cout << '\n';
  
    vec.push_back("first");
    vec.push_back("second");
    vec.push_back("third");
    vec.push_back("fourth");
    vec.push_back("fifth");
  
    cout << "Contents of the vector:" << endl;
    for (auto itr = vec.cbegin(); 
         itr != vec.end(); 
         ++itr)
        cout << *itr << endl;
  
    return 0;
}