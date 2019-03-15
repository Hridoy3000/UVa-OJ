#include<iostream>
#include<sstream>
#include<cstring>
#include<cmath>
using namespace std;
int arr[32768];

int main(){
	string s;
	int total,a,b;

    while(1){
    	int sum=1,d=0,c=0;
        getline(cin,s);
        
        if(s[0] == '0') {
            break;
        }
        stringstream ss;
        ss.str(s);
        
        while(ss >> a >> b){
            sum*=pow(a,b);
        }
        sum--;
        c=sum;
    memset(arr,0,sizeof(arr));
	while (sum%2 == 0) 
	{ 
		++arr[2];
		sum = sum/2; 
	} 
	

	for (int i = 3; i <= sqrt(sum); i = i+2) 
	{ 
		while (sum%i == 0) 
		{ 
			++arr[i];
			sum = sum/i; 
		} 
	} 

	if (sum > 2) {
	++arr[sum];
	}
	
	int j=0;
	for(int i=c;i>=1;i--){
	  	if(arr[i]>0){
	  		
	  		if(j==0){
	  			cout<<i<<" "<<arr[i];
	  			j=1;
			  }
			  else{
			  	cout<<" "<<i<<" "<<arr[i];
			  }
		  }
	  }  
	  cout<<endl;
        
}
}

    
