#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <conio.h>

using namespace std;

class tic{
private:
    int board[3][3];
    int r,c;
    int dB[2][9];
    int edB[2][9];
    int d[2];
public:
    tic(){
        r=0;c=0;
        d[0]=0;d[1]=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++) board[i][j]=0;
        }
        for(int i=0;i<2;i++){
            for(int j=0;j<9;j++){
                    dB[i][j]=-1;
                    edB[i][j]=-1;
            }
        }
    }
    void setRC(int a,int b){r=a;c=b;}
    void print(){
        //
        char g;
        int flag=0;
        //
        char a=178,b='*',c=79;
        while(flag==0) {
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    if ((i==d[0] && j==d[1]) && board[i][j]==0) cout<<'@';
                    else if (board[i][j]==0) cout<<a;
                    else if (board[i][j]==1) cout<<b;
                    else if (board[i][j]==2) cout<<c;

                }
            cout<<"\n";
            }
        //debug__________________________________
        cout<<d[0]<<" "<<d[1]<<" "<<g<<"\n";
        for(int i=0;i<2;i++){
            for(int j=0;j<9;j++) {
                    cout<<dB[i][j];
            }
            cout<<"\n";
            }
            cout<<r<<" "<<c;
        //______________________________________
            if (_kbhit()){
                g=_getch();
                if(g==27) exit(0);
                if (g==13) {
                        setRC(d[0],d[1]);
                        flag=1;
                    }
                if (_kbhit()) {
                    g =_getch();
                    if (g==80 && d[0]!= 2) d[0]=(d[0]+1)%3; // down
                    if (g==72 && d[0]!= 0) d[0]=(d[0]-1)%3; // up
                    if (g==77 && d[1]!= 2) d[1]=(d[1]+1)%3; // right
                    if (g==75 && d[1]!= 0) d[1]=(d[1]-1)%3; //left
                }
            }
        system("cls");
        }
        game();
    }
    void game(){
    int flag=0;
    for(int i=0;i<9;i++){
        if (dB[0][i]==-1){
                dB[0][i]=r;
                dB[1][i]=c;
                board[r][c]=1;
                flag=1;
            }
        if (flag==1) break;
    }
    //enemy move
    int eR,eC;
    int eFlag=0,rFlag=1; //enemy flag , randomNeed flag
    while(rFlag==1){
    eR=rand() %3;
    eC=rand() %3;
    if (board[eR][eC]!=1 && board[eR][eC]!=2 ) {
        for(int i=0;i<9;i++){
            if (edB[0][i]==-1){
                    edB[0][i]=eR;
                    edB[1][i]=eC;
                    board[eR][eC]=2;
                    eFlag=1;
                }
            if (eFlag==1) break;
        }
        rFlag=0;
    }
    else rFlag=1;
    }
    //
    print();
    }

};

int main(){
    srand(time(NULL));
    tic t1;
    t1.print();
  //  t1.game();
    return 0;
}


