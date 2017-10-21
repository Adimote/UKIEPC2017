#include<cstdio>
#include<vector>
#include<algorithm>
#include<queue>
#include<stack>
#include<string>
#include<cmath>
#include<iostream>
using namespace std;
int main(){
    int r1a,r1b,r1c;
    int r1ad,r1bd,r1cd;

    int r2a,r2b,r2c;
    int r2ad,r2bd,r2cd;

    int r1dir, r2dir;
    scanf("%d %d %d %d %d %d",&r1a,&r1b,&r1c,&r1ad,&r1bd,&r1cd);
    scanf("%d %d %d %d %d %d",&r2a,&r2b,&r2c,&r2ad,&r2bd,&r2cd);
    printf("(%d %d %d) (%d %d %d)\n",r1a,r1b,r1c,r2a,r2b,r2c);
    while((r1a!=r1ad || r1b!=r1bd || r1c != r1cd) || (r2a!=r2ad || r2b!=r2bd || r2c != r2cd)){
        if(r1a!=r1ad){
            if(r1a > r1ad){
                r1a --;
                r1dir = -1;
            }
            else{
                r1a ++;
                r1dir = 1;
            }
            if(r1a==r2a && r1b==r2b && r1c==r2c){
                if(r1dir == 1){
                    r1a--;
                }else
                    r1a++;
                if(r1b > r1bd){
                        r1b --;
                        r1dir = -2;
                }else{
                    r1b ++;
                    r1dir = 2;
                }
            }
        }else if(r1b!=r1bd){
            if(r1b > r1bd){
                r1dir = -2;
                r1b --;
            }
            else{
                r1dir = 2;
                r1b ++;
            }
            if(r1a==r2a && r1b==r2b && r1c==r2c){
                if(r1dir == 2){
                    r1b--;
                }else
                    r1b++;
                if(r1c > r1cd){
                        r1c --;
                        r1dir = -3;
                }else{
                    r1c ++;
                    r1dir = 3;
                }
            }
        }else if(r1c!=r1cd){
            if(r1c > r1cd){
                r1dir = -3;
                r1c --;
            }
            else{
                r1c ++;
                r1dir = 3;
            }
            if(r1a==r2a && r1b==r2b && r1c==r2c){
                if(r1dir == 3){
                    r1c--;
                }else
                    r1c++;
                r1a++;
                r1dir=1;
            }
        }

        if(r2a!=r2ad){
            if(r2a > r2ad){
                r2dir = -1;
                r2a --;
            }
            else{
                r2dir = 1;
                r2a ++;
            }
        }else if(r2b!=r2bd){
            if(r2b > r2bd){
                r2dir = -2;
                r2b --;
            }
            else{
                r2dir = 2;
                r2b ++;
            }
        }else if(r2c!=r2cd){
            if(r2c > r2cd){
                r2dir = -3;
                r2c --;
            }
            else{
                r2dir = 3;
                r2c ++;
            }
        }

        if(r1a == r2a && r1b == r2b && r1c == r2c){
            if(abs(r2dir)==1){
                if(r2dir==-1){
                    r2a +=1;
                }
                else
                    r2a -=1;
                if(r2b > r2bd)
                        r2b --;
                    else
                        r2b++;
            }
            if(abs(r2dir)==2){
                if(r2dir==-2)
                    r2b +=1;
                else
                    r2b -=1;
                if(r2c > r2cd)
                        r2c --;
                    else
                        r2c++;
            }
            if(abs(r2dir)==3){
                if(r2dir==-3)
                    r2c +=1;
                else
                    r2c -=1;
                r2a++;
            }
        }
        printf("(%d %d %d) (%d %d %d)\n",r1a,r1b,r1c,r2a,r2b,r2c);

    }
    return 0;
    //get first robot at destination;
}
