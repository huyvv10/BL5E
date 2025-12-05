#include <stdio.h>
void inputArray(int a[], int n){
	int i;
	for (i=0; i<n; i++){
		printf("a[%d] = ", i); scanf("%d", &a[i]);
	}	
}
void display(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]); 		
}
int isPrime(int n){
	int i;
	if(n<2) return 0;
	for (i=2; i*i<=n; i++)
		if (n%i==0) return 0;
	return 1;	
}
void listPrimeInArray(int *a, int n){
	int i,count=0,S=0;
	for (i=n-1; i>=0; i--)
		if (isPrime(a[i])==1){
			printf("%d ", a[i]);
			count++;
			S+=a[i];
		}
	printf("\n%d %d", count,S);		
}
int main(){
	printf("Input:\n");
	int n, i;
	printf("Input number elements: "); scanf("%d", &n);
	int arr[n]; 	//Declare an array with n elements
	inputArray(arr,n);
	printf("\nOutput:\n");
	display(arr,n);
	printf("\n");
	listPrimeInArray(arr,n);	
	return 0;
}
