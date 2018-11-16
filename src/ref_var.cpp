#include<stdio.h>
#include<iostream>
int& fun()
{
int a=100;
return a;
}


auto main()-> int 
{

int a=10;

int & refa=a;

printf("data : %d \n",refa);


int &ref_fun=fun();






	return 0;
}
