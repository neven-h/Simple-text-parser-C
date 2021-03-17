# Simple-text-parser-C
a simple parser which uses putchar, getchar and the library  &lt;ctype.h> in order to apply changes in a given text



the program "pitz_letters" receives an input through the terminal or by a txt. file and applies the following changes:

The first word in every new line must begin with a upper cases.
every word inside a double quote "" - must be written in upper cases.
all digits '0'-'9' must be removed from the text.
Every other word/ char in the text which isn't the first word of a new line\ inside a double quotes (as described in section 1,2) needs to be written in lower cases.
a sentence ends only with the char "."'. but if it appears inside a double quote that does not count as an end of a sentence.
a sentence can be longer than one line, and double quotes can also be applied on more than one line
empty rows or chars (tabs, space, new line) are allowed and will be printed as in the original input
there's no limit to the length of the text
the input reaches its end when the program identify in the input 'EOF'
A new sentence begins only with the first char which isn't blank after the end of the previous sentence
