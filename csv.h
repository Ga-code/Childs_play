#ifndef CSV_H
#define CSV_H

typedef struct save {
	char type; /* the type you have(there is 9 of them)*/
	int population; /* the amount of people you have*/
	int nation_morale; /* this type of morale affectes soldier production and gets affected by taxes*/
	int iron_resource; /* the amount of iron you currently have */
	int iron_production; /* number of iron produced each turn(round)*/
	int wood_resource; /* the amount of wood you currently have */
	int wood_production; /* number of wood produced each turn(round)*/
	int stone_resource; /* the amount of stone you currently have */
	int stone_production; /* number of stone produced each turn(round)*/

	
	
} save;

#endif
