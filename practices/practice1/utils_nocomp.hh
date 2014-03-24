namespace practices {
    template <typename T> void my_qsort(T * A, int p, int r);
    template <typename T> int binary_search(const T * A, const T v, int p ,int r);
    template <typename T> int my_partion(T * A, int p, int r);

    template <typename T> void my_qsort(T * A, int p, int r){
        if (p < r){
            int q = my_partion (A, p ,r);
            my_qsort(A, p, q-1);
            my_qsort(A, q+1, r);
        }
    }
    template <typename T> int my_partion(T * A, int p, int r)
    {
        T x = A[r];
        int i = p-1;
        for (int j = p; j < r; ++j)
        {
            if (A[j] < x || A[j] == x){
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

    template <typename T> int binary_search(const T * (&A), const T v, int p ,int r){
        if (p >= r && compare(A[p], v) != 0){
            return -1;
        }
        int j = (p + r) / 2;
        if (compare(A[j], v) == 0){
            return j;
        }
        else if (compare(A[j], v) == -1){
            return binary_search(A, v, p, j);
        }
        else {
            return binary_search(A, v, j, r);
        }
    }
}
