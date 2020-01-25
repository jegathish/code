#include<stdio.h>
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
void bSort(int *a, int n){
    
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j] > a[j +1]){
                swap(&a[j], &a[j+1]);
            }
        }
    }
}
int main(){
    int num;
    scanf("%d",&num);
    int *a = (int *)malloc(num*(sizeof(int)));
    int i;
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    bSort(a, num);
    for(i=0;i<num;i++){
        printf("%d ",a[i]);
    }
}
