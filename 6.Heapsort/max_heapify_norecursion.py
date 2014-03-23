def MAX_HEAPIFY_NORECURSION(A, i):
    largest = i
    l = i.LEFT
    r = i.RIGHT

    while l <= A.heap_size or r <= A.heap_size:
        if l <= A.heap_size and A[l] > A[largest]:
            largest = l
        if r <= A.heap_size and A[r] > A[largest]:
            largest = r
        if largest == i:
            break
        A[i], A[largest] = A[largest], A[i]
        i = largest
        l = i.LEFT
        r = i.RIGHT

