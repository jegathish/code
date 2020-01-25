#include<stdio.h>

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

void sSort(int *a, int n){
    int min, i, j;
    for(i=0; i<n-1; i++){
        min=i;
        for(j=i+1; j<n; j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        swap(&a[i], &a[min]);
    }
}

int main(){
    int num;
    scanf("%d",&num);
    int *a = (int *)malloc(num*sizeof(int));
    int i;
    for(i=0; i<num; i++){
        scanf("%d",&a[i]);
    } 
    sSort(a,num);
    for(i=0; i<num; i++){
        printf("%d ", a[i]);
    }
    return 0;
}