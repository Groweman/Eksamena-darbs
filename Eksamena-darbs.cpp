#include <iostream>
using namespace std;

int main(){
	
	int ans, score;
	
	score = 0;
	
	do{
	cout<< "Do-while ir cikls"<< endl;
	cout<< "1. Kas nostrada vismaz vienu reizi"<<endl;
	cout<< "2. ar pecnosacijumu"<<endl;
	cout<< "3. ar prieksnosacijumu"<<endl;
	cout<< "4. nav cikls"<<endl;
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
	
	cout<<score;

return 0;
	}
