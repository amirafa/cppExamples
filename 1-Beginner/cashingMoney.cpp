#include<iostream>
using namespace std;
int main()
{
cout<<"2$ 5$ 10$"<<endl;
      int i2,i5,i10,sum=0,count=0;
       for(i2=0;i2<20;i2++)
         for(i5=0;i5<20;i5++)
           for(i10=0;i10<20;i10++)
                {
                 sum=i2*2 + i5*5 + i10*10;
                 if(sum==20)
                 {
                   count++;
                    cout<<i2<<"  " <<i5<<"  "<<i10<<"\n";
                 }
                }
        cout<<"number of cases "<<count;
        cin.get();
}
