//Md. Najmul Huda Hridoy

#include<bits/stdc++.h>
using namespace std;

double ncr(int n){
	if(n==0){
		return 1;
	}
	
	return n*ncr(n-1);
}

int main(){
	double n,r;
	while(1){
		cin>>n>>r;
		if(n+r==0) break;
		printf("%.0lf things taken %.0lf at a time is %.0lf exactly.\n",n,r,ncr(n)/(ncr(n-r)*ncr(r)));

	}
	return 0;
}
