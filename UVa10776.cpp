//Md. Najmul Huda Hridoy

#include<bits/stdc++.h>
using namespace std;

void ncr(string arr,int index,int n,int r,int i,char *data){
	//data[r];
	if(index==r){
		for(int j=0;j<r;j++){
			cout<<data[j];
		}
		cout<<endl;
		return;
	}
	if(i>=n){
		return;
	}
	data[index]=arr[i];
	ncr(arr,index+1,n,r,i+1,data);
	while(arr[i]==arr[i+1]){
		i++;
	}
	ncr(arr,index,n,r,i+1,data);
	
}

int main(){
	string arr;
	
	int r,n;
	while(cin>>arr>>r){
	sort(arr.begin(),arr.end());
	char data[r];
	n=arr.size();
	ncr(arr,0,n,r,0,data);
	}
	
	return 0;
	
}
