//serie de fibonacci

//1,1,2,3,5,8,13,21,34,

#include<stdio.h>
#include<conio.h>


int sumar(int,int,int);

int main(){
	int elem3;
	do{
		printf("ingresa el numero de elementos");
		scanf("%i",&elem3);
	}while(elem3<=0);
	printf("%i",sumar(0,1,elem3));
	return 0;
}

int sumar(int e1,int e2,int n){
	if(n==1){
	}else if(n==2){
		printf("%i ",e2);
		return 1;
	}else{
		printf("%i ",e2);
		return e2 + sumar(e2,e1+e2,n-1);
	}
}
