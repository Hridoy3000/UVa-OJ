#include<bits/stdc++.h>
using namespace std;
bool prime[1000001];
long long arr[1000000];
int main(){
	memset(prime,true,sizeof(prime));
	for(int i=2;i*i<=1000000;i++){
		if(prime[i]==true){
			for(int j=i*i;j<=1000000;j+=i){
				prime[j]=false;
			}
		}
	}
	prime[0]=false;
	prime[1]=false;
	int p;
	cin>>p;
	for(int i=0;i<p;i++){
		long long a,b,t=0,m=0,f=0,g=0,k=0,d=0;
		cin>>a>>b;
		memset(arr,0,sizeof(arr));
		for(long long i=a;i<=b;i++){
			if(prime[i]==true){
				if(m==0){
					t=i;
				}
				m++;
				++arr[i-t];
				if(f<i-t){
					f=i-t;
				}
				t=i;
			}
		}
		for(long long i=1;i<=f;i++){
			if(k<arr[i]){
				k=arr[i];
				g=i;
			}
		}
		for(long long i=g+1;i<=f;i++){
			if(k==arr[i]){
				d=1;break;
			}
		}
		if(m==2){
			cout<<"The jumping champion is "<<g<<endl;
		}
		else if(k==0||(k==1&&m>2)||d==1){
			cout<<"No jumping champion"<<endl;
		}
		else{
			cout<<"The jumping champion is "<<g<<endl;
		}
	}
}
