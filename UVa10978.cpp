//Md. Najmul Huda Hridoy


#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	while(cin>>a){
		if(a==0)break;
		string arr[a],s,foo;
	
		int k=0,size,t;
		
		for(int i=0;i<a;i++){
			arr[i]=48;
		}
		for(int i=0;i<a;i++){
			cin>>s>>foo;
			
			size=foo.length();
			t=0;
			while(1){
				if(arr[k] == "0"){
					t++;
				}
				if(t==size){
					arr[k]=s;
					
					k++;
				if(k>=a){
					k=0;
				}
					break;
				}
				k++;
				if(k>=a){
					
					k=0;
				}
			}
		}
		for(int i=0;i<a;i++){
			if(i==0){
				cout<<arr[i];
			}
			else{
				cout<<" "<<arr[i];
			}
		}
		cout<<endl;
	}
}
