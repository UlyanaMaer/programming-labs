void bubble_sort(int arr[], int n){//Первый комментарий
    for (int i=0; i<n-1;i++){//Второй
        for(int j=0; j<n-i-1;j++){//Третий
            if(arr[j]>arr[j+1]){//Четвёртый
                int temp=arr[j];//Пятый
                arr[j]=arr[j+1];//Шестой
                arr[j+1]=temp;//Седьмой
            }
        }
    }
}