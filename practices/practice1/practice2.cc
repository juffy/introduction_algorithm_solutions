#include <iostream>
#include "priority_queue.hh"
#define N 20
int main(int argc, char *argv[]){
    int *s = new int[N];
    int size = 0;

    std::cout << "Please input priority of these elements:" << std::endl;
    while (size < N && std::cin ){
        std::cin >> s[size];
        size += 1;
    }
    std::cin.clear();
    practices::PriorityQueue *pq = new practices::PriorityQueue(s, N, size-1);
    //practices::PriorityQueue q(s, N, size);
    std::cout << "test maximum: " << pq->maximum() << std::endl;

    std::cout << "test extract_max: " << pq->extract_max() << std::endl;
    std::cout << "after extract_max: " << std::endl;
    std::cout << "maximum is: " << pq->maximum() << std::endl;

    int i, key;
    std::cout << "Please input index i and new key you want to inscrease:" << std::endl;
    std::cin >> i >> key;
    std::cout << "test inscrease_key:" << std::endl;
    pq->inscrease_key(i, key);
    std::cout << "after inscrease_key: " << std::endl;
    std::cout << "maximum is: " << pq->maximum() << std::endl;

    std::cout << "Pleae input new key you want to insert: ";
    std::cin >> key;
    pq->insert(key);
    std::cout << "test after insert:" << std::endl;
    std::cout << "maximum is: " << pq->maximum() << std::endl;

}
