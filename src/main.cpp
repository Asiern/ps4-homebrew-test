#include <iostream>
#include <orbis/libkernel.h>
#include <sstream>

#include "../include/log.h"

// Logging
std::stringstream debugLogStream;

int main(void)
{
    int sleepSeconds = 2;

    // No buffering
    setvbuf(stdout, NULL, _IONBF, 0);

    DEBUGLOG << "Hello world! Waiting " << sleepSeconds << " seconds!";
    sceKernelUsleep(2 * 1000000);
    DEBUGLOG << "Done. Infinitely looping...";

    for (;;)
    {
    }

    return 0;
}