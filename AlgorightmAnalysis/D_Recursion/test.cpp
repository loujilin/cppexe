#include<iostream>
using namespace std;
bool Ok(char s[],int begin,int end){
    for(int i=begin;i<end;i++){
        if (s[i]==s[end]){
            return false;
        }
    }
    return true;
}
void Perm(char list[],int k,int m){
    if(k==m){
        for(int i=0;i<=m;i++){
            cout<<list[i];
        }
        cout<<endl;
    }else{
        for(int i=k;i<=m;i++){
            if(Ok(list,k,i)){
                swap(list[k],list[i]);
                Perm(list,k+1,m);
                swap(list[k],list[i]);
            }

        }
    }
}
int main(){
    char s[1001];
    int n;
    cin>>n;
    cin>>s;
    Perm(s,0,n-1);
    return 0;
}