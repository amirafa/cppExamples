#include <iostream>

using namespace std;

int merge(int a[],int beg,int end,int mid){
    int lp=beg; //left child pointer
    int rp=mid+1; //right child pointer
    int k=0; //tmp aaray index

    int tmp[end-beg+1]; 

    while (lp <=mid && rp <=end){
        if (a[lp]<a[rp]) {
            tmp[k]=a[lp];
            k++;
            lp++;
        }
        else {
            tmp[k]=a[rp];
            k++;
            rp++;
        }
    }

    while (lp <=mid ){
        tmp[k]=a[lp];
        k++;
        lp++;
    }
    while (rp <=end ){
        tmp[k]=a[rp];
        k++;
        rp++;
    }

    for(int i=beg;i<=end;i++){
        a[i]=tmp[i-beg];
    }
    
}

int mergeSort(int a[],int beg,int end){
    int mid;
    if (beg<end){
        mid=(beg+end)/2;
        mergeSort(a,beg,mid);
        mergeSort(a,mid+1,end);
        merge(a,beg,end,mid);
    }
}

int main(){
while(1){
    system("cls");
    int n;
    cout<<"enter array length => ";
    cin>>n;
    int *a=new int(n);
    for(int i=0;i<n;i++)  {
        switch (i) {
        case 0: cout<<"enter "<<i+1<<"st num => ";break;
        case 1: cout<<"enter "<<i+1<<"nd num => ";break;
        case 2: cout<<"enter "<<i+1<<"rd num => ";break;
        default: cout<<"enter "<<i+1<<"th num => ";break;
        }
        cin>>a[i];
    }
    mergeSort(a,0,n-1);
    cout<<"\n"<<"Sorted => ";
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cin.get();
    cin.get();
}
}