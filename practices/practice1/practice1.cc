#include <iostream>
#include "../utils.hh"
#define N 100
int compare (const int &a, const int &b);
int main(int argc, char * argv[])
{
    int *S = new int[N];
    int x;
    std::cout << "Please input number x:" << std::endl;
    std::cin >> x;
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

    std::cout << "check result: " << std::endl;
    for (int j = 0; j < i-1; ++j){
        int ret = -1;
        if ((ret = practices::binary_search(S, x-S[j], j+1, i-2, compare)) != -1){
            std::cout << "index: " << j << " index: " << ret << std::endl;
            std::cout << S[j] << " + " << S[ret] << " = " << S[j] + S[ret] << std::endl;
            std::cout << "check equal: "  << bool((S[j] + S[ret]) == x) << std::endl;
            return 0;
        }
    }
    std::cout << "not found." << std::endl;
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
