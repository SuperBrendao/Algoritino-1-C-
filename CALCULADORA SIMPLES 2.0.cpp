#include <iostream>
using namespace std;

//Global
double num1 = 0, num2 = 0, num3 = 3;
string sin = " ";
bool nloop = false;

int main(){
	
	cout<<">> CALCULADORA SIMPLES\n ----------------------------- \n";	
	
	cout<<"[DIGITE] o primeiro real:\n c/ ";
	cin>>num1;
	cout<<" \n";
	
	cout<<"[DIGITE] o segundo real:\n c/ ";
	cin>>num2;
	cout<<" \n";

	while(nloop==false){//inicio do loop dos sinais
	
	cout<<"[DIGITE] o sinal operacional \n [+],[-],[*],[/] \nc/ ";
	cin>>sin;
	
		if(sin == "+" || sin == "-" ||  sin == "/" ||  sin == "*"){
	    	nloop=true;
	   		 
			if(sin=="+"){//soma
			num3=num1+num2;	
			} 
			if(sin=="-"){//subtração
			num3=num1-num2;	
			} 
			if(sin=="*"){//multiplicação
			num3=num1*num2;	
			} 
			if(sin=="/"){//divisao
				if(num2!=0){//impedir a divisao por zero
					num3=num1/num2;
			 	}else{
					nloop=false;	
					cout<<"não e possivel fazer uma divisão por 0 \n";
					system("pause");	
				}
			}
		
		}else{
		sin = " ";	
		cout<<"Por favor, digite apenas o que foi pedido\n";
		system("pause");	
		}
	
	}//fim do loop dos sinais

	//mostra resultados
	cout<<"SOLUCAO:\n";
	cout<<"["<<num3<<"] = ["<<num1<<"]"<<sin<<"["<<num2<<"]\n";
	system("pause");


	
	return 0;
}
