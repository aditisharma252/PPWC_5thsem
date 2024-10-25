//max in an array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, i, *max , *ptr;
    printf("How many characters you want to enter: \n");
    scanf("%d" , &n);
    int *arr;
    arr = (int*)malloc(n * sizeof(int));
    printf("enter the elements: \n");
    for(i=0; i<n; i++){
        scanf("%d" ,arr+i);
    }
    max= arr;
    ptr= arr;
    for(i=0; i<n; i++){
        if(*max < *ptr){
            max = ptr;
        }
        ptr++;
    }
    printf("The maximum element is: %d\n", *max);

    free(arr);

}