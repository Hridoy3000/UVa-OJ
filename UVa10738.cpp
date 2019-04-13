//Md Najmul Huda Hridoy

#include<bits/stdc++.h>
using namespace std;
bool prime[1000001];
int mu[1000001];
int mn[1000001];
vector<int>co;
int main(){
	memset(prime,true,sizeof(prime));
	for(int i=2;i*i<=1000000;i++){
		if(prime[i]==true){
			for(int j=i*i;j<=1000000;j+=i){
				prime[j]=false;
			}
		}
	}
	co.push_back(2);
	for(int i=3;i<=1000000;i+=2){
		if(prime[i]==true){
			co.push_back(i);
		}
	}
	mu[1]=mn[1]=1;
	for(int i=2;i<=1000000;i++){
		if(prime[i]==true){
			mu[i]=-1;
			mn[i]=mn[i-1]+mu[i];
		}
		else{
			int p=i,c=0,d,e=0,f=0;
			for(int j=0;co[j]*co[j]<=p;j++){
				d=0;
				while(p%co[j]==0){
					++d;
					++e;
					p/=co[j];
					if(d>1){
						f=1;
					break;	
					}
				}if(d>1)break;
			}
			if(f!=1&&2<p){
				++e;
			}
			if(d>1){
				mu[i]=0;
				mn[i]=mn[i-1]+mu[i];
			}
			else if(e%2==0){
				mu[i]=1;
				mn[i]=mn[i-1]+mu[i];
			}
			else if(e%2!=0){
				mu[i]=-1;
				mn[i]=mn[i-1]+mu[i];
			}
		}
	}
	int g;
	while(scanf("%d",&g)==1){
		if(g==0)break;
		printf("%8d%8d%8d\n",g,mu[g],mn[g]);
	}
}
