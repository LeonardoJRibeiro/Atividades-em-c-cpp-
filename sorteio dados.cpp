#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int dado();
void desenho(int n);

int main(){
	setlocale(LC_ALL,"portuguese");
	int sort,dado1=0,dado2=0,dado3=0,dado4=0,dado5=0,dado6=0;
	for(int i=1;i<=1000;i++){
		sort=dado();
		switch(sort){
			case 1:dado1++;
				break;
			case 2:dado2++;
				break;
			case 3:dado3++;
				break;
			case 4:dado4++;
				break;
			case 5:dado5++;
				break;
			case 6:dado6++;
				break;
		}
		if(i%10==0){
		system ("cls");
		cout<<"Número:     Vezes sorteado\n   1        "<<dado1<<"\n   2        "<<dado2<<"\n   3        "<<dado3<<"\n   4        "<<dado4<<"\n   5        "<<dado5<<"\n   6        "<<dado6;
		desenho(sort);
		}
	}
}
int dado(){
	srand((unsigned)time(0));
	int s=rand()%(6-1+1)+1;
	return s;
}
void desenho(int s){
	switch(s){
		case 1:cout<<"\n*************\n*           *\n*           *\n*     #     *\n*           *\n*           *\n*************\n";
				break;   
		case 2:cout<<"\n*************\n*           *\n*           *\n*  #     #  *\n*           *\n*           *\n*************\n";
				break;
		case 3:cout<<"\n*************\n*           *\n*  #        *\n*     #     *\n*        #  *\n*           *\n*************\n";
			break;
		case 4:cout<<"\n*************\n*           *\n*  #     #  *\n*           *\n*  #     #  *\n*           *\n*************\n";
			break;  
		case 5:cout<<"\n*************\n*           *\n*  #     #  *\n*     #     *\n*  #     #  *\n*           *\n*************\n";
			break;
		case 6:cout<<"\n*************\n*           *\n*  #     #  *\n*  #     #  *\n*  #     #  *\n*           *\n*************\n";
			break;
		} 
}
