//جدول ضرب
#include <iostream>

using namespace std;

int main(){
int ans;
for(int i=1;i<10;i++){
    for(int j=1;j<10;j++){
    ans=i*j;
    if(ans<10) cout<<" "<<ans<<"  ";
    else   cout<<ans<<"  ";
    }
cout<<endl<<endl;
}
}

//دنباله عددی
#include <iostream>
#include<math.h>

using namespace std;

int main(){
float sum;
for(int i=0;i<=5;i++){
    float a=1/pow(2,i);
    sum += a;
    cout<<sum<<" ";
}
}

//شمارش کلمه و حرف
#include <iostream>

using namespace std;
int main()
{
    char a;
    int cntChar=0,cntWord=0;
    while((a=cin.get()) != '\n'){
        if(a!=' ') cntChar++;
        else cntWord++;
    }
    cout<<cntChar<<" "<<cntWord+1;
}

//جدول اسکی
#include <iostream>

using namespace std;

int main()
{
    int a=41,cnt=0;
    while(a<=120){
        cout<<a<<"= "<<(char)a<<"   ";
        a++;
        cnt++;
        if(cnt%10==0) cout<<endl<<endl;
    }
}

//ضرب
#include <iostream>

using namespace std;

int main()
{
    int x,y;
    int cnt=1; //pow at first
    cin>>x>>y;
    int temp=x;
    while(cnt<y){
        x*=temp;
        cnt++;
    }
    if (y==0)cout<<'1';
    else cout<<x;
}

//زوج و فرد
#include <iostream>

using namespace std;

int main()
{
    int b;
    int cntEven=0,cntOdd=0;
    while(1){
        cin>>b;
        if(b==0)break;
        if(b%2 == 0) cntEven++;
        else cntOdd++;
    }
    cout<<cntEven<<" "<<cntOdd;

}

//عدد اول
for(int i=2;i<x;i++)
    {
    if(x%i==0) flag=1;
    else continue;
    }
	
//مساحت و محیط دایره کلاس
#include <iostream>

using namespace std;

class psCircle{
private:
    float r;
    float p;
    float s;
public:
    Set(){
    int a;
    cout<<"enter R= ";
    cin>>a;
    r=a;
    }
    void calP(){
    p=(2*r*3.14);
    }
    void cals(){
    s=(r*r*3.14);
    }
    void Print(){
    cout<<"P = "<<p<<endl<<"S = "<<s;
    }

};

int main()
{
    psCircle c;
    c.Set();
    c.calP();
    c.cals();
    c.Print();
}

//شمارش عدد
int main()
{
cout<<"enter 10 # to count"<<endl;
int a[10];
int b[10];
int cnt=0;
for(int i=0;i<10;i++)cin>>a[i];
for(int j=0;j<10;j++){
    for(int k=0;k<=j;k++){
        if (a[k]==a[j])cnt++;
    }
    b[j]=cnt;
    cnt=0;
}
cout<<"how many times did the # come?"<<endl;
for(int l=0;l<10;l++) cout<<b[l]<<" ";
}

//نمره درس دانش آموزان
#include <iostream>

using namespace std;

class course{
private:
    int a;
    float *p;
public:
    course(){
    cout<<"Enter Score #:"<<endl;
    cin>>a;
    p=new float[a-1];
    cout<<"Enter Scores"<<endl;
    for(int i=0;i<a;i++)cin>>p[i];
    }
    void Print(){
    cout<<"| Scores | " <<endl;
    for (int i=0;i<a;i++)cout<<p[i]<<" ";
    cout<<endl;
    }

    float avg(){
    cout<<"| Average| "<<endl;
    float sum=0.00;
    for(int i=0;i<a;i++)sum+=p[i];
    return sum/a;
    }

    float maxi(){
    float maxim=p[0];
    for(int i=0;i<a;i++){
        if(p[i]>maxim)maxim=p[i];
    }
    return maxim;
    }
};

int main()
{
course c1;
c1.Print();
cout<<c1.avg();
}

//ج حبابی
int main()
{
int a[5]={4,9,8,6,1};
for(int i=0;i<5-1;i++){
    for(int j=0;j<5-(i+1);j++){
        if(a[j+1]<a[j]){
            int t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    }
    for(int l=0;l<5;l++) cout<<a[l];
    cout<<endl;
}
for(int k=0;k<5;k++) cout<<a[k];
}

//