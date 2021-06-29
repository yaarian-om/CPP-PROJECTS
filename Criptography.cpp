
#include <stdio.h>

int main()
{

    char line[150],x[150];
   int n=0;

   printf("input String: ");
   fgets(line, sizeof(line), stdin); // take input


   for (int i = 0, j; line[i] != '\0'; ++i)
    {

      // enter the loop if the character is not an alphabet
      // and not the null character
      while (!(line[i] >= 48 && line[i] <= 57) &&  !(line[i] == '\0'))
        {
             for (j = i; line[j] != '\0'; ++j)
             {

                line[j] = line[j + 1];

             }

         line[j] = '\0';
      }
   }



   printf("output: ");
   puts(line);





   return 0;
}

