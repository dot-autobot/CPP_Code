#include<iostream>
#include<stdio.h>

struct st
{   
	int arr[2];
};

class def_constr
{
	public : 
		int a;
		int b;
		int c;
      	        struct st d;
 
	        def_constr()
		{
			printf("void args:def_constr \n");
		}

		def_constr(int i)
		{
			printf("one int args:def_constr \n");
		}
		
                def_constr(def_constr const & a)
		{
			printf("copy constructor\n");
		}



};



auto main() -> int
{


int  top_speed{};
int  top_speed_1{2};
int  gear(1);
def_constr o_o{};
def_constr o_oo = {1};




int &ref = gear;
int syt_ex = {1};



	printf("test one\n");





	return 0;
}
