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
    int arr[]={1,2,34,3,7,454,6,89,34};
    int len_arr=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,len_arr-1);
    for(int i=0;i<len_arr;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}