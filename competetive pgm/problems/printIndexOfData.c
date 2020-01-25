#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int t=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[j]==t){
				printf("%d ",j);
				t++;
				break;
			}
		}
	}
}

//Input: 5  3 4 1 0 2
//Output:  3 2 4 0 1
