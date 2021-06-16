#include <iostream>
using namespace std;

int main(){
	
	int ans, score;
	
	score = 0;
	
	do{
	cout<< "Kurs no atbilzu variantiem nav pareizs\n Jautajums: 2+2=?"<< endl;
	cout<< "1. 4"<<endl;
	cout<< "2. 8/2"<<endl;
	cout<< "3. 4*1"<<endl;
	cout<< "4. 9/3"<<endl;
	cin>>ans;
	
	if((ans < 1) || (ans > 4)){
		cout<< "Izvelities vienu no iespejam"<<endl;
	cout<<"*****************************"<<endl;
	}else{
		if(ans==4){

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
	cout<< "Kurs no atbilzu variantiem nav pareizs\n Jautajums: 2+2=?"<< endl;
	cout<< "1. 4"<<endl;
	cout<< "2. 8/2"<<endl;
	cout<< "3. 4*1"<<endl;
	cout<< "4. 9/3"<<endl;
	cin>>ans;
	
	if((ans < 1) || (ans > 4)){
		cout<< "Izvelities vienu no iespejam"<<endl;
	cout<<"*****************************"<<endl;
	}else{
		if(ans==4){

	score +=1;
			cout<<"Paldies par atbildi!"<<endl;
			cout<<"*****************************"<<endl;
		}else{
			cout<<"Paldies par atbildi!" <<endl;
			cout<<"*****************************"<<endl;
		}
		
	}
	
	}while((ans < 1) || (ans > 4));

return 0;
	}
