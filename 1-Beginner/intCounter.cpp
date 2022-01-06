//int counter
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

//