#include "bubbleSort.h"

void bubbleSort(int *a, int n) {
  int x,y;
  for(x=0;x<n;x++) {
    for(y=0;y<n-1;y++) {
      if(a[y]>a[y+1]) {
        int temp = a[y+1];
        a[y+1]=a[y];
        a[y]=temp;
      }
    }
  }
}
