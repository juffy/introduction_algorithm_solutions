#include <iostream>
namespace practices {
    template <typename T> void qsort(T * A, int p, int r, int (*compare)(const T &a, const T &b));
    template <typename T> int binary_search(const T * A, const T v, int p ,int r, int (*compare)(const T &a, const T &b));
    template <typename T> int partion(T * A, int p, int r, int (*compare)(const T &a, const T &b));
    #include "template_utils.cc"
}
