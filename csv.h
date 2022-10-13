#ifndef CSV_H
#define CSV_H

typedef struct save {
	char type; /* the type you have(there is 9 of them)*/
	int population; /* the amount of people you have*/
	float nation_morale; /* this type of morale affectes soldier production and gets affected by taxes*/
	float soldier_morale; /* this type of morale affects how good a soldier can fight, and is usually affected by how long the soldier has been from his home and the living conditions of where they are*/
	int iron_resource; /* the amount of iron you currently have */
	int iron_production; /* number of iron produced each turn(round)*/
	int wood_resource; /* the amount of wood you currently have */
	int wood_production; /* number of wood produced each turn(round)*/
	int stone_resource; /* the amount of stone you currently have */
	int stone_production; /* number of stone produced each turn(round)*/
	int food_resource; /* the amount of food you currently have*/
	int food_production; /* number of food produced each turn */
	bool has_disease; /* if the nation is sick by disease*/
	float disease_percentage; /* the percent of people afflicted by disease*/
	int disease_effectiveness; /* how effective the disease is in killing and maiming(1-100, as numkber becomes higher, the effectiveness increases)*/
	int disease_spread; /* how fast the disease spreads(1-100, as number becomes higher, the chance of spreading increases)*/
} save;


#endifi
