#include <iostream>
using namespace std;

int main()
{
    int s,S,m,M,h,H,M1;
    
    s=0;
    m=0;
    h=0;
    cout<<"Masukan Angka:";
    cin>>s;
    S=s%60;
    m=s-S;
    M=m%3600;
    M1=M/60;
    H=m/3600;
    
    cout<<H<<":"<<M1<<":"<<S;

    return 0;
}
