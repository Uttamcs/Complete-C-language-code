// #include <stdio.h>
// int main()
// {
//     char str[100];
//     gets(str);
//     for (int i = 0; i <= strlen(str); i++)
//     {
//         if ((str[2] == str[7]) && (str[3] == str[8]) && (str[4] == str[9]) 
//         && (str[5] == str[10]))
//         {
//             if (str[i > 11])
//             {
//                 str[i - 5];
//             }
//         }
//     }
//     puts(str);
    
//     return 0;
// }


#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int i, z, k;
 
  	printf("Enter String :\n");
  	gets(str);
  	 	
  	for(i = 0; i < strlen(str); i++)
  	{
  		for(z = i + 1; str[z] != '\0'; z++)
  		{
  			if(str[z] == str[i])  
			{
  				for(k = z; str[k] != '\0'; k++)
				{
					str[k] = str[k + 1];
				}
 			}
		}
	}
	
	printf("%s ",str);
	
  	return 0;
}