#include <stdio.h>
#include <string.h>
char isNumber(char *text)
{
    int j;
    j = strlen(text);
    while(j--)
    {
        if(text[j] > 47 && text[j] < 58)
            continue;

        return 0;
    }
    return 1;
}

bool IsValidNumber(char str[])
{
	
	
   for(int i = 0; i < strlen(str); i ++)
   {
   	
   		int num=strlen(str);
   	 	printf("so luong phan tu %d",num);
	
      //ASCII value of 0 = 48, 9 = 57. So if value is outside of numeric range then fail
      //Checking for negative sign "-" could be added: ASCII value 45.
      if (str[i] < 48 || str[i] > 57)
         return false;
         
      
   }

   return true;
}


int main(){
    char tmp[16];
    scanf("%s", tmp);

	printf("sau ky tu %s",tmp);
    if(IsValidNumber(tmp))
        return printf("is a number\n");

    return printf("is not a number\n");
}
