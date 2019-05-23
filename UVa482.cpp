//Md Najmul Huda Hridoy

#include<bits/stdc++.h>
using namespace std;
int a[1000];
char b[1000][1000];
int main(){
	int g,d,e;
	cin>>d;
	for(int i=0;i<d;i++){
		
		
	
		if(i>0) cout<<endl;
		e=0;
		while(true){
			cin>>g;
			a[g-1]=e++;
			if(getchar()=='\n')break;
		}
		for(int i=0;i<e;i++){
			cin>>b[i];
		}
		
		for(int i=0;i<e;i++){
			cout<<b[a[i]]<<endl;
		}
	}
	return 0;
}
