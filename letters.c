/*final version is working. add comments and it's done */


#include <stdio.h>
#include <ctype.h>
#define IN 1
#define OUT 0
int  main(){
	int newSentnce = 1; /*mode: a beggining of a new sentence*/
	int quotation = 0; /*mode: entering into a quote*/
	char c;

	printf("\nPlease enter a text :\n\n"); 

	c = getchar();

	while(c != EOF){
		if(isdigit(c) != OUT) {newSentnce = OUT;}
		else {
			if(isspace(c) == OUT)
			{
				if(newSentnce == IN || quotation == IN) {
					if (islower(c) != OUT) /* change from lower cases to upper */
						c = toupper(c);
					}
					else 
					{
						if(isupper(c) != OUT)
							c = tolower(c);
					}
					newSentnce = OUT;
		}
		putchar(c);


			if (c == '"' && quotation == OUT) quotation = IN; /*if we entered inside a quoate*/
			else if (c == '.' && quotation == OUT) newSentnce = IN; /*if we're at the beggining of a line*/
			else if (c == '"' && quotation == IN) quotation = OUT; /*if we're at the end of a quoate*/
	}
	c = getchar();
}
	return 0;
}
