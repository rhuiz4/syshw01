
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int i;
int arr[10];
int *p = &arr[9];
int arr2[10];

int main() {
    srand( time(NULL) );
    for(i = 0; i < 9; i++){
        arr[i] = rand();
    }
    arr[9] = 0;
    
    printf("Original:\n");
    for(i = 0; i < 10; i++){
        printf("arr[%d]: %d\n",i,arr[i]);
    }

    
    for(i = 0; i < 10; i++){
        arr2[i] = *p;
        p--;
    }
    
    printf("Reverse:\n");
    for(i = 0; i < 10; i++){
        printf("arr2[%d]: %d\n",i,arr2[i]);
    }
    
    return 0;
}
