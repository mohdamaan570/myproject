#include<stdio.h>
void main() {
  for(i=1; i<n; i++) {
      key = a[i];
      j=i-1;
      while(j>=0 && a1[j]>key) {
    a1[j+1] = a1[j];
    j=j-1;
      }
      a1[j+1] = key;
  }
}