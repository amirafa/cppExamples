#include <iostream>

using namespace std;

int comOpt(int *,int *,int ,int );

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

void inSort(int a[],int b[],int n){
    for(int i=1;i<n;i++){
        int j=i;
        while(a[j]<a[j-1] && j!=0){
            int tmp;
            sweap(a,j);
            sweap(b,j);
            j--;
        }
    }
}

void sol(int *w,int *v,int n,int t){  //    while(i!=0 && j!=0){
    if (n==0) return ;
    else if( comOpt(w,v,n,t)==comOpt(w,v,n-1,t) ) sol(w,v,n-1,t);
    else {
    //_______SHOW_____
    cout<<"Obj_"<<n<<"(w="<<w[n]<<", v="<<v[n]<<" ) + ";
    //________________
    sol(w,v,n-1,t-w[n]);
    }
}

//++++++++++++++++++++++++
int comOpt(int *w,int *v,int n,int t){
    if (n==0) return 0;
    else if(w[n] > t) return comOpt(w,v,n-1,t);
    else return maxim( comOpt(w,v,n-1,t) , v[n]+comOpt(w,v,n-1,t-w[n]) );
}
//++++++++++++++++++++++++

int main(){
//++++++++++++++++
    int objn;
    cout<<"enter # of obj: ";
    cin>>objn;
    int n=objn+1;
    int *w=new int[n];
    int *v=new int[n];
    int tot;
    cout<<"enter total weight of knapSack: ";
    cin>>tot;
    int t=tot+1;
/*     // TABLE ++++++++++++++
    int **table=new int *[n];
    for(int i=0;i<n;i++) table[i]=new int[t];
    //DEFAULT +++++++++++++
    for(int i = 0; i < n; i++) {
		for (int j = 0; j < t; j++) {
			table[i][j] = 0;
		}
    } */
    for(int i = 0; i < n; i++) {
        w[i]=0;
        v[i]=0;
    }
    // INPUT ++++++++++++++
    for(int i = 1; i < n; i++) {
        cout<<"enter obj_"<<i<<" weight: ";
        cin>>w[i];
        cout<<"enter obj_"<<i<<" value: ";
        cin>>v[i];
    }
    //+++++++++++++++++++++
    inSort(w,v,n);
    //++++++++++++++++++++
    cout<<"Optimal Value => "<<comOpt(w,v,n-1,t-1);
    //SOLUTION +++++++++++++++++++
    cout<<endl;
    sol(w,v,n-1,t-1);
    cout<<endl;
    //+++++++++++++++++++
    cin.get();
    cin.get();
    return 0;
}