#include<stdio.h>
void swap(int* a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void quickSort(int * arr,int low ,int heigh){
    if(low>=heigh)
        return ;
    int pivot=arr[heigh],i=low-1,j;
    for(j=low;j<heigh;j++){
        if (arr[j]<=pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[heigh]);
    quickSort(arr,low,i);
    quickSort(arr,i+2,heigh);
}

int main(){
    int arr[100];
    printf("请输入要排序数组：\n");
    int i=0,num;
    while(scanf("%d",&num)==1&&getchar()!='\n'){
        arr[i++]=num;
    }
    arr[i++] = num;
    printf("输入的整数序列为：\n");
    for (int j = 0; j < i; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");
    quickSort(arr,0,i-1);
    for(int k=0;k<i;k++){
        printf("%d ",arr[k]);
    }
    return 0;
}