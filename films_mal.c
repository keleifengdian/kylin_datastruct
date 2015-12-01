#include"stdio.h" 
#include "stdlib.h"
#define TSIZE 45

int main()
{
	struct film {
		char title[TSIZE];
		int rating;
	};

	 struct film *movies;
     int i=0,n;
     int j;

     printf("Enter the maxinum number of movies you'll enter:'");
	 scanf("%d",&n);
//	 printf("n = %d,i = %d\n",n,i);
	 movies = (struct film *)malloc(n*sizeof(struct film));

     while(i < n)
	 {
		 puts("Please input the title of movies:");
		 scanf("%s",&movies[i].title);
         puts("Enter your rating <0-10>:");
         scanf("%d",&movies[i++].rating);
         while(getchar() != '\n')
	         continue;
		 //movies = (struct film *)malloc(sizeof(struct film));
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

