#include <stdio.h>
#include <stdlib.h>
int main(){
    //Here memory is allocated at runtime
    float *ptr;
    //malloc
    ptr= (float*)malloc(5*sizeof(float)); 
    ptr[0]= 2.6;
    ptr[1]= 2.9;
    ptr[2]= 2.2;
    ptr[3]= 2.0;
    ptr[4]= 2.4;
    printf("malloc\n");
    for(int i=0; i<5; i++){
        printf("%f\n", ptr[i]);
    }
    //calloc
    ptr= (float*)calloc(5,sizeof(float));
    printf("calloc\n");
    for(int i=0; i<5; i++){
        printf("%f\n", ptr[i]);
    }
    //free
    free(ptr);
    ptr= (float*)calloc(2,sizeof(float));
    for(int i=0; i<2; i++){
        printf("%f\n", ptr[i]);
    }
    //reallocate
    //allocate a memory of 5 odd no. and increase to 6 even no.
    int *mem;
    mem= (int*)calloc(5, sizeof(int));
    for(int i=0; i<10; i++){
        if(i%2!=0){
            printf("%d", &mem[i]);
        }
        printf("%d", &mem[i]);
    }
    printf("Realloc\n");
    printf("Enter 8 no.\n");
    mem= realloc(mem, 8);
    for(int i=0; i<8; i++){
        scanf("%d", &mem[i]);
    }
    for(int i=0; i<8; i++){
        printf("no. is %d\n", mem[i]);
    }
    

}