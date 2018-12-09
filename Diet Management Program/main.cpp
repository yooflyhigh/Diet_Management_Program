#include "Nutrient.h"
#include "Menu.h"
#include "Side_dish.h"

string opening = "다이어트 프로그램에 오신것을 환영합니다.\n\n";
int main(int argc, char* argv[]){
	string input;
	One_takes user;
	Menu mu;

	cout << opening;
	cout << "남자라면 '남자' 라고 여자라면 '여자' 라고 적어주세요. \n >> ";
	cin >> input;
	if(! input.compare("남자")){
		user.Sex(MALE);
	}
	else if(! input.compare("여자")){
		user.Sex(FEMALE);
	}
	else{
		cout << "잘못 입력하셨습니다.";
		return 0;
	}

	user.One_takes_calories();

	mu.Random_Choice();
	cout << endl << "오늘의 아침 식단입니다." << endl << "──────────────────────────" << endl;
	for(int i = 0 ; i < mu.selected_menu.size(); i++){
		cout << mu.selected_menu[i] << endl;
	}
	mu.Random_Choice();
	cout << endl << "오늘의 점심 식단입니다." << endl << "──────────────────────────" << endl;
	for(int i = 0 ; i < mu.selected_menu.size(); i++){
		cout << mu.selected_menu[i] << endl;
	}	
	mu.Random_Choice();
	cout << endl << "오늘의 저녁 식단입니다." << endl << "──────────────────────────" << endl;
	for(int i = 0 ; i < mu.selected_menu.size(); i++){
		cout << mu.selected_menu[i] << endl;
	}
	return 0;
}