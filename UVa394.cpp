//MD Najmul Huda Hridoy

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>S1;
    vector<int>B1;
    vector<int>W1;
    vector<int>D1;
    vector<int>Li;
    vector<int>Lb;
    vector<int>M;
    vector<int>F;
    int a,b,B,W,D,c,d,sum=0,m,En,lo,t;
    string S,s;
    cin>>a>>b;

    for(int i=0;i<a;i++){
        cin>>S>>B>>W>>D;
        sum=sum+D;
        S1.push_back(S);
        B1.push_back(B);
        W1.push_back(W);
        D1.push_back(D);
        F.push_back(sum);
        for(int j=0;j<D;j++){
            cin>>c>>d;
            Li.push_back(d-c+1);
            Lb.push_back(c);
        }
    }
    for(int i=0;i<b;i++){
        cin>>s;
        for(int j=0;j<S1.size();j++){
            if(S1[j]==s){
            t=0;
                for(int k=F[j]-D1[j];k<F[j];k++){
                    cin>>m;
                    M.push_back(m);
                    En=m-Lb[k];
                    //cout<<En<<endl;
                    if(0<t){
                        lo=(lo*Li[k])+En;
                        t=1;
                        //cout<<lo<<endl;
                    }
                    if(t==0){
                        lo=En;
                        t=1;
                    }
                }
                //cout<<lo<<endl;
                cout<<s<<"[";
               for(int l=0;l<M.size();l++){
                    if(l==0){
                        cout<<M[l];
                    }
                    else{
                        cout<<", "<<M[l];
                    }
               }
               cout<<"] = "<<B1[j]+(W1[j]*lo)<<endl;
               M.clear();
               break;
            }
        }
    }

}

