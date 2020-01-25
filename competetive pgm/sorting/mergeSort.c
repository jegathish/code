#include<stdio.h>

void merge(int *a, int s, int m, int e) {
    int t[s+e],k=0;
    int i=s,j=m+1;
    while(i<=m && j<=e) {
        if(a[i]<a[j]) {
            t[k++]=a[i];
            i++;
        } else {
            t[k++]=a[j];
            j++;
        }
    }
    while(i<=m) {
        t[k++]=a[i];
        i++;
    }
    while(j<=e) {
        t[k++]=a[j];
        j++;
    } 
    for(int i=s;i<=e;i++) {
        a[i]=t[i-s];
    }
}
int mSort(int *a,int s,int e) {
    if(s<e) {
        int m=(s+e)/2;
        mSort(a,s,m);
        mSort(a,m+1,e);
        merge(a,s,m,e);
    }
}
int main() {
    int a[]={10,5,11,6,2};
    mSort(a,0,5);
    for(int i=0;i<5;i++) {
        printf("%d ",a[i]);
    }
    return 0;
}