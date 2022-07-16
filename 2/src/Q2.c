#include <stdio.h>
#include <stdlib.h>

int is_prime(int n) {
    int i;
    for (i = 2; i*i <= n; i++) 
        if (n % i == 0) return 0;
    return 1;
}
int main()
{
  system("cls");
  printf("\nTEST Q2 (3 marks):\n");
  int n,sum,i;
  printf("Enter n = "); scanf("%d",&n); 
  //============================================================
  
  // Write your statements here
  //......
   for (i = 2; i <= n; i++) {
        if (is_prime(i) == 1) {
        	sum=sum+i;
		}
    }
   	
  
  
  
  
  
  //End your statements
  
  
  //====DO NOT ADD NEW OR CHANGE STATEMENTS AFTER THIS LINE====
  //==THE OUTPUT AFTER THIS LINE WILL BE USED TO MARK YOUR PROGRAM==
  printf("\nOUTPUT:\n");
  printf("%d",sum); 
  printf("\n");
  system ("pause");
  return(0);
}

