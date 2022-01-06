#include <iostream>
using namespace std;
void inSort(int *,int *,int *, int);
void sol(int *,int *,int *, int);

void sweap(int a[],int j){
    int tmp;
    tmp=a[j-1];
    a[j-1]=a[j];
    a[j]=tmp;
}

int maxim(int a,int b){
    if (a>b) return a;
    else return b;
}

void sol(int w[],int m[],int p[],int j){
    if (j==0) ;
    else if (w[j]+m[p[j]] > m[j-1]) {
        cout<<j<<" ";
        sol(w,m,p,p[j]);
    }
    else sol(w,m,p,(j-1));
}

void inSort(int a[],int b[],int c[],int n){
    for(int i=1;i<n;i++){
        int j=i;
        while(a[j]<a[j-1] && j!=0){
            int tmp;
            sweap(a,j);
            sweap(b,j);
            sweap(c,j);
            j--;
        }
    }
}

int main(){
while(1){
    int numj;
    cout<<"enter # of jobs: ";
    cin>>numj;
    int n=numj+1;
    int *s=new int[n];
    int *f=new int[n];
    int *w=new int[n];
//+++[]
    int *p=new int[n];
    int *m=new int[n];
//+++default+++++++++++++++++++++
    for(int i=0;i<n;i++) {
        s[i]=0;f[i]=0;w[i]=0;
        p[i]=0;m[i]=0; 
    }
//++++++INPUT+++++++++++++++++++++
for(int i=1;i<n;i++){
    cout<<"enter job_"<<i<<" start time: ";
    cin>>s[i];
    cout<<"enter job_"<<i<<" finish time: ";
    cin>>f[i];
    cout<<"enter job_"<<i<<" weight : ";
    cin>>w[i];
    }
//++++++SORT++++++++++++++++++++++
inSort(f,s,w,n);
//+++COMPUTE p[i]++++++++++++++++++++++++++++
for(int i=2;i<n;i++){
    for(int j=i-1;j>0;j--){
        if (s[i]>f[j]){
            p[i]=j;
            break;
        }
        else p[i]=0;
    }
}
//HHHHHHHHHHHHHHHHHHHHHHHHH  WIS  HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH
for(int i=1;i<n;i++){
    m[i]=maxim(w[i]+m[p[i]] , m[i-1]);
}
cout<<"\n";
for(int i=0;i<n;i++) cout<<m[i]<<" ";
cout<<"\n";
cout<<"Optimal Value    => "<<m[numj]<<endl;
//HHHHHHHHHHHHHHHHHHHHHHHHH  Sol  HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH
cout<<"Optimal Solution => ";
sol(w,m,p,numj);
//______________________________________________________________________
cin.get();
cin.get();
system("cls");
}
//+++++++++++++++++++END+++++++++++++++++++++++++++++++++++++++++++
return 0;
}