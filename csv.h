#ifndef CSV_H
#define CSV_H

/* this needs to work in the format for the game */

/* testing*/
/* char * = string */
/* 32 byte */
typedef struct save {
	char name[32];
	char data1[32];
	char data2[32];
} save;

/* a better thing that parses */
void  *parsething(save *new, char *input);

#endif
