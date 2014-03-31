#include <iostream>
#include <cstring>

namespace practices {
    enum Move{LEFT, TOP, LT};
    void lcseq_length(char *x, char *y, int **c, char **b)
    {
        int m = strlen(x+1);
        int n = strlen(y+1);
        int i, j;
        for (i=1; i<=m; ++i)
             c[i][0] = 0;
        for (j=0; j<=n; ++j)
            c[0][j] = 0;
        for (i=1; i<=m; ++i)
        {
            for (j=1; j<=n; ++j)
            {
                if (x[i] == y[j])
                {
                    c[i][j] = c[i-1][j-1] + 1;
                    b[i][j] = LT;
                }
                else if(c[i-1][j] >= c[i][j-1])
                {
                    c[i][j] = c[i-1][j];
                    b[i][j] = TOP;
                }
                else
                {
                    c[i][j] = c[i][j-1];
                    b[i][j] = LEFT;
                }
            }
        }

    }
    void print_lcseq(char **b, char *x, int i, int j)
    {
        if (i == 0 || j == 0)
            return;
        if (b[i][j] == LT)
        {
            print_lcseq(b, x, i-1, j-1);
            std::cout << " " << x[i] << " ";
        }
        else if(b[i][j] == TOP)
            print_lcseq(b, x, i-1, j);
        else
            print_lcseq(b, x, i, j-1);
    }

}
