#include <iostream> 
#include <iomanip> 
using namespace std; 

#define LIN 15
#define COL 40

int main(int argc, char** argv)
{        
       int n=0;
       int i,j,lin,col,seletor;
       int marcador;
       char poltronas[15][40];
           
       for(i=0; i<LIN; ++i)
        {
		for(j = 0; j<COL; ++j)
         {
         poltronas[i][j] = '.';
         }
        }
       
	 while(n!=1)
{	 	
	 cout << "Digite um seletor para acessar as seguintes opcoes: " << endl<< "0.	Finalizar" << endl<< "1.	Reservar poltrona"<< endl<< "2.	Mapa de ocupação"<< endl<< "3.	Faturamento"<< endl;
	 cin >>seletor;
	 
	 if(seletor==0)
	 {
	 	n=1;
	 	cout << "Fim da aplicação." <<endl;	
	 }
	 
	  else if(seletor==1) 
	 {
	 cout << endl<< "Informe a fileira da poltrona desejada: " <<endl;
	 cin >> lin;
	 cout << endl;
	 cout << "Informe a coluna da poltrona desejada: " <<endl;
	 cin >> col;
	 
	 if(poltronas[lin][col]=='.')
		 {
			cout << "Poltrona disponivel" <<endl;
			poltronas[lin][col]= '#';
			if(lin<6)
			{
			marcador=marcador+50;	
			}	
			else if(lin<11 && lin>5)
			{
			marcador=marcador+30;	
			}
			else if(lin<16 && lin>10)
			{
			marcador=marcador+15;	
			}
		 }
	 else
		 {
			cout << "Poltrona indisponivel" <<endl; 
		 }	 	
	 }
	 
	  else if(seletor==2)
	 {
	 cout << endl<< "Mapa de ocupação: " <<endl; 	 
	 	
	 for(i=0; i<LIN; ++i)
		{
			for(j = 0; j<COL; ++j)
			{
				cout << poltronas[i][j] << " ";
			}
			cout << endl;
		}	
	 }
	 
	  else if(seletor==3)
	 {
	 cout << endl<< "Faturamento: " <<endl;
	cout << marcador-50 <<endl;	 		
	 }
	 
	  else
	 {
		cout << "Informe seletor válido: " <<endl; 
	 }	 
}	
	return 0;
}