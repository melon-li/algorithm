#include "common.h"

void print_ftime(void (*f)()){
    struct timespec time_start={0, 0},time_end={0, 0};

    clock_gettime(CLOCK_REALTIME, &time_start);
    f();
    clock_gettime(CLOCK_REALTIME, &time_end);
    printf("Consuming Time:%llus %lluns\n", 
          time_end.tv_sec-time_start.tv_sec, 
          time_end.tv_nsec-time_start.tv_nsec);
    
}
