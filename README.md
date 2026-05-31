# Custom Memory Allocator in C++

A simplified memory allocator built from scratch in C++,
implementing core concepts behind malloc and free.

## What it does
- Manages a fixed 1024-byte memory pool
- Implements first-fit allocation strategy
- Tracks block headers storing size and free/used status
- Reuses freed blocks to prevent memory waste

## Concepts demonstrated
- Pointer arithmetic
- Manual memory management
- Heap simulation without using new/malloc
- First-fit search algorithm

## How to run
```bash
g++ main.cpp -o allocator
./allocator
```

## Why I built this
Memory allocators are foundational to embedded systems and
low latency software where dynamic allocation must be
controlled precisely.
