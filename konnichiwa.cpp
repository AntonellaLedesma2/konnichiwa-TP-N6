#include <bits/stdc++.h>
using namespace std;
string konnichiwa (string frase); 

int main (){
	string frase; 
	cout<<"ingrese un numbre: "<<endl;
	getline(cin,frase);
	
	cout<<"konnichiwa "<<konnichiwa (frase)<<"-san"<<endl;
	
	return 0;
}
string konnichiwa (string frase){
	string F;
	
	for(int i=0 ; i<frase.size() ; i++){
		if(frase[i]!='a' && frase[i]!='e' && frase[i]!='i' && frase[i]!='o' && frase[i]!='u' && frase[i]!=' '){
			F+=frase[i];
		if(i<frase.size()+1 && frase[i + 1]!='a' && frase[i + 1]!='e' && frase[i + 1]!='i' && frase[i + 1]!='o' && frase[i + 1]!='u'){
			F+='u';
		}
		}
		else{
			F+=frase[i];
		}
	}
	return F;
}