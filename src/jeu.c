#include "jeu.h"

void launchGameWithMap(const char* mapfile)
{
	if(mapfile == NULL)
		return;

	printf("Map à charger: %s\n", mapfile);
}

int startMenu()
{
	int choice;
	do {
		choice = showMainMenu();
		if(choice == MENU_MAP)
		{
			int map = showMapMenu();
			play(map);
		} 
		else if(choice == MENU_HELP)
		{
			showHelpMenu();
		}
	} while(choice != MENU_EXIT);
	return 0;
}

MENU_CHOICE showMainMenu()
{
	int val;
	do {
		printf("--- menu ---\n");
		printf("1 - Maps\n");
		printf("2 - Aide\n");
		printf("0 - Quitter\n");
		printf("choix: ");
		scanf("%d", &val);
	} while(val > 2 || val < 0);
	switch(val)
	{
		case 0:
			return MENU_EXIT;
		case 1:
			return MENU_MAP;
		case 2:
			return MENU_HELP;
	}
}

int showMapMenu()
{
	return 0;
}

void showHelpMenu()
{
	return;
}

int play()
{
	return 1;
}
