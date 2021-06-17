#include <iostream>
using namespace std;

int main(){
	
	int ans, score;
	
	score = 0;
	
	do{
	cout<< "A.Do-while ir cikls...?"<< endl;
	cout<< "1. Kas nostrada vismaz vienu reizi"<<endl;
	cout<< "2. Ar pecnosacijumu"<<endl;
	cout<< "3. Ar prieksnosacijumu"<<endl;
	cout<< "4. Nav cikls"<<endl;
	cout<<"Atbilde: ";
	cin>>ans;
	
	if((ans < 1) || (ans > 4)){
		cout<< "Izvelities vienu no iespejam"<<endl;
	cout<<"*****************************"<<endl;
	}else{
		if(ans==1 || ans==2){

	score +=1;
			cout<<"Paldies par atbildi!"<<endl;
			cout<<"*****************************"<<endl;
		}else{
			cout<<"Paldies par atbildi!" <<endl;
			cout<<"*****************************"<<endl;
		}
		
	}
	
	}while((ans < 1) || (ans > 4));
	
	
	
	do{
	cout<< "B.Vai do-while cikla aiz nosacijuma liek ';'?"<< endl;
	cout<< "1. Ne"<<endl;
	cout<< "2. Ja"<<endl;
	cout<< "3. Ir obligati jaliek"<<endl;
	cout<< "4. Ne jo While cikla to neliek"<<endl;
		cout<<"Atbilde: ";
	cin>>ans;
	
	if((ans < 1) || (ans > 4)){
		cout<< "Izvelities vienu no iespejam"<<endl;
	cout<<"*****************************"<<endl;
	}else{
		if(ans==2 || ans==3){

	score +=1;
			cout<<"Paldies par atbildi!"<<endl;
			cout<<"*****************************"<<endl;
		}else{
			cout<<"Paldies par atbildi!" <<endl;
			cout<<"*****************************"<<endl;
		}
		
	}
	
	}while((ans < 1) || (ans > 4));
	
	
	
	do{
	cout<< "C.Kurs no siem ir pareiza do-while sintakse?"<< endl;
	cout<< "1. dowhile(nosacijums)\n {\n pazinojums \n}"<<endl;
	cout<<"*****************************"<<endl;
	cout<< "2. do{ \n pazinojums \n}while(nosacijums);"<<endl;
	cout<<"*****************************"<<endl;
	cout<< "3. do\n{ \n pazinojums \n}while(nosacijums)"<<endl;
	cout<<"*****************************"<<endl;
	cout<< "4. do\n{ \n pazinojums \n}while(nosacijums);"<<endl;
	cout<<"*****************************"<<endl;
		cout<<"Atbilde: ";
	cin>>ans;
	
	if((ans < 1) || (ans > 4)){
		cout<< "Izvelities vienu no iespejam"<<endl;
	cout<<"*****************************"<<endl;
	}else{
		if(ans==2 || ans==4){

	score +=1;
			cout<<"Paldies par atbildi!"<<endl;
			cout<<"*****************************"<<endl;
		}else{
			cout<<"Paldies par atbildi!" <<endl;
			cout<<"*****************************"<<endl;
		}
		
	}
	
	}while((ans < 1) || (ans > 4));
	
	
do{
	cout<< "D.Kads bus si isa koda iznakums?"<<endl;
		cout<<"int x=0;\n{\nx++;\ncout<<x\n}while(x<5);"<< endl;
		cout<<"*****************************"<<endl;
	cout<< "1.01234 "<<endl;
	cout<< "2.12345 "<<endl;
	cout<< "3.1234 "<<endl;
	cout<< "4.01234 "<<endl;
		cout<<"Atbilde: ";
	cin>>ans;
	
	if((ans < 1) || (ans > 4)){
		cout<< "Izvelities vienu no iespejam"<<endl;
	cout<<"*****************************"<<endl;
	}else{
		if(ans==1 || ans==4){

	score +=1;
			cout<<"Paldies par atbildi!"<<endl;
			cout<<"*****************************"<<endl;
		}else{
			cout<<"Paldies par atbildi!" <<endl;
			cout<<"*****************************"<<endl;
		}
		
	}
	
	}while((ans < 1) || (ans > 4));
	
	
	do{
	cout<< "E.Do-while ciklam nosacijums raksta!?"<< endl;
	cout<< "1. Beigas"<<endl;
	cout<< "2. Sakuma"<<endl;
	cout<< "3. Pec while"<<endl;
	cout<< "4. Starp do un while"<<endl;
		cout<<"Atbilde: ";
	cin>>ans;
	
	if((ans < 1) || (ans > 4)){
		cout<< "Izvelities vienu no iespejam"<<endl;
	cout<<"*****************************"<<endl;
	}else{
		if(ans==1 || ans==3){

	score +=1;
			cout<<"Paldies par atbildi!"<<endl;
			cout<<"*****************************"<<endl;
		}else{
			cout<<"Paldies par atbildi!" <<endl;
			cout<<"*****************************"<<endl;
		}
		
	}
	
	}while((ans < 1) || (ans > 4));
	
	do{
	cout<< "F.Kurs no dotajiem nav cikls?"<< endl;
	cout<< "1. Do-while"<<endl;
	cout<< "2. If"<<endl;
	cout<< "3. For"<<endl;
	cout<< "4. Switch"<<endl;
		cout<<"Atbilde: ";
	cin>>ans;
	
	if((ans < 1) || (ans > 4)){
		cout<< "Izvelities vienu no iespejam"<<endl;
	cout<<"*****************************"<<endl;
	}else{
		if(ans==2 || ans==4){

	score +=1;
			cout<<"Paldies par atbildi!"<<endl;
			cout<<"*****************************"<<endl;
		}else{
			cout<<"Paldies par atbildi!" <<endl;
			cout<<"*****************************"<<endl;
		}
		
	}
	
	}while((ans < 1) || (ans > 4));
	
	
	do{
	cout<< "G.Cik reizes nostradas do-while cikls?"<< endl;
	cout<< "1. Divas"<<endl;
	cout<< "2. Nevienu"<<endl;
	cout<< "3. Vismaz vienu"<<endl;
	cout<< "4. Vienu ja pat nosacijums ir aplams "<<endl;
		cout<<"Atbilde: ";
	cin>>ans;
	
	if((ans < 1) || (ans > 4)){
		cout<< "Izvelities vienu no iespejam"<<endl;
	cout<<"*****************************"<<endl;
	}else{
		if(ans==3 || ans==4){

	score +=1;
			cout<<"Paldies par atbildi!"<<endl;
			cout<<"*****************************"<<endl;
		}else{
			cout<<"Paldies par atbildi!" <<endl;
			cout<<"*****************************"<<endl;
		}
		
	}
	
	}while((ans < 1) || (ans > 4));
	
	do{
	cout<< "H.Vai do-while cikla var but citi cikli?"<< endl;
	cout<< "1. Ja"<<endl;
	cout<< "2. Ir iespejams, bet nav viegli"<<endl;
	cout<< "3. Nav iespejams"<<endl;
	cout<< "4. Bus daudz errori "<<endl;
		cout<<"Atbilde: ";
	cin>>ans;
	
	if((ans < 1) || (ans > 4)){
		cout<< "Izvelities vienu no iespejam"<<endl;
	cout<<"*****************************"<<endl;
	}else{
		if(ans==1 || ans==2){

	score +=1;
			cout<<"Paldies par atbildi!"<<endl;
			cout<<"*****************************"<<endl;
		}else{
			cout<<"Paldies par atbildi!" <<endl;
			cout<<"*****************************"<<endl;
		}
		
	}
	
	}while((ans < 1) || (ans > 4));
	
	
	do{
	cout<< "I.Kurs no siem do-while cikliem nestradas?"<< endl;
	cout<< "1. do;{ \n pazinojums \n}while(nosacijums);"<<endl;
	cout<<"*****************************"<<endl;
	cout<< "2. do{ \n pazinojums \n}while(nosacijums);"<<endl;
	cout<<"*****************************"<<endl;
	cout<< "3. do{ \n pazinojums \n}while(nosacijums);"<<endl;
	cout<<"*****************************"<<endl;
	cout<< "4. do\n{ \n pazinojums \n}while;(nosacijums);"<<endl;
	cout<<"*****************************"<<endl;
		cout<<"Atbilde: ";
	cin>>ans;
	
	if((ans < 1) || (ans > 4)){
		cout<< "Izvelities vienu no iespejam"<<endl;
	cout<<"*****************************"<<endl;
	}else{
		if(ans==1 || ans==3){

	score +=1;
			cout<<"Paldies par atbildi!"<<endl;
			cout<<"*****************************"<<endl;
		}else{
			cout<<"Paldies par atbildi!" <<endl;
			cout<<"*****************************"<<endl;
		}
		
	}
	
	}while((ans < 1) || (ans > 4));
	


do{
	cout<< "J.Kads bus si isa koda iznakums?"<<endl;
		cout<<"int x=0;\n{\nx++;\ncout<<x\n}while(x<=7);"<< endl;
		cout<<"*****************************"<<endl;
	cout<< "1.0123456 "<<endl;
	cout<< "2.1234567 "<<endl;
	cout<< "3.01234567 "<<endl;
	cout<< "4.01234567 "<<endl;
		cout<<"Atbilde: ";
	cin>>ans;
	
	if((ans < 1) || (ans > 4)){
		cout<< "Izvelities vienu no iespejam"<<endl;
	cout<<"*****************************"<<endl;
	}else{
		if(ans==3 || ans==4){

	score +=1;
			cout<<"Paldies par atbildi!"<<endl;
			cout<<"*****************************"<<endl;
		}else{
			cout<<"Paldies par atbildi!" <<endl;
			cout<<"*****************************"<<endl;
		}
		
	}
	
	}while((ans < 1) || (ans > 4));
	
cout<<"Tu esi atbildejis pareizi uz "<<score<<" jautajumiem!";


return 0;
	}
