#include <iostream>
#include "../utils.hh"
#define N 100
int compare (const int &a, const int &b);
int main(int argc, char * argv[])
{
    int *S = new int[N];
    std::cout << "Please input int set S(not more than 100 elements.):" << std::endl;
    int i = 0;
    while (i < N && std::cin){
        std::cin >> S[i];
        i += 1;
    }
    practices::qsort(S, 0, i-2, compare);
    std::cout << "after sorting:" << std::endl;
    for (int j = 0; j < i-1; ++j){
        std::cout << "index: " << j << " value: " << S[j] << std::endl;
    }
    return 0;
}
int compare (const int &a, const int &b)
{
    if (a < b)
        return -1;
    else if(a > b)
        return 1;
    else
        return 0;
}
