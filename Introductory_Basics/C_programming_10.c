#include <stdio.h>

void increment(int *ptr){

   (*ptr)++;
}

int main(){


int a =5;
printf ("before increment the val of a  is %d;and value of pointer is %p  \n",a, (void*)&a );
increment(&a);
printf ("aft increment the val of a  is %d;  and value of pointer is %p \n",a,(void*)&a  );


}

//learnings: we r doing (*ptr) coz ++ has precedence over dereferencing, and (void*) is used for casting different pointers into void pointer as %p is specifically for void pointers.
