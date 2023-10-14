/*write a program to print the size of all the data types with its modifiers supported
by C and its range*/
#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
	//size of data types
	 printf("size of char is=%i byte\n",sizeof(char));
	  printf("size of signed char(+) is=%i byte\n",sizeof(signed char));
	   printf("size of  unsigned char(-) is=%i byte\n\n\n",sizeof(unsigned char));
	
	 printf("size of int is=%i bytes\n",sizeof(int));			
	  printf("size of signed int is=%i bytes\n",sizeof(signed int));
	   printf("size of  unsigned int is=%i bytes\n\n\n",sizeof(unsigned int));
			
	 printf("size of  short int is=%i bytes\n",sizeof(short int));			
	  printf("size of signed short int is=%i bytes\n",sizeof(signed short int));
	printf("size of  unsigned  short int is=%i bytes\n\n\n",sizeof(unsigned short int));		
	
	printf("size of  long int is=%i bytes\n",sizeof(long int));			
	printf("size of signed long int is=%i bytes\n",sizeof(signed long int));
	printf("size of  unsigned long int is=%i bytes\n\n\n",sizeof(unsigned long int));		
	
	printf("size of  float  is=%i bytes\n",sizeof(float));			
	printf("size of double is=%i bytes\n",sizeof(double));
	printf("size of  long double is=%i bytes\n\n\n",sizeof(long double));		
	
	//Range the data types
	 printf("char min=%i\n",CHAR_MIN);
	printf("char max=%i\n",CHAR_MAX);
	printf(" signed char min=%i\n",SCHAR_MIN);
	printf("signed char max%i\n",SCHAR_MAX);
    printf("unsigned char max=%i\n",UCHAR_MAX);	
	
	 printf("int min=%i\n",INT_MIN);
	printf("int max%i\n",INT_MAX);
	printf("unsigned int max=%u\n",UINT_MAX);	
	
	 printf("short int main=%hi\n",SHRT_MIN);
	printf("short int main=%hi\n",SHRT_MAX);
	printf("unsigned short int max=%u\n\n\n",USHRT_MAX);
	
		
	printf("float min=%e\n",FLT_MIN);
	printf("float max=%e\n\n\n",FLT_MAX);
	
	printf("double min =%e\n",DBL_MIN);
	printf("double max =%e\n",DBL_MAX);
	
	
	 return 0;
}

