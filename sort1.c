#include "bubbleSort.h"

void bubbleSort(int *a, int n) {
  int x,y;
  for(x=0;x<n;x++) {
    for(y=0;y<n-1;y++) {
      if(array[y]>array[y+1) {
        int temp = array[y+1];
        array[y+1]=array[y];
        array[y]=temp;
      }
    }
  }
}