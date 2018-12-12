#include "main.h"


void Menu::Random_Choice(Menu mu, int days){
	int cnt = 0, x = 0, y = 3, z = 1, i = 0;
	srand(time(NULL));

	while(cnt++ < days){
		int flag[4] = {0};
		selected_menu.clear();
		if(x == 120){
			x = 0;
			y += 10;
			z += 10;
		}
		pr.gotoxy(x,z);
		cout << cnt << pr.Msg_Days();

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
		for(int i = 0 ; i < selected_menu.size(); i++){
			pr.gotoxy(x, y+(i));
			cout << selected_menu[i];
		}
		x+=20;
	}
}

Menu::Menu(){

}
Menu::~Menu(){

}