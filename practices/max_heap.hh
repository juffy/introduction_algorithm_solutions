namespace practices {
    template <typename T> class Max_Heap{
        public :
            Max_Heap();
            void heapify(int i);
            void build_heap();
            void heapsort();
        private :
            T *A;

    };
    #include "max_heap.cc"
}

