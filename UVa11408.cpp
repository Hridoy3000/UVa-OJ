//Md Najmul Huda Hridoy

#include<bits/stdc++.h>
using namespace std;
bool prime[5000001];
int arr[5000001];
vector<int>ep;
int main(){
	memset(prime,true,sizeof(prime));
	memset(arr,0,sizeof(arr));
	for(int i=2;i*i<=5000000;i++){
		if(prime[i]==true){
			for(int j=i*i;j<=5000000;j+=i){
				prime[j]=false;
				
			}
		}
	}
	
	ep.push_back(2);
	for(int i=3;i<=5000000;i+=2){
		if(prime[i]==true){
			ep.push_back(i);
		}
	}
	for(int i=0;i<ep.size();i++){
		arr[ep[i]]=ep[i];
		for( int j=2*ep[i];j<=5000000;j+=ep[i]){
			arr[j]+=ep[i];
		}
	}
	
	
	prime[0]=prime[1]=false;
	arr[0]=arr[1]=1;
	int a,b,count,t,n;
	while(scanf("%d",&a)==1){
		if(a==0)break;
		scanf("%d",&b);
		count=0;
		for(int i=a;i<=b;i++){
			if(prime[arr[i]]==true){
			
				++count;
			//	if(i/arr[i]==true&&i/arr[i]>2236){
			//		++count;
			//	}
			}
		}
		printf("%d\n",count);
	}
	
	
	return 0;
}
