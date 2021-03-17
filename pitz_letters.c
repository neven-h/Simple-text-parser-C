/* Now the problem is that the program doesn't change upper cases to lower cases - not when it's inside of a double quote and not when its 
in the beggining of a sentanse */


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
		if (isdigit(c) != 0) newSentnce = 0;
		else
		{
			if (isspace(c) == 0)
			{
				if (newSentnce == 1 || quotation == 1)
				{
					if (islower(c) != 0) /*if the letters inside the quoate aren't upper cases, change it to upper*/
						(toupper(c));
				}
				else /*if c is a whice space but not inside a quote or at the beggining of a new line*/
				{
					if (islower(c) != 0)
						((tolower(c))); /*change to a lower case if needed*/
				}

				if (isspace(c) != 0) /*if c isn't a white char, we're not at a beggining of a new line*/
					newSentnce = 0;
			}

			putchar(c);

			if (c == '"' && quotation == 0) quotation = 1; /*if we entered inside a quoate*/
			if (c == '.' && quotation == 0) newSentnce = 1; /*if we're at the beggining of a line*/
			else if (c == '"' && quotation == 1) quotation = 0; /*if we're at the end of a quoate*/
		}
	}

	return 0;
}
