#include <iostream>
#include <string>
using namespace std;

main() 
{
	int np=0,ncf=0,pa=0,mq=0,af=0,i=1,ntf=0,sta=0,tft=0,tat=0,mat=0;
	string nf="";
	bool ftp=false;
	
	cout<<"Inserisci numero famiglie: ";
	cin>>ntf;
	
	while(i<=ntf)
	{
		//Input
		cout<<"Inserisci nome famiglia: ";
		cin>>nf;
		cout<<"Inserisci numero famigliari: ";
		cin>>ncf;
		if(ncf<=3)
		{
		    tft++;
		    ftp=true;
		}
		cout<<"Inserisci metri quadrati appartamento: ";
		cin>>mq;
		cout<<"Inserisci piano abitato: ";
		cin>>pa;
		//Calcoli
		af=((10*pa)+(5*mq)+50);
		if(ncf>3)
		{
			af+=7*ncf;
		}
		else
		{
			af+=5*ncf;
		}
		sta+=af;
		if(ftp=true)
		{
		    tat+=af;
		}
		//Output
		cout<<"- - - - - - - - - - - - - - - - -"<<endl;
		cout<<"Nome famiglia: "<<nf<<endl;
		cout<<"Affitto: "<<af<<endl;
		cout<<"- - - - - - - - - - - - - - - - -"<<endl;
		//Contatore
		i++;
	}
	mat=tat/tft;
	//fin
	cout<<"- - - - - - - - - - - - - - - - -"<<endl;
	cout<<"Somma totale affitti: "<<sta<<endl;
	cout<<"Media affitto famiglie con meno di 3 persone: "<<mat<<endl;
	cout<<"- - - - - - - - - - - - - - - - -"<<endl;
}
