#include "module/xmodule_test_lib.h"
#include "stdio.h"

#define APP_VERSION "A.04"
void main(void)
{
    printf("Application A Version: %s\n", APP_VERSION);
    printf("Library version:       %s\n", LIBRARY_VERSION);
    return;
}