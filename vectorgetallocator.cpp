#include <iostream>
#include <vector>

int main()
{
    std::vector<int> myvector;
    int *p;
    unsigned int i;

    p = myvector.get_allocator().allocate(5);

    for (i = 0; i < 5; i++)
        myvector.get_allocator().construct(&p[i], i);

    std::cout << "The allocated array contains:";
    for (i = 0; i < 5; i++)
        std::cout << ' ' << p[i];
    std::cout << '\n';

    for (i = 0; i < 5; i++)
        myvector.get_allocator().destroy(&p[i]);
    myvector.get_allocator().deallocate(p,2);

    return 0;
}