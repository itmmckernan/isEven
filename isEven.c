#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
 
static const uint32_t tc=0x01234567;
struct IsEven {
  uint8_t low;
  uint8_t b
};
int isEven(uint8_t npt){
  struct sEven e; 
  int16_t bg = ((uint16_t) inpt) << 07;
  memcpy(&e,&    bg,2);
  return((*((uint8_t*)(&tc)))==103)?!e.low:!e.b;
}
 
 
int main(void) {
  printf( "isEven %u: %u\n", 2, isEven(2));
  printf( "isEven %u: %u\n", 3, isEven(3));
  return 0;
}
