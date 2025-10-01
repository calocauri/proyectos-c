#include<stdio.h>

int myNum = 15;
float myOtherNum = 15.55;

int *myPointer = &myNum;


typedef struct node
{
    int value;
    node *ptr;
} node;



int array0[] = {3,2,1};
int array1[] = {6,5,4};
int array2[] = {9,8,7};

void swap1(int a, int b){
    int t = array0[a];
    array0[a] = array0[b];
    array0[b] = t;
}

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

void bubble_sort(int arr[], int size)
{

    // printf("arr: %d\n", arr);
    // printf("&arr[0]: %d\n", &arr[0]);
    
    // printf("&arr[1]: %d\n", &arr[1]);
    // printf("arr: %d\n", ++arr);
    // printf("&arr[0]: %d\n", &arr[0]);

    int *ptr1 = arr;
    for(int i=0; i<size-1; i++){
        ptr1 = arr;
        // printf("ptr1: %p\n", ptr1);
        for(int j=0; j<size-1-i; j++)
        {
            // printf("ptr1: %p\n", ptr1);
            if(*ptr1>*(ptr1+1)) ///reemplazar esto
            {
                swap(ptr1, ptr1+1);  //reemplazar esto
            }
            ptr1++;
        }
    }
    int *ptr = arr;
    for(int i=0; i<size; i++)
    {
        printf("%d ", *ptr++);
    }
    printf("\n");
}

int main(){
    
    printf("val0: %d, val1: %d\n", array0[0], array0[1]);
    swap1(0,1);
    printf("val0: %d, val1: %d\n", array0[0], array0[1]);
    swap(&array0[0], &array0[1]);
    printf("val0: %d, val1: %d\n", array0[0], array0[1]);
    swap(&array1[0], &array1[1]);
    printf("val0: %d, val1: %d\n", array1[0], array1[1]);
    swap(&array2[0], &array2[1]);
    printf("val0: %d, val1: %d\n", array2[0], array2[1]);
    
    bubble_sort(array0,3);
    bubble_sort(array1,3);
    bubble_sort(array2,3);

    return 0;
}