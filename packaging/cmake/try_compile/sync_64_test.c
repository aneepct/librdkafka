#include <inttypes.h>

int64_t foo(int64_t i) {
        return __sync_add_and_fetch(&i, 1);
}

int main() {
}
