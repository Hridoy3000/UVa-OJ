//Md Najmul Huda Hridoy

#include<bits/stdc++.h>
using namespace std;
int c[26];
int d[26];
int k[14];
int main(){
	int a;
	while(cin>>a){
		if(a==0)break;
		cin.ignore();
		memset(c,0,sizeof(c));
		memset(d,0,sizeof(d));
		memset(k,0,sizeof(k));
		int sum=0,t=0;
		
		for(int i=0;i<a;i++){
			
			
			string s;
			getline(cin,s);
			//cin.ignore();
			//cout<<s<<endl;
			int m=0,n=0,e=0,f=0;
			for(int j=0;j<25;j++){
				if(s[j]==32||s[j]=='\0'){
			break;
				}
				++m;
				
			}
			c[i]=m;
		
			m=0;
			for(int j=24;0<=j;j--){
				if(s[j]==32||s[j]=='\0'){
					break;
				}
				++m;
				
			}
			d[i]=m;
			k[i]=c[i]+d[i];
			if(c[i]==25||d[i]==25){
				t=25;
			}
			if(t<c[i]+d[i]&&t<25){
				t=c[i]+d[i];
				
			}
			
		}
		for(int i=0;i<a;i++){
			if(k[i]<25){
				sum+=t-k[i];
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
