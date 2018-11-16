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

auto fun_test_ref(int &a) ->void 
{
  


}

auto main() -> int
{


int  top_speed{};
int  top_speed_1{2};
int  gear(1);
def_constr o_o{};
def_constr o_oo = {1};
def_constr o_ooo = def_constr{2};
def_constr o_oooo = *&def_constr{3};
def_constr o_ooooo = o_oooo;



int &ref = gear;
int syt_ex = {1};
	
	fun_test_ref(syt_ex);
	printf("test one\n");





	return 0;
}
