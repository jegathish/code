#include<stdio.h>

void swap(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

void insert(int *a, int i)
{
    int key = a[i];
    int j=i-1;
    while(j>=0 && a[j]>key){
        swap(&a[j], &a[j+1]);
        j--;
    }
    
}

void iSort(int *a, int num) {
	int i;
    for(i=1;i<num;i++) {
        insert(a, i);
    }
}

int main() {
    int num, i;
    scanf("%d",&num);
    int* a = (int *)malloc(num*(sizeof(int)));
    for(i=0; i<num;i++){
        scanf("%d",&a[i]);
    } 
    iSort(a,num);
    for(i=0;i<num;i++) {
        printf("%d ",a[i]);
    }
    return 0;
}