#include<bits/stdc++.h>
#define i64 long long
using namespace std;
bool prime[20000000];
int main(){
	memset(prime,true,sizeof(prime));
	for(i64 i=2;i*i<=20000000;i++){
		if(prime[i]==true){
		
		for(i64 j=i*i;j<=20000000;j+=i){
			prime[j]=false;
		}
	}
	}
	i64 arr[100000];
		i64 f=0,t=0;
		for(i64 i=3,j=5;j<=20000000;i+=2,j+=2){
			if((prime[j]==true&&prime[i]==true)&&j-i==2){
				arr[++t]=i;
				if(t==100001){
					break;
				}
			}
		}
	i64 n;
	while(cin>>n){
		cout<<"("<<arr[n]<<", "<<arr[n]+2<<")"<<endl;
	}
}
