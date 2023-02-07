#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a , int *b , int *c , int *d){
    int p[]={*a,*b,*c,*d};
    int i;
    int x;
    for(int j=0;j<4;j++){
        x = p[j];
        i = rand()%4;
        p[j]=p[i];
        p[i]=x;
    }
    *a = p[0];
    *b = p[1];
    *c = p[2];
    *d = p[3];
}