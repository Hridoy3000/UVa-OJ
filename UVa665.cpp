//Md Najmul Huda Hridoy

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e,f,g,w;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>b>>c;
        bool arr[b+1];
        vector<int>st;
        memset(arr,false,sizeof(arr));
        for(int j=0;j<c;j++){
            cin>>d;
            for(int k=0;k<d;k++){
                cin>>e;
                st.push_back(e);
                cin>>w;
                st.push_back(w);

            }
            char x;
            cin>>x;
            if(x=='='){
                for(int l=0;l<st.size();l++){
                    arr[st[l]]=true;
                }
            }
            st.clear();
        }
        f=0;
        g=0;
        for(int m=1;m<=b;m++){
            if(arr[m]==false){
            g=m;
                f++;
            }
        }
        if(f==1){
        if(i==0){
            cout<<g<<endl;
        }else{
            cout<<endl<<g<<endl;
        }

        }
        else{
        if(i==0){
            cout<<"0"<<endl;
        }else{
            cout<<endl<<"0"<<endl;
        }

        }
    }
    return 0;
}
