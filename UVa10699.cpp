# include <stdio.h> 
# include <math.h> 
#include<iostream>
using namespace std;
void primeFactors(int n) 
{ 
int t=0,k=0,f=n;
	while (n%2 == 0) 
	{ 
		n = n/2; 
		if(2>t){
			t=2;
			++k;
		}
	} 

	for (int i = 3; i <= sqrt(n); i = i+2) 
	{ 
		while (n%i == 0) 
		{ 
			if(i>t){
			t=i;
			++k;
		}
			n = n/i; 
		} 
	} 

	if (n > 2){
		printf ("%d : %d\n",f, ++k);
	} else{
	printf ("%d : %d\n",f, k);
}
		
		
} 

int main() 
{ 
	int n;
	while(scanf("%d",&n)==1){
	if(n==0)break;
	primeFactors(n); 
}
	return 0; 
} 
