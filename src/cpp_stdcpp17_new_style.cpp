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
		




};

class test_class
{
	public : 
		int a;
		int b;
		int c;
		struct st d;







};

auto main() -> int
{


int  top_speed{};
int  top_speed_1{2};
int  gear(1);
test_class obj_one{};
test_class obj_two{2};
test_class obj_three{2,3};
test_class obj_four{2,3,4};
test_class obj_five{2,3,4,{{1,2}}};
def_constr o_o{};
def_constr o_oo = {1};
def_constr o_ooo = def_constr{2};
def_constr o_oooo = *&def_constr{3};


int syt_ex = {1};



	printf("test one\n");





	return 0;
}
