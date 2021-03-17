/* Now the problem is that:
1. the program doesn't change upper cases to lower cases - not when it's inside a double quote and not when its in the beggining of a sentanse 
2. I do not have a condition for the first char of the text - and I think i also don't have a contidion for all other states where I'd like to change upper to lower 
3. I think there's a problem with the order opreations - but I don't know what
4. maybe I could define c to be a char - but do I want to do that? would that solve any problem for me?
*/


#include <stdio.h>
#include <ctype.h>

int main()
{
	int newSentnce = 1; /*mode: a beggining of a new sentence*/
	int quotation = 0; /*mode: entering into a quote*/
	int c;
	printf("\nPlease enter a text :\n\n"); /* prints the user an instruction before entering input*/

	while ((c = getchar()) != EOF)
	{
		if (isdigit(c) != 0) {newSentnce = 0;}
		else
		{
			if (c == '"' && quotation == 0) quotation = 1; /*if we entered inside a quoate*/
			if (c == '.' && quotation == 0) newSentnce = 1; /*if we're at the beggining of a line*/
			if  (c == '"' && quotation == 1) quotation = 0; /*if we're at the end of a quoate*/
			if (!isspace(c))
			{
				if (newSentnce == 1 || quotation == 1)
				{
					if (islower(c) == 0) /*if the letters inside the quoate aren't upper cases, change it to upper*/
						toupper(c);
				}
				else /*if c is a whice space but not inside a quote or at the beggining of a new line*/
				{
					if (islower(c) != 0)
						tolower(c); /*change to a lower case if needed*/
				}

				if (isspace(c) != 0) /*if c isn't a white char, we're not at a beggining of a new line*/
					newSentnce = 0;
				if (newSentnce == 0  && quotation == 0)
				{
					if(islower(c) != 0)
						tolower(c);
				}
			}

			putchar(c);
		}
	}

	return 0;
}
