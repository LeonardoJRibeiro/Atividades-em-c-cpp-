#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int randon ();

int x = 0, rep1 = 0, rep2 = 0, rep3 = 0, rep4 = 0, rep5 = 0, rep6 = 0;

int main() {
	for(int i=1;i<=1000;i++){
		int res=randon();
		if (res==1){
			rep1++;
		}
		if (res==2){
			rep2++;
		}
		if (res==3){
			rep3++;
		}
		if (res==4){
			rep4++;
		}
		if (res==5){
			rep5++;
		}
		if (res==6){
			rep6++;
		}
	}
	cout<<"N1 "<<rep1<<"\nN2 "<<rep2<<"\nN3 "<<rep3<<"\nN4 "<<rep4<<"\nN5 "<<rep5<<"\nN6 "<<rep6;
} 

int randon (){
		x = rand() % 6 + 1;
		return x;
}

