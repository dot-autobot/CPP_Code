#include<stdio.h>


class p
{
public :
	p(){
		printf("[p] default constructor\n");
	}


	virtual void  poly_fun()
	{
		printf("[p] hello world\n");
	}

};

class c :public p
{
public :
	c(){
		printf("[c] default constructor\n");
	}


	void poly_fun()
	{
		printf("[c] hello world\n");
	}
};
auto main()-> int 
{

c obj;
p *ptr=&obj;

ptr->poly_fun();









	return 0l;
}
