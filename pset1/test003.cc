#include "m61.hh"
#include <cstdio>
// Active allocation counts.

int main() {
    void* ptrs[10];
    for (int i = 0; i != 10; ++i) {
        ptrs[i] = malloc(i + 1);
    }
    for (int i = 0; i != 4; ++i) {
        free(ptrs[i]);
    }
    m61_print_statistics();
}

//! alloc count: active          6   total         10   fail        ???
//! alloc size:  active        ???   total        ???   fail        ???
