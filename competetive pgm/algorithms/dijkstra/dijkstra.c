#include<stdio.h>
#include<limits.h>
int min(int *visited, int *distance, int n){
	int min_vertx = -1, i;
	for(i=0; i<n; i++){
		if( !visited[i] && (min_vertx == -1 || distance[i]<distance[min_vertx] ))
			min_vertx = i;
	}
	return min_vertx;
}

void dijkstra(int edges[][5], int n, int s_node){
	int visited[n];
	int distance[n];
	int i,j;
	for(i=0; i<n; i++){
		visited[i] = 0;
		distance[i] = INT_MAX;
	}
	distance[s_node]=0;
	for(i=0; i<n-1; i++){
		int min_vertx = min(visited, distance, n);
		visited[min_vertx]=1;
		for(j=0; j<n; j++){
			if( !visited[j] && edges[min_vertx][j]!=0){
				int dist = distance[min_vertx] + edges[min_vertx][j];
				if(dist < distance[j]){
					distance[j] = dist;
				}
			}
		}
	}
	for(i=0; i<n; i++){
		printf("%d %d\n",i,distance[i]);
	}
	
}
int main(){
	int n,e,i,j,s_node;
	printf("Enter no.of Nodes and Edges: \n");
	scanf("%d %d",&n,&e);
	printf("Enter the Source node:\n");
	scanf("%d",&s_node);
	int edges[n][n];
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			edges[i][j]=0;
		}
	}
	printf("Enter distances in this format(from to distance):\n");
	for(i=0; i<e; i++){
		int from,to,dist;
		scanf("%d %d %d",&from, &to, &dist);
		edges[from][to]=dist;
		edges[to][from]=dist;
	}
	dijkstra(edges, n, s_node);
	return 0;
}



//input:
//
//5
//7
//4
//
//0 1 4
//0 2 8
//1 2 2
//1 3 5
//2 3 5
//2 4 9
//3 4 4
