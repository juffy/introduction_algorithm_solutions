#include <iostream>
#include <climits>
#include "matrix_chain_order.hh"
namespace practices {
    void matrix_chain_order(int *p, int n, int **m, int **s)
    {
        int i, j, l,k;
        int q;
        for (i=1; i<=n; ++i)
            m[i][i] = 0;
        for (l=2; l<=n; ++l)
        {
            for (i=1; i<=n-l+1; ++i)
            {
                j = i + l -1;
                m[i][j] = INT_MAX;
                for (k=i; k<j; ++k)
                {
                    q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
                    if (q < m[i][j])
                    {
                        m[i][j] = q;
                        s[i][j] = k;
                    }
                }
            }
        }
    }
    void print_optimal_parens(int **s, int i, int j)
    {
        if (i == j)
            std::cout << " A" << i << " ";
        else
        {
            std::cout << "( ";
            print_optimal_parens(s, i, s[i][j]);
            print_optimal_parens(s, s[i][j]+1, j);
            std::cout << " )";

        }
    }
}
