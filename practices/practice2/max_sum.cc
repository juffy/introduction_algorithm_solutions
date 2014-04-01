#include <iostream>
#include <climits>
namespace practices {
    int max_sum(int *p, int n)
    {
        int max=p[0], i_max=p[0];
        int max_left=0, max_right=0;
        int i_left=0, i_right=0;

        for (int i=1; i<n; ++i)
        {
            if (i_max > 0)
            {
                i_max += p[i];
                i_right = i;
            }
            else
            {
                i_max = p[i];
                i_left = i_right = i;
            }
            if (max < i_max)
            {
                max = i_max;
                max_left = i_left;
                max_right = i_right;
            }
        }
        std::cout << "start: " << max_left << " end: " << max_right << std::endl;
        return max;
    }
}
