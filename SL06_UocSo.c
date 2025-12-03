#include <stdio.h>
//Nhap n tu ban phim; n nguyen duong
//In ra ds cac uoc so cua n va tong cua chung
int main(){
	int i,n,S=0;
	scanf("%d", &n);
	if (n<0) n=-n;
	for (i=1; i<=n; i++){
		if (n%i==0){
			printf("%d ", i);
			S+=i;
		}
	}
	printf("%d", S);
	S=0;
	printf("\n------\n");
	for (i=1; i<n; i++){
		if (n%i==0){
			printf("%d + ", i);
			S+=i;
		}
	}
	printf("%d = %d", n, S+n);	

	printf("\n------\n");	
	S=0;
	int count=0;
	for (i=1; i<=n; i++){
		if (n%i==0){
			printf("%d ", i);
			S+=i;
			count++;
		}
	}
	printf("\n%d %d", count, S);	
	return 0;
}
