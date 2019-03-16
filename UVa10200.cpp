// Md Najmul Huda Hridoy

#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
bool pr(int n)
    {
        if(n%2==0)return false;
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0)return false;
        }
        return true;
    }
    int arr[10001];
int main(){
	memset(arr,0,sizeof(arr));
	for(int i=0;i<=10000;i++){
		if(pr(i*i+i+41)==false){
			++arr[i];
		}
	}
	
	int a,b;
	while(scanf("%d%d",&a,&b)==2){
		double c=0,d=0;
		for(int i=a;i<=b;i++){
			++d;
			c+=arr[i];
		}
		printf("%.2lf\n",100-(c*100)/d+1e-6);
	}
	return 0;
}
