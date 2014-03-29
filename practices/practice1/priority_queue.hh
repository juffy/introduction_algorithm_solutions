namespace practices {
    class PriorityQueue {
        public :
            PriorityQueue(int *s, int n, int ns);
            void insert(int key);
            int maximum();
            int extract_max();
            void inscrease_key(int i, int k);
        private :
            int * A;
            int length;
            int size;
            void max_heapify(int i);
            void build_max_heap();
            void heapsort();
            inline int left(int i);
            inline int right(int i);
            inline int parent(int i);
    };
}
