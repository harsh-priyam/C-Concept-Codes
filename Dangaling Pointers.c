


/*Deallocating o free variable memory */ /* Type 1= of Dangling Pointer */
int main() 
{ 
   int *ptrr=(int *)malloc(sizeof(int)); 
   int x=80; 
   ptrr=&x; 
   free(ptrr); 
   return 0; 
}


/* Via Function Call */ /* Type 2= of Dangling Pointer */
#include
int *myvalue(){ 
int a=5; 
return &a; 
}
int main() 
{ 
int *ptr=myvalue(); 
printf("%d", *ptr); 
return 0; 
}   