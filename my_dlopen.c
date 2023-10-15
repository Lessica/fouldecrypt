#include <stdio.h>
#include <dlfcn.h>

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; i++) {
        void *handle = dlopen(argv[i], RTLD_LAZY | RTLD_GLOBAL);
        dlclose(handle);
    }
    return 0;
}
