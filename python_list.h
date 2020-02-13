#ifndef PYTHON_LIST_H
#define PYTHON_LIST_H


#include<vector>
#include<iostream>
#include<cstdio>
using namespace std;

template <class pylist>

class python_list
{
    protected:
        pylist pyl;
    	pylist *ptr;
    public:
        python_list(){};
        python_list(pylist Pyl):pyl(Pyl){
        
      ptr = (pylist*) malloc(10 * sizeof(pylist));
        	if (ptr == NULL) { 

    		    printf("Memory not allocated.\n"); 
        		
  } else{
    	
    	printf("good \n");
    	
    			int a = 0;
        		//for(;a != 7;)
        	//	{
        		//printf("pyl %d \n",(*pyl));
        		//printf("ptr %d \n",(ptr));
      //  			*ptr = pyl;
        		//printf("pyl after %d \n",(*pyl));
      //  			*ptr++;
      //  			*pyl++;
     //   			a++;
       // 		}
    	
    	}

        	
        	}


        int len_pre(){
        int a = 0;
       //	pylist *Len = &pyl;
        for(;a!=10;)
        {
        	printf("pyl %x \n",(pyl));
        	(pyl)++;
        	a++;
        }
        
        printf("a %d \n",a);
        	
        
        return a;

        }
        void append(pylist pyl);
        int indexs(pylist pyl);
        pylist Slic(int first_index,int secend_index);
        void pi_list_remove(pylist pyl, int index = -1);



};




template <class pylist>
pylist python_list<pylist>::Slic(int first_index,int secend_index){


    pylist *n = &(this->pyl);
    *n = *(n+first_index);
    pylist temp;
    pylist *m = &temp;

    for(int i = first_index;first_index != secend_index;first_index++)
{

    printf("[hex] %x \n",n);
    printf("\t[first_index] %d \n",first_index);
    //*m = *n;
    *n++;


}

//return temp;
}

/*
pylist python_list<pylist>::append(pylist pyl){

int tem = 1;
}

pylist python_list<pylist>::indexs(pylist pyl){

return 0;
}


pylist python_list<pylist>::pi_list_remove(pylist pyl , int index ){

int temp = 1;

*/


#endif // PYTHON_LIST_H
