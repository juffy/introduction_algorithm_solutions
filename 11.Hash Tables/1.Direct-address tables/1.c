/*
 * worst case performance is O(m)
 */
#include<stdio.h>
struct element{
    int key;
    int data;
};
struct element find_max(struct element* T[], int m)
{
    int i;
    struct element *x, max;
    max.data = 0;
    for (i = 0; i < m; ++i)
    {
        x = T[i];
        if (x != NULL)
        {
            if (x->data > max.data)
            {
                max.key = i;
                max.data = x->data;
            }
        }
    }
    return max;
}
