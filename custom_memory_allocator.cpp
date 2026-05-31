#include <iostream>
using namespace std;

const int POOL_SIZE = 1024;
unsigned char memory_pool[POOL_SIZE];

// tracks where next free slot is
int offset = 0;

void *my_malloc(size_t size)
{
    // Step 1: check if enough memory remains
    if (offset + size > POOL_SIZE)
    {
        return nullptr;
    }

    // Step 2: store current offset position
    void *ptr = memory_pool + offset;

    // Step 3: move offset forward by size
    offset += size;

    // Step 4: return pointer to start of allocated block
    return ptr;
}

int main()
{
    // allocate memory for an int
    int *num = (int *)my_malloc(sizeof(int));

    if (num == nullptr)
    {
        cout << "Allocation failed" << endl;
        return 1;
    }

    *num = 42;

    cout << *num << endl;

    return 0;
}
