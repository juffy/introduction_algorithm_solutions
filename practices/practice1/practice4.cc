#include <iostream>
#include <cstdlib>
#include <climits>
#include "../utils.hh"
int compare (const int &a, const int &b);
int find_kth_largest(int *arraym, int *arrayn, int m, int n, int k);
int main(int argc, char * argv[])
{
    int *arraym, *arrayn;
    int k;
    int m, n;
    std::cout << "Please input size m and size n:" << std::endl;
    std::cin >> m >> n;
    if (m <= 0 || n <= 0)
    {
        std::cerr << "m, n must > 0" << std::endl;
        exit(1);
    }
    arraym = new int[m+1];
    arrayn = new int[n+1];
    std::cout << "Input " << m << " ints in arraym:" << std::endl;
    int i;
    for (i=1; i<=m; ++i)
        std::cin >> arraym[i];
    std::cout << "Input " << n << " ints in arrayn:" << std::endl;
    for (i=1; i<=n; ++i)
        std::cin >> arrayn[i];
    arraym[0] = INT_MAX;
    arrayn[0] = INT_MAX;
    practices::qsort(arraym, 1, m, compare);
    practices::qsort(arrayn, 1, n, compare);
    std::cout << "desc sorted arraym:" << std::endl;
    for (i=1; i<=m; ++i)
        std::cout << arraym[i] << std::endl;
    std::cout << "desc sorted arrayn:" << std::endl;
    for (i=1; i<=n; ++i)
        std::cout << arrayn[i] << std::endl;
    std::cout << "Input k:" << std::endl;
    std::cin >> k;
    if (k < 1 || k > m+n)
    {
        std::cout << "k must > 0 and < m + n." << std::endl;
        exit(1);
    }
    //input done

    std::cout << k << "th: " << find_kth_largest(arraym, arrayn, m, n, k) << std::endl;
    return 0;
}

int compare (const int &a, const int &b)
{
    if (a < b)
        return 1;
    else if(a > b)
        return -1;
    else
        return 0;
}
int find_kth_largest(int *arraym, int *arrayn, int m, int n, int k)
{
    int i, j;
    int mleft, mright, nleft, nright;
    mleft = nleft = 1;
    mright = m;
    nright = n;

    if (k == 1)
        return arraym[1]>arrayn[1]?arraym[1]:arrayn[1];
    if (k == (m+n))
        return arraym[m]<arrayn[n]?arraym[m]:arrayn[n];
    i = (k+1) / 2;
    j = (k+1) - i;
    while (i > m || j > n)
    {
        int step;
        if (i > m)
        {
            step = i / 2;
            i -= step;
            j += step;
        }
        else
        {
            step = j / 2;
            i += step;
            j -= step;
        }
    }
    int curm, curn;
    curm = arraym[i];
    curn = arrayn[j];
    while (true)
    {
        std::cout << "i: " << i << " j: " << j << std::endl;
        int step;
        if (curm > curn && curm < arrayn[j-1])
            return curm;
        if (curn > curm && curn < arraym[i-1])
            return curn;
        if (curm > curn)
        {
            if (i == m)
                return arrayn[j-1];
            mleft = i;
            step = (mright - mleft +1) / 2;
            i += step;
            nright = j;
            j -= step;
            if (j < 1)
            {
                step = 1 - j;
                j += step;
                i -= step;
            }
        }
        else
        {
            if (j == n)
                return arraym[i-1];
            nleft = j;
            step = (nright - nleft +1) / 2;
            mright = i;
            i -= step;
            j += step;
            if (i < 1)
            {
                step = 1 - i;
                i += step;
                j -= step;
            }
        }
        curm = arraym[i];
        curn = arrayn[j];
    }




}
