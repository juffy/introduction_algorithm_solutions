template <typename T> void qsort(T * A, int p, int r, int (*compare)(const T &a, const T &b)){
    if (p < r){
        int q = partion (A, p ,r, compare);
        qsort(A, p, q-1, compare);
        qsort(A, q+1, r, compare);
    }
}
template <typename T> int partion(T * A, int p, int r, int (*compare)(const T &a, const T &b))
{
    T x = A[r];
    int i = p-1;
    for (int j = p; j < r; ++j)
    {
        int ret = compare(A[j], x);
        if (ret == 0 || ret == -1){
            i += 1;
            T temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    T temp = A[i+1];
    A[i+1] = A[r];
    A[r] = temp;
    return i+1;
}

template <typename T> int binary_search(const T * A, const T v, int p ,int r, int (*compare)(const T &a, const T &b)){
    if (p > r){
        return -1;
    }
    if (p == r && compare(A[p], v) != 0){
        return -1;
    }
    int j = (p + r) / 2;
    std::cout << "hello" << std::endl;
    if (compare(A[j], v) == 0){
        return j;
    }
    else if (compare(A[j], v) == -1){
        return binary_search(A, v, p, j-1, compare);
    }
    else {
        return binary_search(A, v, j+1, r, compare);
    }
}
