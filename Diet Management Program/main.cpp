#include "main.h"


int main(int argc, char* argv[]){
	string input;
	int days;
	One_takes user;
	Menu mu;
	Print pr;

	while(TRUE){
		input = pr.setUser();

		if( ! input.compare(MAN) ){
			user.Sex(MALE);
			break;
		}

		else if( !input.compare(WOMAN) ){
			user.Sex(FEMALE);
			break;
		}

		else{
			pr.Msg_Perror();
			continue;
		}
	}
	if(!(days = pr.setDays())){
		pr.Msg_Perror();
		return 1;
	}
	user.One_takes_calories();
	mu.Random_Choice(mu,days);
	pr.Msg_Anykey(100,(days)/6*10);
	pr.Msg_Closing();
	return 0;
}