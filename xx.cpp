#include<stdio.h>
#include<ctype.h>


int length(char array[]);
int strongpwd(char array[]);

int main()
{

	char password[]="123456";
  char password2[]="qwerty";
  char password3[]="qwerty123";
	char password4[]="14July_2020!";

  printf("\n1. Length of password:\t %s is %d", password, length(password));
  printf("\n2. Length of password2:\t %s is %d", password2, length(password2));
  printf("\n3. Length of password3:\t %s is %d", password3, length(password3));
  printf("\n4. Length of password4:\t %s is %d", password4, length(password4));


  printf("\n1. Strength of password:\t %s is %d", password, strongpwd(password));
  printf("\n2. Strength of password2:\t %s is %d", password2, strongpwd(password2));
  printf("\n3. Strength of password3:\t %s is %d", password3, strongpwd(password3));
  printf("\n4. Strength of password4:\t %s is %d", password4, strongpwd(password4));



	printf("\n");
	return 0;
}

int length(char array[])
{
	int length=0;
	int count=0;

	while(array[count] != '\0')
	{
		length++;
		count++;
	}

	return length;
}


int strongpwd(char array[])
{ 
  int strong = 0;
    
    int hasLower = 0, hasUpper = 0; 
    int hasDigit = 0, specialChar = 0; 
    int size = length(array);
    // CHECKING FOR ALPHABET 
    for(int i = 0; i<length(array); i++)
	{
      if (array[i] >= 65 && array[i] <= 90) 
    	hasUpper = 1;
      else  if (array[i] >= 97 && array[i] <= 122)
        	hasLower = 1;
    // CHECKING FOR DIGITS 
    else if (array[i] >= 48 && array[i] <= 57) 
        hasDigit = 1; 
  
    // OTHERWISE SPECIAL CHARACTER 
    else
        specialChar = 1;
	}
    if (hasLower && hasUpper && hasDigit &&  
        specialChar && (size >= 8)) 
	  strong = 1;

   return strong;
}
