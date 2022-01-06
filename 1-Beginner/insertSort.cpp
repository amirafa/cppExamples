#include <iostream>

using namespace std;

void inSort(int a[],int n){
    for(int i=1;i<n;i++){
        int j=i;
        while(a[j]<a[j-1] && j!=0){
            int tmp;
            tmp=a[j-1];
            a[j-1]=a[j];
            a[j]=tmp;
            j--;
        }
    }
    for (int i=0;i<n;i++) cout<<a[i]<<" ";
    cin.get();
    cin.get();
}

int main(){
    int n;
    cout<<"how many numbers? => ";
    cin>>n;
    cout<<"enter numbers: => ";
    int *a=new int(n);
    for (int i=0;i<n;i++) cin>>a[i];
    inSort(a,n);
    return 0;
}