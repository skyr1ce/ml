#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

double* parseX(bool x, long int maxpt) {
  double *x = malloc (sizeof(double) * maxpt);
  FILE *file; 
  if (x) {
    file = fopen ("data/x.txt", "r"); 
  } else {
    file = fopen("data/y.txt", "r"); 
  }

}
