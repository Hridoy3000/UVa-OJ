//Md.Najmul Huda Hridoy

#include<bits/stdc++.h>
using namespace std;

int main(){
	int tt;
	string a,b;
	char e;
	cin>>tt;
	while(tt--){
		cin>>a>>e>>b;
		int sum=0, base=1,B,S;
		for(int i=a.size()-1;i>=0;i--){
			if(a[i]>=48&&a[i]<=58){
				sum+=(a[i]-48)*base;
				base=base*16;
			}
			else{
				sum+=(a[i]-55)*base;
				base=base*16;
			}
		}
		B=sum;
		sum=0;
		base=1;
		for(int i=b.size()-1;i>=0;i--){
			if(b[i]>=48&&b[i]<=58){
				sum+=(b[i]-48)*base;
				base=base*16;
			}
			else{
				sum+=(b[i]-55)*base;
				base=base*16;
			}
		}
		S=sum;
		
		if(e=='+'){
			cout<<bitset<13>(B).to_string()<<" + "<<bitset<13>(S).to_string()<<" = "<<B+S<<endl;
		}
		else{
			cout<<bitset<13>(B).to_string()<<" - "<<bitset<13>(S).to_string()<<" = "<<B-S<<endl;
		}
		
		
	}
	return 0;
}
