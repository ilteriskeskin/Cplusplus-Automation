#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <string.h>
#include <memory>
#include <conio.h>

using namespace std;

class KullaniciOlustur{

public:

	string kullaniciAdi;
	string bolum;
	string sinif;
	string numara;

	void BilgiAl()
	{
		
		cout << "Kullanici Adinizi Giriniz:";
		cin >> kullaniciAdi;
		cout << "\nNumaranizi Giriniz:";
		cin >> numara;
		cout << "\nBolumunuzu Giriniz:";
		cin >> bolum;
		cout << "\nSinifinizi Giriniz:";
		cin >> sinif;
		BilgiEkle();
	}

private:

	ofstream dosya;

	void BilgiEkle()
	{

		dosya.open("bilgiler.txt", ios::out | ios::in | ios::app);
		dosya << kullaniciAdi << setw(10) << numara << setw(10) << bolum << setw(10) << sinif << endl;

	}

};
class KullanicilariGoruntule{

public:
	string kullaniciAdi;
	string numara;
	string bolum;
	string sinif;
	ifstream dosya;

	void BilgileriGoruntule()
	{
		dosya.open("bilgiler.txt");
	
		while(true)
		{
		dosya>>kullaniciAdi>>numara>>bolum>>sinif;
		if(dosya.eof())
			break;		
		cout <<kullaniciAdi<<setw(10)<<numara<<setw(10)<<bolum<<setw(10)<<sinif<<endl;
		}				
	}

};

class SecimYap{
public:
	int secim;
	char tercih;

	void MenuSecimi()
	{
		
		KullaniciOlustur Ekle;
		KullanicilariGoruntule Goruntule;

		cout << "1-->Kayit Olustur" << endl;
		cout << "2-->Kayitlari Goruntule" << endl;
		cout << "3-->atabit.org'a Git" << endl;
		cout << "4-->google'la :)" << endl;		
		cout << "5-->Cikis" << endl;
		cout << "Menu Seciniz: ";
		cin >> secim;
		
		switch (secim)
		{
			
		case 1:
			Ekle.BilgiAl();
			cout << "Ana Menuye Donmek Istiyor Musunuz? E/H: ";
			cin >> tercih;
		    	if (tercih == 'E' || tercih=='e'){
		    		system("clear");
		    		MenuSecimi();
		    	}
		    	else if(tercih=='H' || tercih=='h')
				system("clear");
		    		break;
		    break;

		case 2:
			Goruntule.BilgileriGoruntule();
			cout << "Ana Menuye Donmek Istiyor Musunuz? E/H: ";
			cin >> tercih;
		    	if (tercih == 'E' || tercih=='e'){
		    		system("clear");
		    		MenuSecimi();
		    	}
		    	else if(tercih=='H' || tercih=='h')
				system("clear");
		    		break;
		    break;
		
        	case 3:
			system("firefox -new-tab http://www.atabit.org");
			cout << "Ana Menuye Donmek Istiyor Musunuz? E/H: ";
			cin >> tercih;
	    		if (tercih == 'E' || tercih=='e'){
    				system("clear");
	    			MenuSecimi();
	    		}
	    		else if(tercih=='H' || tercih=='h')
				system("clear");
	    			break;
    		break;

		case 4:
			system("firefox -new-tab https://www.google.com");
			cout << "Ana Menuye Donmek Istiyor Musunuz? E/H: ";
			cin >> tercih;
	    		if (tercih == 'E' || tercih=='e'){
    				system("clear");
	    			MenuSecimi();
	    		}
	    		else if(tercih=='H' || tercih=='h')
				system("clear");
	    			break;
    		break;

		case 5:
			break;

		default:
			cout << "Yanlis Bir Deger Girdiniz!!!" << endl;
			cout << "Ana Menuye Donmek Istiyor Musunuz? E/H" << endl;
			cin >> tercih;
	    		if (tercih == 'E'){
    				system("clear");
	    			MenuSecimi();
	    		}
	    		else
				system("clear");
	    			break;
			break;
		}
	}
};
int main(){

	SecimYap A;

	A.MenuSecimi();

}
