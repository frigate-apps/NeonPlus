#include <stdio.h>
#include "src/NeonFile.hpp"

// main::
int main (int argc, char* args[]) {
    if (argc <= 1) {
        return -1;
    }
	
    Neon::File file;
    file.Write("ro.txt", "hello");
    printf("%s",file.Read().data());
    return 0;
}
