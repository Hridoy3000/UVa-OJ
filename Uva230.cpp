//Md Najmul Huda Hridoy

#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<string>a;
	vector<string>b;
	vector<string>c;
	vector<string>d;
	vector<string>e;
	vector<string>f;
	string s1,s2;
	int m=0;
	while(getline(cin,s1)&&s1!="END"){
		
		
		int t=s1.find("by",s1.find('"',1));
		a.push_back(s1.substr(1,s1.find('"',1)-1));
		b.push_back(s1.substr(t+3,s1.size()-(t+3)-1)+'"'+a[m]);
	
		m++;
	}

	while(getline(cin,s2)&&s2!="END"){
		if(s2[0]=='B'){
			for(int i=0;i<a.size();i++){
				if(s2.substr(8,s2.size()-8-1)==a[i]){
					c.push_back(a[i]);
					d.push_back(b[i]);
					a.erase(remove(a.begin(), a.end(), a[i]), a.end());
					b.erase(remove(b.begin(), b.end(), b[i]), b.end());
					break;
				}
			}
		}
		else if(s2[0]=='R'){
		
			for(int i=0;i<c.size();i++){
				if(s2.substr(8,s2.size()-8-1)==c[i]){
					e.push_back(c[i]);
					f.push_back(d[i]);
					c.erase(remove(c.begin(), c.end(), c[i]), c.end());
					d.erase(remove(d.begin(), d.end(), d[i]), d.end());
					break;
				}
			}
		}
		else if(s2[0]=='S'){
			sort(f.begin(),f.end());
			
			
			for(int x=0;x<f.size();x++){
				b.push_back(f[x]);
				
				sort(b.begin(),b.end());
				a.clear();
				
				for(int j=0;j<b.size();j++){
				a.push_back(b[j].substr(b[j].find('"',1)+1,b[j].size()-b[j].find('"',1)+1));
				}
			
			
				for(int j=0;j<b.size();j++){
					if(b[0]==f[x]){
					cout<<"Put "<<'"'+f[x].substr(f[x].find('"',1)+1,f[x].size()-f[x].find('"',1)+1)+'"'<<" first"<<endl;
					break;
				}
				if(b[j]==f[x]&&j>0){
					cout<<"Put "<<'"'+b[j].substr(b[j].find('"',1)+1,b[j].size()-b[j].find('"',1)+1)+'"'<<" after "<<'"'+b[j-1].substr(b[j-1].find('"',1)+1,b[j-1].size()-b[j-1].find('"',1)+1)+'"'<<endl;
					break;
				}
				}
				
				
			}
			f.clear();
			cout<<"END"<<endl;
		}
	}
	return 0;
}
