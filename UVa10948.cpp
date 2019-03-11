#include<bits/stdc++.h>
using namespace std;
bool prime[1000001];
long long unsigned int arr[1000001];
long long unsigned int arr2[1000000];
int main(){
	memset(prime,true,sizeof(prime));
	for(int i=2;i*i<=1000000;i++){
		if(prime[i]==true){
			for(int j=i*i;j<=1000000;j+=i){
				prime[j]=false;
			}
		}
	}
	arr[0]=2;
	long long unsigned int t=0;
	for(long long unsigned int i=3;i<=1000000;i+=2){
		if(prime[i]==true){
			arr[++t]=i;
		}
	}
	
	long long unsigned int k;
	while(cin>>k){
		if(k==0)break;
		int f=0;
		for(long long unsigned int i=0;i*i<=k;i++){
				if(k-arr[i]+arr[i]==k&&prime[k-arr[i]]==true){
					cout<<k<<":"<<endl<<arr[i]<<"+"<<k-arr[i]<<endl;
					f=1;
					break;
				}
		}
		if(f==0){
			cout<<k<<":"<<endl<<"NO WAY!"<<endl;
		}
	}
	
}
