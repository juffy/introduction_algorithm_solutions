template <typename T> class Max_Heap{
    public :
        Max_Heap(int n){
            A = new T[n];
            length = n;
            size = 0;
        }
        void heapify(int i);
        void build_heap();
        void heapsort();
    private :
        T *A;
        int size;
        int length;

};

