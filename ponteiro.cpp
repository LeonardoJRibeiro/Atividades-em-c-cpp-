#include <iostream>

#include <cstdlib>
using namespace std;
int main (){
int var1 = 100;
int *ptr1;
ptr1 = &var1;
cout << "O valor contido no endereco de memoria ";
cout << ptr1 <<" e "<< *ptr1 << endl;
system ("pause");
}
