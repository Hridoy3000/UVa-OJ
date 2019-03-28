//Md Najmul Huda Hridoy

#include<bits/stdc++.h>
using namespace std;
vector<int>PL;
bool prime[10001];
int main(){
	memset(prime,true,sizeof(prime));
	for(int i=2;i*i<=10000;i++){
		if(prime[i]==true){
			for(int j=i*i;j<=10000;j+=i){
				prime[j]=false;
			}
		}
	}
	prime[0]=prime[1]=false;
	PL.push_back(2);
	for(int i=3;i<=10000;i+=2){
		if(prime[i]==true){
			PL.push_back(i);
		}
	}
	int a,b;
	scanf("%d",&a);
	for(int k=0;k<a;k++){
		scanf("%d",&b);
		for(int i=0;PL[i]<=b;i++){
			if(PL[i]*2>b){
				printf("%d\n",PL[i]);
				break;
			}
		}
	}
	return 0;
}
