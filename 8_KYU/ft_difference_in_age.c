#include <stdlib.h>

int *difference_in_ages(size_t a, const int ages[a]) {
  if(a == 0){
    return NULL;
  }
  else{
    int* ptr = (int*) malloc(a * sizeof(int));
    int bigger = ages[0];
    int smaller = ages[0];
    for(int i = 0; i < a-1; i++){
        if (ages[i+1] < ages[i] && ages[i+1] < smaller){
                smaller = ages[i+1];
        }
        else if (ages[i+1] > ages[i] && ages[i+1] > bigger){
            bigger = ages[i+1];
        }
        else{
            continue;
        }
    }
    ptr[0] = smaller;
    ptr[1] = bigger;
    ptr[2] = bigger - smaller;
    return ptr;
  } 
}
