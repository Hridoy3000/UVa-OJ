//Md Najmul Huda Hridoy

#include<iostream>
#define i64 long long
using namespace std;

int main(){
	int p;
	cin>>p;
	for(int k=0;k<p;k++){
		i64 n,z;
		cin>>z;
		z++;
		while(z){
			

			n=z;
			i64 t=n,dsum=0,psum=0,digit=0,h=0,v=0,c=0;
			while(t!=0){
				digit=t%10;
				dsum=dsum+digit;
				t/=10;
			}
			while(n%2==0){
				psum=psum+2;
				n/=2;
				v++;
			}
			for(i64 j=3;j*j<=n;j+=2){
				while(n%j==0){
					if(j>9){
				t=j;
				while(t!=0){
				digit=t%10;
				
				psum=psum+digit;
				t/=10;
			}
			}
					else{
						psum+=j;
						
					}
					v++;
					n/=j;
				}
			}
				if(n>2&&v>0){
				t=n;
				while(t!=0){
				digit=t%10;
				v++;
				psum=psum+digit;
				t/=10;
			}
			}
			if(dsum==psum&&v>=2){
				cout<<z<<endl;
				break;
			}else{
				z++;
			}
		}
	}
	
	
}
