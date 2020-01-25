#include <stdio.h>
int countZero(int n){
	int count=0;
	while(n){
		if(n%10==0)
			count++;
		n=n/10;
	}
	return count;
}
int getValue(char a[],int s,int e,int l){
    int v=0;
    while(s<=e){
        v=v*10+(a[s]-48);
        s++;
    }
    if(e>=l)
    return 0;
    return v;
}
int getMissingNum(char a[], int l){
	int i,j;
    for(i=0;i<(l+1)/2;i++,printf("\n")){
        int n=getValue(a,0,i,l);
        int vl=i;
        
        int n1=n-1,n2=n1-1;
        if(countZero==vl){
             vl=log10(n1)+1; 	
        }
        for(j=i+1;j<l;j+=vl+1){
        	printf("n1=%d n2=%d ",n1,n2);
        	int v=getValue(a,j,j+vl,l);	
        	printf("v=%d (%d %d)\n" ,v,vl,countZero(v)); 
        	
        	if(v==n1){
        		n1-=1;
        		n2-=1;
			} else if(v==n2 || getValue(a,j,j+vl-1,l)==n2){
        		return n1;
			} 
			else 
				break;
			if(n1<0 ||n2<0)
			break;
        		
            
            if(countZero(v)==vl){
            	 vl=log10(n1)+1;  
			}   	
        }
    }
    return 0;
}
int main() {
	char a[100];
	scanf("%s",a);
	int n=getMissingNum(a,strlen(a));
	printf("Missing no: %d ",n);

	return 0;
}
