#include<stdio.h>
int* insertion_sort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while(key < arr[j] && j >= 0) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;

    }
    
    return arr;

}
int main () {
    int arr[] = {5,2,4,6,1,3};
    printf("Disorderly arrangement: \n");
    printf("{");
    for(int i = 0; i < 6; i++) {
        printf("%d", arr[i]);     
        printf(",");     
    }
    printf("}");
    printf("\n");
    
    int *tidy = insertion_sort(arr, 6);
    printf("orderly arrangement: \n");
    printf("{");
    for(int i = 0; i < 6; i++) {
        printf("%d", tidy[i]);     
        printf(",");     
    }
    printf("}");
    printf("\n");
    

    return 0;
}