#include <iostream>
#include <string>
using namespace std;

main() 
{
    int mb=0,ma=0,i=1,n=0,rd=0;
    string nt,na,nb;
    cout<<"Inserisci numero clienti: ";
    cin>>n;
    while(i<=n)
    {
        cout<<"Inserisci nome cliente "<<i<<": ";
        cin>>nt;
        cout<<"Inserisci reddito cliente "<<i<<": ";
        cin>>rd;
        if(rd>ma)
        {
            ma=rd;
            na=nt;
        }
        else
        {
            mb=rd;
            nb=nt;
        }
        i++;
    }
    cout<<"- - - - - - - - - - - - -"<<endl;
    cout<<"Reddito più alto: "<<ma<<" Appartenente a: "<<na<<endl;
    cout<<"Reddito più basso: "<<mb<<" Appartenente a: "<<nb<<endl;
}
