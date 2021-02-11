#include "testlib.h"

int main(int argc, char** /*argv*/)
{
    int ret = 0;

    if (argc > 1) {
        // for testing address sanitizer
        volatile int tab[2];
        tab[2] = 1;
        ret = tab[2];
    }

    foo();
    return ret;
}