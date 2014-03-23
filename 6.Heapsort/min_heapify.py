def MIN_HEAPIFY(A, i):
    smallest = i
    l = i.LEFT
    r = i.RIGHT
    if l <= A.heap_size and A[l] < A[smallest]:
        smallest = l
    if r <= A.heap_size and A[r] < A[smallest]:
        smallest = r
    if smallest != i:
        #exchange A[i], A[smallest]
        A[i], A[smallest] = A[smallest], A[i]
        MIN_HEAPIFY(A, smallest)

