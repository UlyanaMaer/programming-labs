#include<stdio.h>

void s_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main(void){
    int a[] = {4,2,0,};
    int n = sizeof(a) / sizeof(b);
    s_sort(a,n);
    return 0;
}
// комментарий 1
// комментарий 2
// комментарий 3

