#include <iostream>
#include <locale.h>
#include <cstring>

using namespace std;

void mainmenu();
void getcpf();
void getcnpj();
void getpis();
void gette();
void validacpf(int *n, int uf);
void validacnpj(int *n);
void validapis(int *n);
void validate(int *n);

int main(){
	setlocale(LC_ALL,"portuguese");
	system ("color f0");
	int opc;
	mainmenu();
	return 0;
}
//fun��o menu principal
void mainmenu(){
	int opc, vd=0;
	system ("cls");
	while (vd==0){
		cout<<"| Validar          | Digite\n| CPF              |   1\n| CNPJ             |   2";
		cout<<"\n| PIS              |   3\n| T�tulo Eleitoral |   4\nDigite sua op��o: ";
		cin>>opc;
		if(opc>=1&&opc<=4){
			vd++;
		}
		else{
			system ("cls");
			cout<<"N�mero inv�lido!\n\n";
		}
	}
	system ("cls");
	switch(opc){
		case 1: getcpf();
			break;
		case 2: getcnpj();
			break;
		case 3: getpis();
			break;
		case 4: gette();
			break;
	}
}
//fun��o respons�vel por receber o cpf
void getcpf(){
	char cpfch[20];
	int cpfint[12], vd=0, uf, opc;
	//recebe o n�mero do cpf
	cin.ignore();
	while(vd==0){
		cout<<"Digite o seu CPF de acordo com os exemplos: (123456789-10) ou (123456789 10)";
		cin.getline(cpfch,20);
		//valida��o da quantidade de caracteres e do tra�o ou espa�o antes do d�gito verificador
		if(strlen(cpfch)!=12||(cpfch[9]!=' '&&cpfch[9]!='-')){
			system("cls");
			cout<<"Formato de inser��o errado!\n";
		}
		else{
			vd++;//isso finaliza o la�o, caso os dados estejam "corretos"
		}
	}
	system ("cls");
	cout<<"Digite o n�mero correspondente � UF:\n";
	cout<<"1  DF, GO, MS e TO\n";
	cout<<"2  PA, AM, AC, AP, RO e RR\n";
	cout<<"3  CE, MA e PI\n";
	cout<<"4  PE, RN, PB e AL\n";
	cout<<"5  BA e SE\n";
	cout<<"6  MG\n";
	cout<<"7  RJ e ES\n";
	cout<<"8  SP\n";
	cout<<"9  PR e SC\n";
	cout<<"0  RS\nDigite a sua op��o: ";
	cin>>uf;
	for (int i=0;i<=11;i++){ /*converte de caracter para inteiro: na tabela ASCII os n�meros ficam entre 48 e 57, ou seja, � s� subtrair 
								48 das vari�veis do tipo caracter para se obter valores inteiros*/
		cpfint[i]=cpfch[i]-48;
	}
	validacpf(cpfint, uf);
	cout<<"\n\nDeseja realizar a opera��o novamente? | Digite 1.\nVoltar ao menu principal?             | Digite 2.";
	cout<<"\nSair?                                 | Qualquer outro valor.\nDigite sua op��o: ";
	cin>>opc; 
	system ("cls");
	if(opc==1){
		getcpf();
	}
	if(opc==2){
		mainmenu();
	}
}
//fun��o que valida o cpf
void validacpf(int *n, int uf){
	int soma=0, resto, primeira=0, segunda=0, chrep, cont;
	for (int i=0;i<=8;i++){//valida��o primeiro d�gito
		soma=soma+(n[i]*(10-i));
	}
	resto=((soma*10)%11);
	if(resto==10){
		resto=0;
	}
	if(n[10]==resto){
		primeira=1;
	}
	soma=0;//zera a soma
	n[9]=0;//anula o d�cimo vetor (tra�o ou espa�o)
	for (int i=0;i<=10;i++){
		if(i<=9){
			soma=soma+(n[i]*(11-i));
		}
		else{
			soma=soma+(n[i]*(11-i+1));/*como um dos vetores est� ocupado com o espa�o ou o tra�o, um n�mero � "pulado". 
										Isso aumentar� um numero para a multiplica��o do ultimo valor (essa me bateu bastante)*/
		}
	}
	resto=((soma*10)%11);
	if(resto==10){
		resto=0;
	}
	if(n[11]==resto){
		segunda=1;
	}
	chrep=n[0];
	for(int i=0;i<=11;i++){//daqui...
		if(i==9){
			i++;
		}
		if(chrep==n[i]){
			cont++;
		}//at� aqui, varifica se todos os n�meros s�o iguais 
	}
	system ("cls");
	if(primeira==1&&segunda==1&&cont<11&&uf==n[8]){
		cout<<"\nO CPF digitado � v�lido!";
	}
	else{
		cout<<"\nO CPF digitado � inv�lido!";
	}
}
//fun��o respons�vel por receber o cnpj.
void getcnpj(){
	char cnpjch[20];
	int cnpjint[16], vd=0, opc;
	//recebe o n�mero do cpf.
	cin.ignore();//resolve o bug "sem nome".
	while(vd==0){
		cout<<"Digite o seu CNPJ de acordo com os exemplos: (00000000/0000-00) ou (00000000 0000 00)";
		cin.getline(cnpjch,20);
		//valida��o da inser��o, caso esteja em desacordo com o formato estipulado o usu�rio � avisado.
		if(strlen(cnpjch)!=16||(cnpjch[8]!=' '&&cnpjch[8]!='/')||(cnpjch[13]!=' '&&cnpjch[13]!='-')){
			system("cls");
			cout<<"Formato de inser��o errado!\n";
		}
		else{
			vd++;
		}
	}
	/*converte de caracter para inteiro, na tabela ASCII, os n�meros est�o entre 48 e 57,
	ent�o � s� subtrair 48 da variav�l do tipo caracter que "guarda" um valor inteiro que
	se obter� o valor inteiro.*/
	for (int i=0;i<=15;i++){ 
		cnpjint[i]=cnpjch[i]-48;
	}
	validacnpj(cnpjint);
	//fun��o recusiva (menu).
	cout<<"\n\nDeseja realizar a opera��o novamente? Digite 1.\nVoltar ao menu principal? Digite 2.";
	cout<<"\nSair? Qualquer outro valor.\nDigite sua op��o: ";
	cin>>opc;
	system ("cls");
	if(opc==1){
		getcpf();
	}
	if(opc==2){
		mainmenu();
	}
}
//fun��o respons�vel por validar o cnpj.
void validacnpj(int *n){
	int soma=0, pesos1[13]={5,4,3,2,9,8,7,6,0,5,4,3,2}, pesos2[15]={6,5,4,3,2,9,8,7,0,6,5,4,3,0,2}, resto, primeira=0, segunda=0;
	for(int i=0;i<=12;i++){
		if(i==8){
			i++; //pula o �ndice da barra.
		}
		soma=soma+(n[i]*pesos1[i]);
	}
	resto=soma%11;
	if(resto<2){
		resto=0;
	}
	else{
		resto=11-resto;
	}
	if(resto==n[14]){
		primeira=1;
	}
	soma=0;
	for(int i=0;i<=15;i++){
		if(i==8||i==13){
			i++; //pula o �ndice dos tra�os e barras
		}
		soma=soma+(n[i]*pesos2[i]);
	}
	resto=soma%11;
	if(resto<2){
		resto=0;
	}
	else{
		resto=11-resto;
	}
	if(resto==n[15]){
		segunda=1;
	}
	if(primeira==1&&segunda==1){
		cout<<"\nO CNPJ digitado � v�lido!";
	}
	else{
		cout<<"\nO CNPJ digitado n�o � v�lido!";
	}
}
//fu��o respons�vel por receber o pis
void getpis(){
	char pisch[20];
	int pisint[16], vd=0, opc;
	cin.ignore();
	while(vd==0){
		cout<<"Digite o seu PIS de acordo com os exemplos: (0000000000-0) ou (0000000000 0)";
		cin.getline(pisch,20);
		if(strlen(pisch)!=12||(pisch[10]!=' '&&pisch[10]!='-')){
			system("cls");
			cout<<"Formato de inser��o errado!\n";
		}
		else{
			vd++;
		}
	}
	for (int i=0;i<=11;i++){ 
		pisint[i]=pisch[i]-48;
	}
	validapis(pisint);
	cout<<"\n\nDeseja realizar a opera��o novamente? Digite 1.\nVoltar ao menu principal? Digite 2.";
	cout<<"\nSair? Qualquer outro valor.\nDigite sua op��o: ";
	cin>>opc;
	system ("cls");
	if(opc==1){
		getpis();
	}
	if(opc==2){
		mainmenu();
	}
}
//fun��o respons�vel por validar o pis
void validapis(int *n){
	int soma=0, pesos1[10]={3, 2, 9, 8, 7, 6, 5, 4, 3, 2}, resto;
	for(int i=0;i<=9; i++){
		soma=soma+(n[i]*pesos1[i]);
	}
	resto=soma%11;
	resto=11-resto;
	if(resto==10){
		resto=0;
	}
	if(resto==n[11]){
		cout<<"\nO PIS digitado � v�lido!";
	}
	else{
		cout<<"\nO PIS digitado n�o � v�lido!";
	}
}
void gette(){
	char tech[20];
	int teint[14], vd=0, uf, opc;
	cin.ignore();
	while(vd==0){
		cout<<"Digite o n�mero do seu t�tulo de eleitor de acordo com o exemplo: (0000 0000 0000)";
		cin.getline(tech,20);
		if(strlen(tech)!=14||tech[4]!=' '||tech[9]!=' '){
			system("cls");
			cout<<"Formato de inser��o errado!\n";
		}
		else{
			vd++;
		}
	}
	for (int i=0;i<=13;i++){ 
		teint[i]=tech[i]-48;
	}
	validate(teint);
	cout<<"\n\nDeseja realizar a opera��o novamente? | Digite 1.\nVoltar ao menu principal?             | Digite 2.";
	cout<<"\nSair?                                 | Qualquer outro valor.\nDigite sua op��o: ";
	cin>>opc; 
	system ("cls");
	if(opc==1){
		gette();
	}
	if(opc==2){
		mainmenu();
	}
}
void validate(int *n){
	int soma=0, resto, primeira=0, segunda=0;
	for (int i=0;i<=13;i++){
		
	}
	for(int i=0;i<=8;i++){
		if(i==4){
			i++;
		}
		if(i>4){
			soma=soma+(n[i]*(i+3));
		}
		else{
			soma=soma+(n[i]*(i+2));
		}
	}
	resto=soma%11;
	if(resto==10){
		resto=0;
	}
	if(resto==n[12]){
		primeira=1;
	}
	soma=0;
	for (int i=9;i<=11;i++){
		soma=soma+(n[i]*(i-2));
	}
	resto=soma%11;
	if(resto==10){
		resto=0;
	}
	if(resto==n[13]){
		segunda=1;
	}
	if(primeira==1&&segunda==!1){
		cout<<"\nO n�mero do t�tulo de eleitor inserido � v�lido!";
	}
	else{
		cout<<"\nO n�mero do t�tulo de eleitor inserido n�o � v�lido!";
	}
}
