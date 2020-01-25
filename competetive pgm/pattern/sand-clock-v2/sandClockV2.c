//num = 4
//4 4 4 4 4 4 4
//4 3 3 3 3 3 4
//4 3 2 2 2 3 4 
//4 3 2 1 2 3 4 
//4 3 2 2 2 3 4
//4 3 3 3 3 3 4
//4 4 4 4 4 4 4

#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	int row, col, sp;
	for(row = num; row >= 1; row--){
		for(sp = num; sp > row; sp--){
			printf("%d ", sp);
		}
		for(col = 1; col <= 2*row-1; col++){
			printf("%d ", row);
		}
		for(sp = row+1; sp <= num; sp++){
			printf("%d ", sp);
		}
		printf("\n");
	}
	for(row = 2; row <= num; row++){
		for(sp = num; sp > row; sp--){
			printf("%d ", sp);
		}
		for(col = 1; col <= 2*row-1; col++){
			printf("%d ", row);
		}
		for(sp = row+1; sp <= num; sp++){
			printf("%d ", sp);
		}
		printf("\n");
	}
	
}


