#include <stdio.h>
int main(){
	struct xueshe{
		char name[100];
		char xuehao[100];
		int sc[4];
		int sum;
	}xs[1000];
	int n,a,b,c;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){ 
	scanf("%s %s %d %d %d",xs[i].xuehao,xs[i].name,&a,&b,&c);
	//printf("%s %s %d %d %d",xs[i].xuehao,xs[i].xuehao,a,b,c);
	xs[i].sum=a+b+c;
	
}
	int max=-1,t;
	for(int i=1;i<=n;i++)
	if(xs[i].sum>max){
		max=xs[i].sum;
		t=i;
	}
	printf("%s %s %d",xs[t].name,xs[t].xuehao,max);
	return 0;
} 
