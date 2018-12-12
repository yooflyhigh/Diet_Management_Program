#include "main.h"


void Menu::Random_Choice(Print pr, int days){
	int cnt = 0, eat = 0, x = 2, y = 3, z = 0, v = 0, w = 1;
	srand(time(NULL));
	pr.User_info();
	while(cnt++ < days){
		eat = 0;
		if(cnt == 2){
			z += 10;
		}

		pr.gotoxy(v,z);
		cout << cnt << pr.Msg_Days();


		while(eat++ < THREE){
			int flag[4] = {0};
			selected_menu.clear();
			selected_Nut.clear();
			if(x >= 60){
				x = 2;
				y += 10;
				z += 10;
			}
			while(TRUE){
				if(flag[0] == 1 && flag[1] == 1 && flag[2] == 1 && flag[3] == 1)
					break;

				int r = rand()%(Sd.name.size());

				if(Sd.attribute[r] == 'C' && Sd.calories[r] >= Ot.One_takes_Carbohydrate){
					if(flag[0])
						continue;
					selected_menu.push_back(Sd.name[r]);
					selected_Nut.push_back(Sd.attribute[r]);
					flag[0] = 1;
				}
				else if(Sd.attribute[r] == 'P' && Sd.calories[r] >= Ot.One_takes_Protein){
					if(flag[1])
						continue;
					selected_menu.push_back(Sd.name[r]);
					selected_Nut.push_back(Sd.attribute[r]);
					flag[1] = 1;
				}

				else if(Sd.attribute[r] == 'F' && Sd.calories[r] >= Ot.One_takes_Fat){
					if(flag[2])
						continue;
					selected_menu.push_back(Sd.name[r]);
					selected_Nut.push_back(Sd.attribute[r]);
					flag[2] = 1;

				}
				else if(Sd.attribute[r] == 'M' && Sd.calories[r] >= Ot.One_takes_Mineral){
					if(flag[3])
						continue;
					selected_menu.push_back(Sd.name[r]);
					selected_Nut.push_back(Sd.attribute[r]);
					flag[3] = 1;
				}
				else{
					continue;
				}

			}
			if(w > 3)	 
				w = 1;
			pr.gotoxy(x, y-2);
			cout << pr.Msg_Take(w++);
			pr.gotoxy(x, y-1);
			cout << pr.Msg_Line();
			for(int i = 0 ; i < selected_menu.size(); i++){
				pr.gotoxy(x, y+(i));
				cout << selected_menu[i] << "(" << selected_Nut[i] << ")";
			}
			x += 20;
		}
	}
}

Menu::Menu(){

}
Menu::~Menu(){

}