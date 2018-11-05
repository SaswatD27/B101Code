//why so many blank lines, harsha?!
#include<iostream>

#include<unistd.h>




using namespace std;








	int main () {

	int startBER = 200;

	int i = startBER;

	int BMR = 5;

	int BCR = 6;


	for (i; i>=0; i--) {

	BMR--;
	BCR--;

	if (BMR == 0) {

	i--;

	}

	if (BCR == 0) {

	i--;

	}

	
	cout<<"Your BER is "<<i<<" ."<<endl;
	
	sleep(2);

	}

	


	}


	
	



	
