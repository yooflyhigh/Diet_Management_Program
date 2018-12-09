#include "Menu.h"
#include "Nutrient.h"
#include <random>
#include <time.h>


void Menu::Random_Choice(){
	int flag[4] = {0,};
	selected_menu.clear();
	srand(time(NULL));
	while(TRUE){
		if(flag[0] == 1 && flag[1] == 1 && flag[2] == 1 && flag[3] == 1)
			break;

		int r = rand()%(Sp.name.size());

		if(Sp.attribute[r] == 'C' && Sp.calories[r] >= Ot.One_takes_Carbohydrate){
			if(flag[0])
				continue;
			selected_menu.push_back(Sp.name[r]);
			flag[0] = 1;
		}
		else if(Sp.attribute[r] == 'P' && Sp.calories[r] >= Ot.One_takes_Protein){
			if(flag[1])
				continue;
			selected_menu.push_back(Sp.name[r]);
			flag[1] = 1;
		}

		else if(Sp.attribute[r] == 'F' && Sp.calories[r] >= Ot.One_takes_Fat){
			if(flag[2])
				continue;
			selected_menu.push_back(Sp.name[r]);
			flag[2] = 1;

		}
		else if(Sp.attribute[r] == 'M' && Sp.calories[r] >= Ot.One_takes_Mineral){
			if(flag[3])
				continue;
			selected_menu.push_back(Sp.name[r]);
			flag[3] = 1;
		}
		else{
			continue;
		}	
	}
}
Menu::Menu(){

}
Menu::~Menu(){

}