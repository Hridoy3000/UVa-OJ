//Md Najmul Huda Hridoy

#include<bits/stdc++.h>
#define i64 long long
using namespace std;
i64 F(i64 N,i64 P,i64 m)
{
	if(P==0) return 1;
	if(P%2==0) 
	{
		i64 ret=F(N,P/2,m);
		return ((ret%m)*(ret%m))%m;
	}
	else return ((N%m)*(F(N,P-1,m)%m))%m;
	
}

bool nonprime(int p){
	for(int i=2;i*i<=p;i++){
		if(p%i==0) return false;
	}
	return true;
}
int main(){
	
	i64 a,b;
	while(scanf("%lld%lld",&a,&b)==2){
		if(a+b==0)break;
		if(F(b,a,a)==b&&nonprime(a)==false){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}
	return 0;
}
