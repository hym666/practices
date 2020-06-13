#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

int no(int b,int d)         //错误提示
{
    if(d<b)cout<<"It's a little small"<<endl;
    else cout<<"It's kind of big"<<endl;
    return 0;
}

int main(){
    cout<<"Guessing game"<<endl;
    srand(unsigned(time(0)));
    int a=rand()%300;
    cout<<endl<<endl;
    int f=0,i,in;
    for(i=0;i<30;i++){
        cin>>in;
        if(in==a){
            cout<<"That is it,you are very clever!!!"<<endl;
            f=1;
            break;
        }
        else no(a,in);
    }
    if(f==0)cout<<endl<<"You've lost the chance"<<endl;
    system("pause");
    return 0;
}