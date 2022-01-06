#include <iostream>

using namespace std;

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

void sol(int **table,int *w,int *v,int n,int t){
int i=n-1;
int j=t-1;
while(i!=0 && j!=0){
    if( table[i][j]==table[i-1][j] ) i=i-1;
    else {
        //_______SHOW_____
        cout<<"Obj_"<<i<<"(w="<<w[i]<<", v="<<v[i]<<" ) + ";
        //________________
        j=j-w[i];
        i=i-1;
    }
}
}

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
    // TABLE ++++++++++++++
    int **table=new int *[n];
    for(int i=0;i<n;i++) table[i]=new int[t];
    //DEFAULT +++++++++++++
    for(int i = 0; i < n; i++) {
		for (int j = 0; j < t; j++) {
			table[i][j] = 0;
		}
    }
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
    for (int i=1;i<n;i++){
        for(int j=0;j<t;j++){
            if(w[i] > j) table[i][j]=table[i-1][j];
            else table[i][j]=maxim(table[i-1][j] , v[i]+table[i-1][j-w[i]] );
        }
    }
//SOLUTION +++++++++++++++++++
cout<<endl;
sol(table,w,v,n,t);
cout<<endl;
//+++ SHOW +++++++++
cout<<endl;
for (int i = 0; i < n; i++) {
	for (int j = 0; j < t; j++) {
		cout << table[i][j] <<" ";
	}
	cout << endl;
}
cout<<"\nOptimal Value => "<<table[objn][tot];
//+++++++++++++++++++
cin.get();
cin.get();
return 0;
}