#include"stdio.h" 

#define TSIZE 45
#define FMAX  5

int main()
{
	struct film {
		char title[TSIZE];
		int rating;
	};

	 struct film movies[FMAX];
     int i = 0;
     int j;

     puts("Enter first movie title:");
     while(i < FMAX && gets (movies[i].title) != NULL && movies[i].title[0] != '\0')
	 {

         puts("Enter your rating <0-10>:");
         scanf("%d",&movies[i++].rating);
         while(getchar() != '\n')
	         continue;
	     puts("Enter next movie list:\n");
	 }
	     if(i == 0)
	     {
             printf("No data enterd");
         }
         else {
               printf("Here is the movie list:\n");
         }
        for (j = 0; j<i; j++)
        {
			printf("Mpvie:%s Rating: %d \n",movies[j].title,movies[j].rating);
		}
		printf("Bye!\n");
		
		return 0;
 }

