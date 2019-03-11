#include<bits/stdc++.h>

#include<string>
using namespace std;
int arr[123];
bool prime[2001];
int main(){
	memset(prime,true,sizeof(prime));
	for(int i=2;i*i<=2000;i++){
		if(prime[i]==true){
			for(int j=i*i;j<=2000;j+=i){
				prime[j]=false;
			}
		}
	}
	prime[0]=false;
	prime[1]=false;
	
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		string a;
		int t=0;
		cin>>a;
		cout<<"Case "<<i<<": ";
	for(int i=1;i<123;i++){
		arr[i]=0;
	}
		for(int j=0;j<a.size();j++){
			++arr[a[j]];
		}
		for(int k=1;k<=122;k++){
			if(prime[arr[k]]==true){
			cout<<(char)k;
			t=1;
			}
		}
		if(t==0){
			cout<<"empty";
		}
		cout<<endl;
	}
}
