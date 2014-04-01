#include <iostream>
#include "max_sum.hh"

int main(int argc, char *argv[])
{
    int *p;
    int n;
    std::cout << "How many integers:" << std::endl;
    std::cin >> n;
    p = new int[n];
    std::cout << "Input " << n << " integers:" << std::endl;
    for (int i=0; i<n; ++i)
        std::cin >> p[i];
    std::cout << "max: " << practices::max_sum(p, n) << std::endl;
}
