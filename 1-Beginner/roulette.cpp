#include <stdio.h>
#include <iostream>
#include <time.h> 
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main(){
srand(time(0));
int i=0;
float ran;
float sum=0;
float arr[4]={0.1,0.2,0.3,0.4}; //p(Xi)E(0,1) and Sigma-p(Xi)|i E (0,n) = 1
sum=arr[0];
ran = (rand() % 11)/10.0;
cout<<ran<<"\n";
while(sum<ran)
    {
    i++;
    sum=sum+arr[i];
    }
    cout<<arr[i]<<"\n\n";
    getch();
    return 0;
}