#include <iostream>

using namespace std;

int main(){

//Variabel
	int M = 1;
	int N = 18 + 5;

//Tugas Program Hijrah
	cout << "==== Tugas Hijrah ====" << endl;
	cout << endl;
	cout << "---- Bilangan Prima ---" << endl;
	for(int i = M;i <= N;i++){

		if(!(i % 2 == 0) or i == 2){
			if(i % i == 0 and i % 1 == 0){
				cout << i << endl;
			}
		}
	}

cout << endl;

//Tugas Sulastri
	cout << "=== Tugas Sulastri ===" << endl;
	cout << "--- Bilangan Ganjil ---" << endl;
	for(int i = M;i <= N;i++){
		if( i % 2 == 0){
			cout << i << endl;
		}
	}

	cout << "--- Bilangan Genap ---" << endl;
	for(int i = M;i <= N;i++){
		if( i % 2 == 1){
			cout << i << endl;
		}
	} 

//Tugas Joko
	cout << "=== Tugas Joko ===" << endl;
	cout << "---Kelipatan 3 --" << endl;
	for(int i = M;i <= N;i++){
		if(i % 3 == 0){
			cout << i << endl;
		}
	}


	cout << "---Kelipatan 7 --" << endl;
	for(int i = M;i <= N;i++){
		if(i % 7 == 0){
			cout << i << endl;
		}
	}


}
