
#include <iostream>
using namespace std;

//void  zad1(int argument[], int rozmiar) {
//    
//    int wynik;
//    for (int i = 0; i < rozmiar; i++) {
//        if (argument[i] > 0) {
//            wynik = argument[i];
//            cout<<endl << wynik<<", ";
//        }
//
//    }
// 
//}
//
//
//int main()
//{
//    int tab[10], size;
//    srand(time(NULL));
//    size = sizeof(tab) / sizeof(int);
//    for (int i = 0; i < size; i++) {
//        tab[i] = rand() % 11 -5;
//        cout << tab[i] << ", ";
//    }
//    zad1(tab, size);
//}





//int zad1(int argument[], int rozmiar) {
//	int wynik=0;
//	for (int i = 0; i < rozmiar; i++) {
//		if (argument[i] % 2 != 0) {
//			wynik += argument[i];
//		}
//	}
//	return wynik;
//}
//
//
//int zad2(int arg[], int roz) {
//	int  wynik2=1;
//	for (int i = 0; i < roz; i++) {
//		wynik2 *= arg[i];
//	}
//	return wynik2;
//}




//int main() {
//	int tab[5], size;
//	srand(time(NULL));
//	size = sizeof(tab) / sizeof(int);
//	for (int i = 0; i < size; i++) {
//		tab[i] = rand() % 11;
//		cout << tab[i]<<", ";
//	}
//	cout << endl << zad1(tab, size)<<", ";
//
//
//
//
//	int tab2[3] = { 7,9,3 }, size2;
//	size2 = sizeof(tab2) / sizeof(int);
//	cout<<endl <<"wynik mnozenia 7*9*3="<< zad2(tab2, size2);
//}




//int zad2(int argument[], int rozmiar) {
//	int wynik =argument[0];
//	for (int i = 0; i < rozmiar; i++) {
//		if(wynik<argument[i]) {
//			wynik = argument[i];
//			
//		}
//	}
//	return wynik;
//}
//
//int main() {
//	int tab[2], size;
//	srand(time(NULL));
//	size = sizeof(tab) / sizeof(int);
//	for (int i = 0; i < size; i++) {
//		tab[i] = rand() % 101;
//		cout << tab[i] << ", ";
//	}
//	cout << endl << "najwieksza liczba:" << zad2(tab,size);
//}
