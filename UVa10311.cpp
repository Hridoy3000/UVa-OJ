
//Md Najmul Huda Hridoy


#include<bits/stdc++.h>
using namespace std;
const int MAX = 100000000;  
const int LMT =     10000;  
 
int _c[(MAX>>6)+1];
 
vector<int> primes;
 
#define IsComp(n)  (_c[n>>6]&(1<<((n>>1)&31)))
#define SetComp(n) _c[n>>6]|=(1<<((n>>1)&31))
 
void prime_sieve() {
    for (int i = 3; i <= LMT; i += 2)
        if (!IsComp(i))
            for (int j = i*i; j <= MAX; j += i+i)
                SetComp(j);
 
    primes.push_back(2);
    for (int i=3; i <= MAX; i += 2)
        if (!IsComp(i))
            primes.push_back(i);
}
 
bool is_prime(int n) {
    if (n < 2 || (n % 2 == 0)) return false;
    return ! IsComp(n);
}
int main(){
	prime_sieve();

	int c;
	while(scanf("%d",&c)==1){
		
		if(c%2!=0&&is_prime(c-2)==true&&c>4){
			printf("%d is the sum of 2 and %d.\n",c,c-2);
		}
		else if(c%2==0&&c>7){
				int m=0,t=0,d=0,e=0,a=c/2-1,l=0;
			 
			for(int j=a;j>=1;--j){
				
			if(j+c-j==c&&(is_prime(j)==true&&is_prime(c-j)==true)){
					d=j;
					e=c-j;
					printf("%d is the sum of %d and %d.\n",c,d,e);
					break;
			}
		}
		}
		else
		{
			printf("%d is not the sum of two primes!\n",c);
		}
		
		
		}
	return 0;			
		
	}


