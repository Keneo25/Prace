
#include <iostream>
using namespace std;


//ZADANIE 1 

//void zad1(int tablica[], int rozmiar) {
//	
//	for (int i = 0; i < 3; i++) {
//		cout << tablica[i] << ", ";
//	}
//	cout << "Rozmiar: " << rozmiar;
//
//	return;
//}
//
//
//int main(){
//
//	int tab[3] = { 2, 7, 7 };
//	int roz;
//	roz = sizeof(tab) / sizeof(int);
//
//	zad1(tab , roz);
//
//
//}

//ZADANIE 2 zle

//int zad2(string napis) {
//
//	if ((napis >= "a" && napis <= "z") || (napis >= "A" && napis <= "Z")) {
//		cout << napis;
//	}
//	else {
//		cout << "Te znaki to nie litery: " << napis;
//	}
//	return 0;
//
//}
//int main() {
//
//   	string slowo = "$PiEs$$";
//
//	int wynik = zad2(slowo);
//	cout << wynik;
//	
//
//	return 0;
//}


//ZADANIE 3



//int zad3(int tablica[], int rozmiar) {
//
//	int licznik = 0;
//	for (int i = 0; i < rozmiar; i++) {
//		if (tablica[i] % 2 == 0) {
//			if (licznik == 0) {
//				licznik = tablica[i];
//			}
//			else {
//				licznik = licznik * tablica[i];
//			}
//
//		}
//
//	}
//	return licznik;
//
//}
//
//int main() {
//
//	int b[5],size;
//	srand(time(NULL));
//	size = sizeof(b) / sizeof(int);
//	for (int i = 0; i < size; i++) {
//		b[i] = rand() % 7 + 6;
//		cout << b[i] << ", ";
//
//	}
//
//	int wynik = zad3(b, size);
//	cout  << "Wynnik: " << wynik << endl;
//
//}


//ZADANIE 4


//void zad4(int tablica[],int rozmiar){
//
//	for (int i = 0; i < rozmiar; i++){
//		if ((tablica[i])-1 == tablica[i+1]) {
//			cout  << "Wynik: " << tablica[i] << "," << tablica[i+1] << " ";
//		}
//	
//	}
//
//	cout << "Rozmiar: " << rozmiar;
//	return;
//}
//
//
//
//
//int main() {
//	int b[8] = { 1,3,2,0,5,7,3,9 },size;
//	size = sizeof(b) / sizeof(int);
//
//	zad4(b, size);
//	return 0;
//
//}

