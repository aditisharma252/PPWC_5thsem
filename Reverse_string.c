#include<stdio.h>
#include<stdlib.h>
int main(){
    char *str ,*ptr1, *ptr2, temp;

    int n,i,k;
    printf("How many characters do you want to enter \n");
    scanf("%d",&n);
    getchar();
    str = (char*) malloc(n* sizeof(char));
    printf("Enter string \n");
    fgets(str,n+1,stdin);
    ptr1 = str;
    i=1;
    while(*ptr1 != '\0'){
        ptr1++;
        i++;
    }
    ptr1--;
    ptr2 = str;
    k=1;
    while(k <= i/2){
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1--;
        ptr2++;
        k++;
    }
    printf("Reversed string is \n");
    puts(str);
    free(str);
}