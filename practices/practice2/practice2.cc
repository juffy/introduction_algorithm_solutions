#include <iostream>
#include <cstdlib>
#include <cstring>
#include "lcs.hh"
int main(int argc, char *argv[])
{
    char *x, *y;
    int **c;
    char **b;
    int m, n;
    if (argc != 3)
    {
        std::cerr << argv[0] << " need 2 arguments." << std::endl;
        exit(1);
    }
    m = strlen(argv[1]);
    n = strlen(argv[2]);
    x = new char[m+2];
    y = new char[n+2];
    strcpy(x+1, argv[1]);
    strcpy(y+1, argv[2]);
    x[m+1] = '\0';
    y[n+1] = '\0';

    c = new int*[m+1];
    for (int i=0; i<=m; ++i)
        c[i] = new int[n+1];
    b = new char*[m+1];
    for (int i=0; i<=m; ++i)
        b[i] = new char[n+1];
    practices::lcseq_length(x, y, c, b);
    std::cout << "lcseq_length: " << c[m][n] << std::endl;;
    practices::print_lcseq(b, x, m, n);
    std::cout << std::endl;
    return 0;
}

