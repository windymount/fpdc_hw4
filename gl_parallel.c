#include <stdio.h>
#include <stdlib.h>
#include <cuda.h>
#include <sys/time.h>
#include "configs.h"


double get_walltime(){
  struct timeval tp;
  gettimeofday(&tp, NULL);
  return (double)(tp.tv_sec + tp.tv_usec*1e-6); 
}

__global__ void refresh_frame(int* world){
    x = blockdimDim.y * blockIdx.y + threadIdx.y;
    y = blockdimDim.x * blockIdx.x + threadIdx.x;
    int neighbors = 0;
    for (y0 = y - 1; y0 <= y + 1; y0++) {
        for (x0 = x - 1; x0 <= x + 1; x0++) {
          ineighbor = index(y0, L2) * L1 + index(x0, L1);
          if (world[ineighbor] != 0) neighbors++;
        }
    }
    if world[index(x, y)]: neighbors--;
    if (neighbors == 3 || (neighbors == 2 && (world[i] != 0))) {
        result[i] = 1;
    }else {
        result[i] = 0;
    }
}
int main(){
    // initialize data
    world  = malloc(LS * sizeof(int));
    result = malloc(LS * sizeof(int));
    srand(SEED);
    population0 = 0;
    for (i = 0; i < LS; i++) {
    world[i] = rand()%2;
    if (world[i]==1) population0++;
    }
}

