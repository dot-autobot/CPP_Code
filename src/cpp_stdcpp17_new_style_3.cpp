#include<iostream>
#include<stdio.h>


class def_constr
{
	public : 
		int a;
		int b;
		int c;
 
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

			//a.a=10;
			printf("copy constructor\n");
		}

                 void fun(){
			 a=10;
			printf("hello i am class funciton obj_addr : %d\n",this);
		 }

};

    def_constr obj{1};
def_constr  fun()
{
    printf("hello fun:::\n");
    obj.fun();
	return obj;

	// return def_constr{1};
}

auto main() -> int
{

       //  (&fun())->fun();



         def_constr obj =   fun();     
        // fun();     


      //  obj.fun();

	return 0;
}
