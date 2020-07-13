#include "my_ntohl.h"
#include <stdint.h>

uint32_t  my_ntohl(uint32_t  n){
    int n_1 =(n & 0xff000000) >> 24;
    int n_2 =(n & 0x00ff0000) >> 8;
    int n_3 =(n & 0x0000ff00) << 8;
    int n_4 =(n & 0x000000ff) << 24;
    
    return n_1 | n_2 | n_3 | n_4; 
}