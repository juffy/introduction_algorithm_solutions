#include <iostream>
#include "matrix_chain_order.hh"

int main(int argc, char *argv[])
{
    int **m, **s;
    int *p;
    int n;
    std::cout << "How many matrixes?" << std::endl;
    std::cin >> n;
    p = new int[n+1];
    m = new int*[n+1];
    for (int i=1; i<=n; ++i)
        m[i] = new int[n+1];
    s = new int*[n+1];
    for (int i=1; i<=n; ++i)
        s[i] = new int[n+1];
    std::cout << "Input dimension(need " << n+1 << " ints):" << std::endl;
    for (int i=0; i<=n; ++i)
        std::cin >> p[i];
    practices::matrix_chain_order(p, n, m, s);
    practices::print_optimal_parens(s, 1, n);
    std::cout << std::endl;
    return 0;
}
