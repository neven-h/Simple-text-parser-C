#include <stdio.h>
#include <ctype.h>

int  main(){
int newSentnce = 1; /*mode: a beginning of a new sentence*/
int quotation = 0; /*mode: entering into a quote*/
char c;

printf("\nPlease enter a text:\n");

c = getchar();

while(c != EOF){
if(isdigit(c) != 0) {newSentnce = 0;}
else {
if(isspace(c) == 0)
{
if(newSentnce == 1 || quotation == 1) {
if (islower(c) != 0) /* change from lower cases to upper */
c = toupper(c);
}
else
{
if(isupper(c) != 0)
c = tolower(c);
}
newSentnce = 0;
}
putchar(c);


if (c == '"' && quotation == 0) quotation = 1; /*if we entered inside a quoate*/
if (c == '.' && quotation == 0) newSentnce = 1; /*if we're at the beginning of a line*/
else if (c == '"' && quotation == 1) quotation = 0; /*if we're at the end of a quoate*/
}
c = getchar();
}
return 0;
}
