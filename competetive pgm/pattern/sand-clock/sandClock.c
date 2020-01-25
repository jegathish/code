//num = 4
//4 4 4 4 4 4 4
//  3 3 3 3 3
//    2 2 2
//      1
//    2 2 2
//  3 3 3 3 3 
//4 4 4 4 4 4 4

#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	int row, col, sp;
	for(row = num; row >= 1; row--){
		for(sp = row; sp < num; sp++){
			printf("  ");
		}
		for(col = 1; col <= 2*row-1; col++){
			printf("%d ", row);
		}
		printf("\n");
	}
	for(row = 2; row <= num; row++){
		for(sp = row; sp < num; sp++){
			printf("  ");
		}
		for(col = 1; col <= 2*row-1; col++){
			printf("%d ", row);
		}
		printf("\n");
	}
	
}


