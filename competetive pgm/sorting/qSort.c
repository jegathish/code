
#include<stdio.h>

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int *a, int start, int end){
    int piv = a[start];
    int i = start+1, j;
    for(j=start+1; j<=end; j++){
        if(a[j]<piv){
           swap(&a[i], &a[j]);
           i+=1;
        }
    }
    swap(&a[start], &a[i-1]);
    return i-1;
    
}

void qSort(int *a, int start, int end){
    if(start<end){
        int piv=partition(a,start,end);
        qSort(a,start,piv-1);
        qSort(a,piv+1,end);
    }
}

int main(){
    int num;
    scanf("%d",&num);
    int* a = (int *)malloc(num*sizeof(int));
    int i=0;
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    qSort(a,0,num-1);
    for(i=0; i<num; i++){
        printf("%d ",a[i]);
    }
    return 0;
}