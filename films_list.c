/*************************************************************************
    > File Name: films_list.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年12月01日 星期二 14时12分20秒
 ************************************************************************/

#include<stdio.h>
#include "stdlib.h"
#include "string.h"
#define TSIZE 45

struct film{
	int rating;
	char title[TSIZE];
	struct film *next;		//point to the next struct of film
	};

int main()
{
	struct film *head;
	
	struct film *prev,*current;
	char input[TSIZE]="I 'm sb'";
	
	head = NULL;
	/*collect and store inf*/
	puts("Enter the first movie title:");
	while (gets(input) != NULL  &&  input[0] != '\0')
	{
		current = (struct film *)malloc(sizeof(struct film));
		if (head == NULL)
		{
			head = current;
		}
		else
		{
			prev -> next = current;
		}
		current -> next = NULL;
		strcpy(current->title,input);
		puts("Enter your rating <0-10>:");
		scanf("%d",&current->rating);
		while(getchar() != '\n')
		{
			continue;
		}
		puts("Enter next movie title(empty to stop):");
		prev = current;

	}

	/*output the list of film*/
	if(head == NULL)
	{
		printf("No data entered\n");
	}
	else
	{
		printf("Here is the movie list:\n");
	}
	current = head;
	while(current != NULL)
	{
		printf("Movie: %s Rating:%d\n",current->title, current->rating);
		current = current->next;
	}

	/*task has finished ,then reliese tbe memory*/
	current = head;
	while(current != NULL)
	{
		free(current);
		current = current->next;
	}

	printf("Bye\n");

	return 0;
	
}
