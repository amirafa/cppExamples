#include <iostream>
using namespace std;
int main(){
while(1){
    int c;//total cash(also carry)
    cout<<"Total Cash: ";
    cin>>c;
    int n;//number of cash types
    cout<<"# of cashType : ";
    cin>>n;
    int *a=new int[n];
    cout<<"Enter cashType in Order(asc): ";
    for(int i=0;i<n;i++) cin>>a[i];
    int cnt=n-1;
//Cashier___________________________
    while(c>0 & cnt>=0){
        if(a[cnt]<=c){
            c-=a[cnt];
            cout<<a[cnt];
        }
        else{
        if(cnt==0) cout<<" + ???";
        cnt--;
        }
    }
//_________________________________
    cin.get();
    cin.get();
    system("cls");
}
}