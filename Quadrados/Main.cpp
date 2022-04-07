/*
 * EDUBOT HELLO WORLD EXAMPLE
 * @Author: Maik Basso <maik@maikbasso.com.br>
*/

#include <iostream>
#include "libs/EdubotLib.hpp"
//edubotLib->sleepMilliseconds(2000);
//edubotLib->move(0.3);
//edubotLib->rotate(90);
//edubotLib->neutral();

int main(){

	EdubotLib *edubotLib = new EdubotLib();
	int i = 1;
	if(edubotLib->connect()){        //Faz os três quadrados, muda tempo em função de i
		for (i = 1; i <= 4; i *=2){
			edubotLib->move(0.2);
			edubotLib->sleepMilliseconds(2000*i);
			edubotLib->rotate(90);
			edubotLib->sleepMilliseconds(2000*i);
			edubotLib->move(0.2);
			edubotLib->sleepMilliseconds(2000*i);
			edubotLib->rotate(90);
			edubotLib->sleepMilliseconds(2000*i);
			edubotLib->move(0.2);
			edubotLib->sleepMilliseconds(2000*i);
			edubotLib->rotate(90);
			edubotLib->sleepMilliseconds(2000*i);
			edubotLib->move(0.2);
			edubotLib->sleepMilliseconds(2000*i);
			edubotLib->rotate(90);
			edubotLib->sleepMilliseconds(2000*i);
		}
		/*if(edubotLib->connect()){       //faz a mesma coisa só que muda a velocidade ao invés do tempo
		for (i = 1; i <= 4; i *=2){
			edubotLib->move(0.2*i);
			edubotLib->sleepMilliseconds(2000);
			edubotLib->rotate(90);
			edubotLib->sleepMilliseconds(2000);
			edubotLib->move(0.2*i);
			edubotLib->sleepMilliseconds(2000);
			edubotLib->rotate(90);
			edubotLib->sleepMilliseconds(2000);
			edubotLib->move(0.2*i);
			edubotLib->sleepMilliseconds(2000);
			edubotLib->rotate(90);
			edubotLib->sleepMilliseconds(2000);
			edubotLib->move(0.2*i);
			edubotLib->sleepMilliseconds(2000);
			edubotLib->rotate(90);
			edubotLib->sleepMilliseconds(2000);
		}*/
		edubotLib->disconnect();
	}
	else{
		std::cout << "Could not connect on robot!" << std::endl;
	}

	return 0;
}
