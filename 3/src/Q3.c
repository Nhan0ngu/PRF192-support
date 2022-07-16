#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void inputArray(int a[], int n);
int findBiggestPrimeNumber(int a[], int n);
int isPrime(int n);
int main(int argc, char *argv[]) {
	//=== Do not add new or change statements in the main function.===
	system("cls");
	printf("\nTEST Q3 (2 marks):\n");
	int n, a[MAX];
	char c;
	do {
		printf("How many elements do you want to enter into the integer array? [1..100] ");
		fflush(stdin);
		scanf("%d%c", &n, &c);
	} while(n<1 || n>MAX || c != '\n');

	inputArray(a,n);
	printf("Biggest number in array:\n");
	//=== The output will be used to mark your program.===============
	printf("\nOUTPUT:\n");
	printf("%d", findBiggestPrimeNumber(a,n));
	printf("\n");
	system ("pause");
	return 0;
}
//=== Do not add new or change statements in this function.===
void inputArray(int a[], int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
//----------------------------------------------
int isPrime(int n) {
	int result = 1;
	if(n<2) result = 0;
	else {
		int i;
		for(i=2; i<=n/2; i++) {
			if(n%i==0) {
				result = 0;
			}
		}
	}
	return result;
}
//===============================================
//----------------------------------------------
int findBiggestPrimeNumber(int a[], int n) {
	
	//Begin your codes here=====================
	n = a[0];
	for ( int i = 1; i < 5; i++) 
		if (a[i] > isPrime( n))
			n = a[i];
	return n;
	//TIM SO NGUYEN TO LON NHAT TRONG MANG 
	
	
	
	
	
	//End your codes============================
}

