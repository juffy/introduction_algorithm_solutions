#include <iostream>
#include <cstdlib>
#include <exception>
#include <climits>
#include "priority_queue.hh"

namespace practices {
    PriorityQueue::PriorityQueue(int *s, int n, int sn){
        A = s;
        length = n;
        size = sn;
        build_max_heap();
    }
    inline int PriorityQueue::left(int i){
        return 2 * i;
    }
    inline int PriorityQueue::right(int i){
        return 2 * i +1;
    }
    inline int PriorityQueue::parent(int i){
        return i / 2;
    }
    void PriorityQueue::max_heapify(int i){
        int l = left(i);
        int r = right(i);
        int largest = i;

        if (l <= size && A[l] > A[largest])
            largest = l;
        if (r <= size && A[r] > A[largest])
            largest = r;
        if (largest != i){
            int temp = A[i];
            A[i] = A[largest];
            A[largest] = temp;
            max_heapify(largest);
        }
    }
    void PriorityQueue::build_max_heap(){
        for (int i = size/2; i >= 0; --i){
            max_heapify(i);
        }
    }
    void PriorityQueue::heapsort(){
        build_max_heap();
        for (int i = size/2; i > 0; --i){
            int temp = A[0];
            A[0] = A[i];
            A[i] = temp;
            size -= 1;
            max_heapify(i);
        }
    }
    int PriorityQueue::maximum(){
        return A[0];
    }
    int PriorityQueue::extract_max(){
        if (size < 1){
            std::cout << "heap underflow." << std::endl;
            exit(1);
        }
        int max = A[0];

        A[0] = A[size-1];

        size -= 1;
        max_heapify(0);
        return max;
    }

    void PriorityQueue::inscrease_key(int i, int key){
        if (key < A[i]){
            std::cout << "new key is smaller than current key." << std::endl;
            exit(1);
        }
        if (i >= size){
            std::cout << "index i out of range." << std::endl;
            exit(1);
        }
        A[i] = key;

        while (i > 0 && A[parent(i)] < A[i]){
            int temp = A[parent(i)];
            A[parent(i)] = A[i];
            A[i] = temp;
            i = parent(i);
        }
    }

    void PriorityQueue::insert(int key){
        size += 1;
        if (size > length){
            std::cout << "heap overflow." << std::endl;
            exit(1);
        }
        A[size-1] = INT_MIN;

        inscrease_key(size-1, key);
    }
}
