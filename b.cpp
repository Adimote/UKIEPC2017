#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<queue>
#include<stack>
#include<string>

#define pb push_back
#define fs first
#define sc second
using namespace std;
int M[3000][3000][3000];
int main(){
    int r1a,r1b,r1c;
    int r1ad,r1bd,r1cd;

    int r2a,r2b,r2c;
    int r2ad,r2bd,r2cd;

    cin>>r1a>>r1b>>r1c>>r1ad>>r1bd>>r1cd;
    cin>>r2a>>r2b>>r2c>>r2ad>>r2bd>>r2cd;
    cout<<"("<<r1a<<" "<<r1b<<" "<<r1c<<") ("<<r2a<<" "<<r2b<<" "<<r2c<<")"<<endl;
    while((r1a!=r1ad && r1b!=r1bd && r1c != r1cd) || (r2a!=r2ad && r2b!=r2bd && r2c != r2cd)){
        if(r1a!=r1ad){
            if(r1a > r1ad)
                r1a --;
            else
                r1a ++;
        }else if(r1b!=r1bd){
            if(r1b > r1bd)
                r1b --;
            else
                r1b ++;
        }else if(r1c!=r1cd){
            if(r1c > r1cd)
                r1c --;
            else
                r1c ++;
        }

        if(r2a!=r2ad){
            if(r2a > r2ad)
                r2a --;
            else
                r2a ++;
        }else if(r2b!=r2bd){
            if(r2b > r2bd)
                r2b --;
            else
                r2b ++;
        }else if(r2c!=r2cd){
            if(r2c > r2cd)
                r2c --;
            else
                r2c ++;
        }

    }
        cout<<"("<<r1a<<" "<<r1b<<" "<<r1c<<") ("<<r2a<<" "<<r2b<<" "<<r2c<<")"<<endl;
    return 0;
    //get first robot at destination;
}
