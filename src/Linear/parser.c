#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"parser.h"

double* parseX(bool x, long int maxpt) {
        FILE *file; 
        if (x) {
                file = fopen("./data/x.txt", "r"); 
        } else {
                file = fopen("./data/y.txt", "r"); 
        }
        double *X = malloc(sizeof(double) * (size_t)maxpt); 
        if (file == NULL) {
                perror("Error opening file"); 
                exit(1); 
        }
        long r = 0; 
        double v;
        while (r < maxpt && fscanf(file, " %lf", &v) == 1) {
                X[(size_t)r] = v; 
                r++; 
        }
        fclose(file);
        for (long i = 0; i < r; i++) {
                printf("%lf ", X[i]); 
        }

        printf("\n"); 
        return X; 
}
