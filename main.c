#include "subrepo_lib/subrepo_test_lib.h"
#include "stdio.h"

#define APP_VERSION "A.02"
void main(void)
{
    printf("Application A Version: %s\n", APP_VERSION);
    printf("Library version:       %s\n", LIBRARY_VERSION);
    return;
}