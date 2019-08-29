//Md. Najmul Huda Hridoy

#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[90];
    memset(arr,0,sizeof(arr));
    arr[48]=48;
    arr[49]=49;
    arr[65]=50;
    arr[66]=50;
    arr[67]=50;
    arr[50]=50;
    arr[68]=51;
    arr[69]=51;
    arr[70]=51;
    arr[51]=51;
    arr[71]=52;
    arr[72]=52;
    arr[73]=52;
    arr[52]=52;
    arr[74]=53;
    arr[75]=53;
    arr[76]=53;
    arr[53]=53;
    arr[77]=54;
    arr[78]=54;
    arr[79]=54;
    arr[54]=54;
    arr[80]=55;
    arr[83]=55;
    arr[82]=55;
    arr[55]=55;
    arr[84]=56;
    arr[85]=56;
    arr[86]=56;
    arr[56]=56;
    arr[87]=57;
    arr[88]=57;
    arr[89]=57;
    arr[57]=57;
    char a;
    string c,d,s,O,T;

    int n,b,p,z,wc,flag;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i>0){
            cout<<endl;
        }
        vector<string>S;
        cin>>b;
        for(int j=0;j<b;j++){

            d="";
            cin>>c;
            p=0;
            z=0;
            while(1){
               if(c[p]=='\0'){
                    break;
               }
               if((c[p]>=48&&c[p]<=57)||(c[p]>=65&&c[p]<=90)){
                    a=arr[c[p]];
                    d+=a;
                    z++;
                    if(z==3){
                    d+='-';
               }
               }
               ++p;

            }
          S.push_back(d);
        }

        sort(S.begin(),S.end());

        flag=0;
        wc=1;
        s=S[0];
        for(int k=1;k<S.size();k++){
            if(s!=S[k]){
                if(wc>1){
                cout<<s<<" "<<wc<<endl;
                flag=1;
                }
                wc=0;
                s=S[k];
            }
            wc++;
        }
        if(wc>1){
            cout<<s<<" "<<wc<<endl;
            flag=1;
        }

        if(flag==0){
            cout<<"No duplicates."<<endl;
        }


        S.clear();
    }
    return 0;
}
