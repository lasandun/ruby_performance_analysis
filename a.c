#include <time.h>
#include <stdio.h>
#include <malloc.h>
clock_t begin, end;
double time_spent;

int main() {
    long int n = 100000000;
    int *a = (int*)malloc(sizeof(int)*n);
    int i;

    begin = clock();
    for(i=0 ; i<n; ++i) a[i] = 1;
    end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\ntime : %f\n", time_spent);
    

    int sum = 0;
    
    begin = clock();
    for(i=0 ; i<n; ++i) sum += a[i];
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("time : %f\n", time_spent);
    return 0;
}
