#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

/*
	struct ucusTipi  {
		
		int no;
		string ucakAdi;
		string pilot;
		int pilotSayi;	
	};
	
int main(int argc, char** argv) {
	
    ucusTipi ucusTipi ={1453,"emreuc","emreDikici",3};
    
    cout<<"no:"<< ucusTipi.no <<endl;
    cout<<"ucak adi:"<< ucusTipi.ucakAdi <<endl;
    cout<<"pilot adi:"<< ucusTipi.pilot <<endl;
    cout<<"pilot sayisi:"<< ucusTipi.pilotSayi <<endl;

	return 0;
}
*/




























/*

int toplama(int a,int b){
                         //toplama ad�nda fonksiyon kuruldu ve i�ine hangi de�erlerin toplanaca�� yaz�ld�	
	return a+b;
}


int carpma(int a,int b){
	
	return a*b;       //toplamadaki ayn� i�lem yap�ld�
}



int main(int argc, char** argv){
	
	cout<<"toplami:"<<	toplama(3,25)<<endl;//toplama(3,25) in anlam� toplama fonksiyonunda 3 ile 25 say�lar�n� topla
	cout<<"carpimi:"<<	carpma(3,25);	      //burda da 3ile 25 say�lar�n� �arp anlam�na geliyor

return 0;

}
*/








/*
struct rasyonel{
	
	int pay;
	int payda;
};

int main(int argc, char** argv){
	
	rasyonel sayi1,sayi2,sonuc;
	
	cout<<"1.sayinin payini giriniz: ";
	cin>>sayi1.pay;	
	
	cout<<"1.sayinin paydasini giriniz: ";
	cin>>sayi1.payda;	
	
	cout<<"2.sayinin payini giriniz: ";
	cin>>sayi2.pay;	
	
	cout<<"2.sayinin paydasini giriniz: ";
	cin>>sayi2.payda;	
	
	
      sonuc.pay=sayi1.pay*sayi2.pay;
      sonuc.payda=sayi1.payda*sayi2.payda;

    
    cout<<"sayilarin gosterimi:"<<sayi1.pay <<"/"<<sayi1.payda<<" "<<"X"<<" "<< sayi2.pay<<"/"<<sayi2.payda<<"="<<sonuc.pay<<"/"<<sonuc.payda;
    
	return 0;
	
}

*/









/*
struct prizmaHacmi{
	
	int yukseklik;
	int en;     //prizman�n elemanlar�n� girdik
	int boy;
	int sonuc;
};

int main(int argc, char** argv){
     
     prizmaHacmi yukseklik1,boy1,en1,hacim;  //elemanlar� tekrar tan�mlad�k
     
     
	 cout<<"prizmanin yuksekligini giriniz:";     
     cin>>yukseklik1.yukseklik;                    
                                                  //prizma de�erlerini istedik
	 cout<<"prizmanin enini giriniz:";            
     cin>>en1.en;                                  
                                                
	 cout<<"prizmanin boyunu giriniz:";
     cin>>boy1.boy;

    hacim.sonuc=yukseklik1.yukseklik*en1.en*boy1.boy;
     
     cout<<"hacmi="<<hacim.sonuc;


return 0;
}

*/






/*
struct ucgenAlan{ //ucgenalan ad�nda struct belirledik
	
	int altTaban,yukseklik,sonuc; //ucgende alan� bulmak i�in ne laz�m ise yazd�k
};

   int main(int argc, char** argv){
   
       ucgenAlan alttaban1,yukseklik1,alan; 
	    //main fonksiyonunda tekrar yazd�k ��nk� main ba�ka bir fonksiyon yukardan ba��ms�z
        // de�erlerimizi main i�in yeniden tan�mlad�k diyebiliriz
       
       cout<<"ucgenin alttaban uzunlugunu giriniz: ";
       cin>>alttaban1.altTaban;      //ucgenin alttaban uzunlu�unu istedik
   
       cout<<"ucgenin yuksekligini giriniz: ";
       cin>>yukseklik1.yukseklik;

       alan.sonuc= (alttaban1.altTaban*yukseklik1.yukseklik)/2; // alan� buldurduk
       
       cout<<"ucgenin alani:"<<alan.sonuc; //alan� ekrana bast�rd�k
       
return 0;
   }

*/







/*
void ucgenAlan(int yukseklik,int altTaban){
//void yani belirsiz bir fonksiyon olu�turduk ve i�ine kullanaca��m�z de�erleri girdik
	
cout<< "ucgenin alani:"<<(yukseklik*altTaban)/2; 
//bu fonksiyon i�i�nde �al��acak form�l� girdik burada form�l�m�z ucgen alan form�l�
	
}

int main(){
	
	ucgenAlan(24,6);
	 //ucgen alan� i�in kullanaca��m�z de�erleri kendimiz girdik

    return 0;	
}
*/






/*
void faktoriyel (int sayi){
	int faktoriyel=1;
	
	for(int i=2; i<=sayi;i++){
		faktoriyel*=i;
		
	}
	cout<<"fakt�riyel:"<<faktoriyel;
	
	
}

int main(){
	int sayi;
	cout<<"say� gir:";
	cin>>sayi;
	faktoriyel(sayi);
}
*/






/*

void topla(int a, int b){
 //topla ad�nda fonksiyona toplanacak de�er isimlerini girdik
	
	int toplam;                 |
	toplam=a+b;                 |--> //toplam ad�nda de�er tan�mlad�k neleri toplayaca��m�z� yazd�k 
	cout<<"toplam:"<<toplam;    |    // ekrana bast�rd�k yani void topla fonksiyonumuz a ile b yi topluyor 
}

int main(){
	
	int a; int b;  //main fonksiyonu i�in tekrar tan�m yapt�k
	
	cout<< "say�lar� giriniz:";
	cin >> a>> b;  //say�lar� istedik
	topla(a,b); //void fonksiyonunu �a��rd�k
}
*/









/*

int carpim (int a,int b){
	return a*b;

}

int main(){
	int a, b;
	cout <<"say� giriniz";
	cin>> a>>b;
	cout<<	"sonuc:"<<carpim(a,b);
	
}

*/









/*
int toplam(int a, int b){
//bu da fonksyonun cinsi belirli ise (int,string vs)return kal�b� ile kolayca fonksiyonu d�nd�rebiliriz
	return a+b;
}

int main(){
	
	int a,b;//say�lar� tan�mlad�k
	
	cout<<"sayilari giriniz";
	cin>>a>>b;  //say�lar� kullan�c�dan istedik
	
	cout<<"toplam="<<toplam(a,b);  //ekrana bast�rd�k
}
*/










/*
void eleman(int dizi[],int size){
	
	for(int i=0; i<size;i++){
		cout<<"dizinin elemanlari:"<<dizi[i]<<endl;
	}
}

int main(){

	int a[]={1,2,3};
	eleman(a,3);
	
	return 0;
}

*/










/*
struct insan{
	int no;
	string isim;
	string soy;
};

int main(){
	
	insan nu,ad,soyad;
	
	cout <<"isminizi giriniz:";
	cin>>ad.isim;
	
	cout<<"soyisim giriniz:";
	cin>>soyad.soy;
	
	cout <<"numara giriniz:";
	cin>>nu.no;
	
	cout<<"isim:"<<ad.isim;
}
*/










/*

struct prizma{
	
	int en;
	int boy;
	int yukseklik;
	int sonuc;
};

int main(){
	
	prizma en,boy,yukseklik,sonuc;
	
	cout<<"deger girisi yapiniz";
	cin>>en.en;
	
	cout<<"deger girisi yapiniz";
	cin>>boy.boy;
	
	cout<<"deger girisi yapiniz";
	cin>>yukseklik.yukseklik;

    sonuc.sonuc=boy.boy*en.en*yukseklik.yukseklik;
    
    cout<<"deger:"<<sonuc.sonuc;
}

*/







/*
class prizma{
	public:
	
	int boy,en,yukseklik;


   int hacimHesapla(){
   	
   	return en*boy*yukseklik;
   	
   }
	
};

int main(){

	prizma prizma1;
	
	cout<<"deger:";
	cin>> prizma1.boy;
	
	cout<<"deger2:";
	cin>> prizma1.en;
	
	cout<<"deger3:";
	cin>> prizma1.yukseklik;
	
	cout<< "deger sonucu:"<<prizma1.hacimHesapla();

    return 0;
}
*/	






	
	
/*

class ucgen{
	
	public:
		
		int yukseklik, alttaban;
		
	int ucgenAlan(){
		
		return (yukseklik*alttaban)/2;
	}
};


 int main(){
 	
 	ucgen ucgen;
 	
 	cout<<"ucgen alttaban degeri giriniz:";
 	cin>> ucgen.alttaban;
 	
 	cout<<"ucgen yukseklik degeri giriniz:";
 	cin>> ucgen.yukseklik;
 	
 	
 	
 	cout<<"ucgenin alani:"<< ucgen.ucgenAlan();
 	
 	return 0;
 	
 }
*/








/*
struct ucgenAlan{
	
	int yukseklik,alttaban,sonuc;
	
};

int main(){
	
	
	ucgenAlan yukseklik,alttaban,sonuc;
	
	
	cout<<"ucgen alttabna degerini giriniz:";
	cin>> alttaban.alttaban;
	
	cout<< "ucgen yukseklik degerini giriniz:";
	cin>> yukseklik.yukseklik;
	
	
	sonuc.sonuc=(yukseklik.yukseklik*alttaban.alttaban)/2;
	
	
	cout<<"ucgen alan degeri:"<<sonuc.sonuc;
	
	return 0;
}
*/










/*

class kare{
	
	public:
		
	int karekenar;
	
int karealan(){
		
    return karekenar*karekenar;		
	}
};

int main(){
	
	kare kare1;
	
	cout<< "karenin bir kenarini giriniz :";
	cin>> kare1.karekenar;
	
	cout<< "karenin alani:"<< kare1.karealan();
	
	return 0;
	
}

*/










/*
void faktoriyel(int sayi){
	
	int faktoriyel=1;
	
for(int i=2;i<=sayi;i++){
		
	faktoriyel=faktoriyel*i;	
	}
   cout<<"\n";
   cout<<"faktoriyel isleminin sonucu :"<<faktoriyel;
}

int main(){
	
	int a;
	
	cout<<"a degerinin girisini saglayiniz:";
	cin>>a;
	
	faktoriyel(a);
	
	return 0;
}

*/











/*
struct carpma{
	
	int sayi;
	int sonuc;
};

int main(){
	
	carpma sayi1,sayi2,sonuc;
	
	cout<<"sayi degeerini giriniz:";
	cin>>sayi1.sayi;
	
	cout<<"sayi degeerini giriniz:";
	cin>>sayi2.sayi;
	
	sonuc.sonuc=sayi1.sayi*sayi2.sayi;
	
	cout<<"toplam degeri:"<<sonuc.sonuc;
	
	return 0;
}
*/










/*
class bolme{
	
	public:
		
		int sayi;
		int sonuc;
};

int main(){
	
	bolme sayi1,sayi2,sonuc;
	
	cout<<"1.sayi girisi yapiniz:";
	cin>>sayi1.sayi;
	
	cout<<"2.sayi degerini giriniz:";
	cin>>sayi2.sayi;
	
	sonuc.sonuc=sayi1.sayi/sayi2.sayi;
	
	cout<<sayi1.sayi<<"/"<< sayi2.sayi<<"="<<sonuc.sonuc;
	
	return 0;
}
*/










/*
struct insan{
	
	string isim,soyisim;
};

int main(){
	
	insan birey1;
	
	cout<<"isim girisi yapiniz:\n";
	cin>>birey1.isim;
	
	cout<<"soy isim girisi yapiniz:\n";
	cin>>birey1.soyisim;

    cout<<"\nisim:"<<birey1.isim<<"\t soyisim:"<<birey1.soyisim;
		
	return 0;
	
}
*/










/*

class dikdortgen{  //class olu�turduk
	
	public: //bunu yazmay� unutma public olmas� sonra da kullan�labilir olmas� demek
		
	   int en,boy;   //de�erlerimizi tan�mlad�k
	   
	   void ata(int e,int b){  //void ata fonksiyonu ile  < e de�erini en'e >   < b de�erini boy'a atad�k >
	   	
	       en=e;    //atama i�lemleri yap�ld�
		   boy=b;	
	   }
	   
	   int alan(){
	   	       //alan fonksiyonu ile dikdortgenin alan� bulundu
	   	   int alan= en*boy;
	   
	   }
};

int main(){
	
	dikdortgen dk1; //dk isimli bir dikdortgen tan�mlad�m
	
	dk1.ata(4,5);   //dk isimli dikd�rtgene en'e 4  boy'a 5 de�erini atad�k
	
	cout<<"alan:"<<dk1.alan();   //alan fonksiyonunu �a��rarak ekrana bast�rd�k 
	
	
	return 0;
}

*/










/*
 class nokta{ //nokta ad�nda class olu�tu
 	
	public:  //bunu yazmay� unutma public olmas� sonra da kullan�labilir olmas� demek
		
		int x,y; //kullanaca��m�z de�erler
		
		nokta(int a=0,int b=0){
			
			x=a;
			y=b;
		}
	
	    int xgoster(){
	    	
	    	return x;
		}
};

int main(){
	
	
	nokta nokta1(4,8);
	
	cout<<"nokta 1 icin x degeri:"<<nokta1.xgoster();
	
	
	return 0;
}

*/












/*



struct insan{
	
	string isim;	
	
};


int main(){
	
	insan isim;
	
	cout<<"isim girisi yapiniz:";
	cin>>isim.isim;
	
	cout<<"isim:"<<isim.isim;
	
	return 0;
}

*/











/*

class kesir{
	
	int pay,payda;
	
	public:
		
		kesir(int p=0,int pd=0){
			
			
			pay=p;
			payda=pd;
		}
	
	  int getpay(){
	  	
	  	 return pay;  
	  }
	
	  int getpayda(){
	  	
	  	 return payda;  
	  }

     int degerbul(){
     	
     	return pay/payda;
     	
	 }
    
 };

int main(){
	
	kesir kesir1(8,2);
	

     cout<<kesir1.getpay()<<"/"<<kesir1.getpayda()<<"="<<kesir1.degerbul();
	
	return 0;
	
}

*/












/*

struct meyve{
	
	
	  int elma,elma2,armut,armut2,sonuc;  //meyveleri yaz�yoruz
	  //iki�er �e�it elma ve armut var

};

int main(){
	
	  meyve elma,amasya,armut,deveci,toplam,toplam2;//elma armut �e�itleri yaz�ld�
	  //toplam elmalar i�in   toplam2 armutlar i�indir
	  
	  cout<<"elmalari giriniz:";
	  cin>>elma.elma>>amasya.elma2;
	  
	  //armut ve elmalar istendi
	  cout<<endl<<"armutlari giriniz:";
	  cin>>armut.armut>>deveci.armut2;
	  
	  
	  toplam.sonuc=elma.elma+amasya.elma2;
	  
	  //yukar�da elmalar a�a��da armutlar  topland� ancak ekrana bast�r�lmad�
	  
	  toplam2.sonuc=armut.armut+deveci.armut2;
	  
	  
	  
	  //ekrana bast�r�ld�
	  cout<<endl<<"elmalarin toplami:"<<toplam.sonuc<<endl;
	  cout<<"armutlarin toplami :"<<toplam2.sonuc;
	
	
	return 0;
}

*/











/*
class dikdortgen{
	
	public:
		
		int en,boy;
		
		void ata(int e,int b){
			
			en=e;
			boy=b;
		}
		
		int dikdortgenAlan(){
		
		    int alan=en*boy;
	}
};

int main(){
	
	dikdortgen dk1;
	
	cout<<"en boy giriniz";
	cin>>dk1.boy>>dk1.en;
	
	cout<<"alan:"<<dk1.dikdortgenAlan();
	
	
	return 0;	
}

*/





/*

struct rasyonel{
	int pay;
	int payda;
};


int main(){
	rasyonel sayi1,sayi2,sonuc;
	
	cout<<"sayi1 in payini giriniz:";
	cin>>sayi1.pay
	
    cout<<"sayi1 in paydasini giriniz:";
	cin>>sayi1.payda
	
	cout<<"sayi2 nin payini giriniz:";
	cin>>sayi2.pay;
	
	cout<<"sayi2 nin paydasini giriniz:";
	cin>>sayi2.payda
	
	sonuc.pay=sayi1.pay*sayi2.pay;
	sonuc.payda=sayi1.payda*sayi2.payda;
	
	cout<<"sayilarin gosterimi:"<<sayi1.pay<<"/"<<sayi1.payda<<" "<<"x"<<sayi2.pay<<"/"<<sayi2.payda<<"="<<sonuc.pay<<"/"<<sonuc.payda;
	
	return 0; 
	
}


*/







/*

class student{
	
	public: //class yap�s�nda public yazmak unutulmamal�
	
	string name; //class i�inde ten�mlar�m�z� yapt�k
};

int main(){
	
	student student1; //obje 1 imizi olu�turduk
	
	student student2; //obje 2 mizi olu�turduk
	
	student1.name="a"; //de�erlerini verdik
	student2.name="emre";
	
	cout<<"birinci ogrenci ismi:"<<student1.name<<endl; //ekrana verdi�imiz de�erleri bast�rd�k
	cout<<"ikinci ogrenci ismi:"<<student2.name<<endl;
	
	
}

*/




/*

class student{
	public: // public class ta unutulamaz
		string name;
		
		void tellName(){  // CLASS �ZELL���D�R CLASS ���NE FONK OLU�TURUP KULLANAB�L�YORUZ
			cout<<"benim adim"<<"  "<<name<<endl;  
			
		}
		
	
};
 int main(){
 	
 	student student1;  //nesnemizi olu�turduk
 	
 	student1.name="emre dikici"; //name a atama i�lemini yapt�k
 	
 	student1.tellName(); // tellName fonksiyonunu student1 i�in �a��rd�k
 	
 	return 0;
 }

*/









/*

class ogrenci{
	
	public:  //public unutulmamal�d�r
	string ad;
	string soyAdi;  //cinsleriyle yaz�ld�
	
	
	void ogrenciBilgi(){  //void fonk olu�turuldu kolayca mainde isteyebilece�iz
		
		cout<<"ogrencinin adi:"<<ad<<endl; //ad ve say adi bast�r�ld� fonk i�erisinde
		cout<<"ogrencinin soyadi:"<<soyAdi<<endl;
	}
	
};

int main(){
	
	ogrenci a;
	a.ad="emre";  //ad� atand�
	a.soyAdi="dikici";  //soy ad� atand�
	a.ogrenciBilgi(); //fonk �a��r�ld� buse nesnesi i�in
	
	return 0;
	
}

*/









/*
struct malStok{
	int kodno;
	int malMevcut;
	
}mal1,mal2; //bu �ekidede nesnemizi olu�turabilriz

int main(){
	malStok mal1,mal2;
	mal1.kodno=12;
	mal1.malMevcut=11;
	
	return 0;
}


*/










/*

struct kordinat{
	int x;  //veri tipleri giri�i yap�ld�
	int y;
	
	void merkez(){ //struct�n i�inde bir fonksiyon tan�mlad�k �a��r�nca bu de�erler g�z�kecek
	x=0;
	y=0;
	
}
	
	
};



int main(){
	
	kordinat a; //a nesnesi main i�inde olu�turuldu 
	
	a.x=5; //a nesnesinin de�erleri mainde girildi
	a.y=5;
	cout<<"x kordinati="<<a.x<<endl; //verilen de�erler bast�r�ld�
	cout<<"y kordinati="<<a.y<<endl;
	
	a.merkez(); //a i�in yapt���m�z merkez fonk �a��r�ld�
	cout<<"merkezli x kordinati="<<a.x<<endl; //bunun alt� direk fonk de�erlererini a i�in girecek
	cout<<"merkezli y kordinati"<<a.y<<endl;
	
	return 0;
	
}



*/




/*

int main(){
	
	int x=2;  
	int *prt=&x; //* ve istedi�ini yaz yine pointer alg�lar (bilgisayardaki yer ataman� g�stermek i�in)
	
	cout<<"degisken degeri="<<*prt<<endl; // *prt atad���m de�eri g�sterir
    cout<<"degisken degeri="<<x<<endl; //direk x de�eri g�sterir
    cout<<"degisken degeri="<<prt<<endl;  // d�z ptr yazarsak pc deki de�eri verir
    cout<<"degisken degeri="<<&x;  //&x dersek bilgisayar de�erini g�sterir
    
    return 0;
    
	
}
	
	
	
	
*/




/*
void degerDegistir(int *ptr){
	
	*ptr=31;
	cout<<"degisen deger:"<<*ptr;
	
	
	
}
int main(){
	
	int a=10;
	degerDegistir(&a);
	cout<<"a degeri:"<<a;
	
	
	return 0;
	
	
}

*/






/*

void degerDegistir(int *ptr){
	
	*ptr=52;
	cout<<"degisken degerimiz:"<<*ptr;
	
}

int main(){
	
	int b=56;
	degerDegistir(&b);
	cout<<"yeni b degeri:"<<b;
	
	return 0;
	
	
}







*/





/*

int main(){
	
	string dizi[]={"emre","deneme","dikici"}; //dizinin elemanlar�n� tan�mlad�k
	
	string *ptr= dizi; //dizinin ilk terimini at�yoruz
	
	cout<<"1. ismim:"<<*ptr<<endl; //ilk terimi bast�r�yoruz
	cout<<"2. ismim"<<*(ptr+1)<<endl; //2. terimi bast�r�yoruz
	cout<<"soy adim:"<<*(ptr+2); // 3.terimi bast�r�n�z
		
}
*/





/*
	int main(){
		
		string dizi[]={"emre","dikici"}; //dizinin elemanlar�n� tan�mlad�k
		
		string *zxc= &dizi[1];  //dizinin 1. eleman�n� zxc pointer�na atad�k
		string *zxcv=&dizi[0]; //dizinin 2. eleman�n� zxcv pointer�na atad�k
		
		cout<<"soy adim:"<<*zxc<<endl; //dizinin ilk terimini bast�rd�k
        cout<<"adim:"<<*zxcv;	//dizinin ikinci terimini bast�rd�k
		return 0;	
		
	}
	
*/

/*



int main(){
	int dizi[]={2,3};
	
	int *ptr=&dizi[0];
	cout<<"ilk sayim:"<<*ptr<<endl;
	
	int *ptre=&dizi[1];
	cout<<"ikinci sayim:"<<*ptre;	
}

*/



/*

int main(){
	int dizi[]={2,3};
	int *ptr=dizi;
	cout<<"ilk sayim:"<<*ptr<<endl; //ptr dizinin 0. eleman�na e�itlendi ve bast�r�ld�
	cout<<"ikinci sayim:"<<*(ptr+1); //dizinin 1. eleman� i�in *(ptr+1) yap�ld� ve bast�r�ld�
	
}

*/



/*

void degerDegistir(int &ref){
	
	ref=12;
	
}

int main(){
	
	int a=56;
	
	cout<<"a nin ilk degeri:"<<a;
	
	degerDegistir(a);
	cout<<"a nin ikinci degeri:"<<a;
}
*/
/*
void degerDegistir(int *ptr){
	
	*ptr=12;
	
}


int main(){
	
	int a=15;
	
	degerDegistir(&a);
	cout<<"a nin degeri:"<<a;	
}
*/







/*
void arasi(const int *ptr1,int *ptr2){
	
	for(;*ptr1!=*ptr2;ptr1++){
		
		cout<<"elemanlar:"<<*ptr1;
		
	}	
	
}


int main(){
	
	int dizi[]={1,2,3,4,5};
	
   arasi(dizi,dizi+4);	
	
	
}


*/




/*

int main(){
	
	int *ptr= new int; //pointerda new diyerek int bir alan tutulaca��n� s�yledik
	
  *ptr=5; //5 diye bir ptr olu�turduk bellek olu�turduk
  
  delete ptr; //silebiliyoruz
	
	
}


*/









/*
int main(){
	int *px; //pointer olu�turduk ad� px
	int *py;  //pointer (adres tutucu) py
	int x=3,y=4;
	px=&x; //px adres tutucusu 3 oldu
	py=&y;  //py adres tutucusu 4 oldu
	py=px; // x in de�eri y ye atand� e�iy oldular
	*py=5; //y yi ba�tan yeni de�er atad�k
	cout<<"px:"<<*px; //en son *px diyerek adresteki de�erini bast�rd�k 
	return 0;
} 



*/








/*	
	cout<<"px:"<<px; //deseydik bellekteki o sa�ma say�lardan olu�an �ey gelirdi dime ?
	
*/	
	

	
/* 
	
int *gos= NULL; //gos g�stergesini null a e�itlersek de�eri g�stermez 0 olmu� olur


*/



/* D�NAM�K BELLEK KULLANIMI \ PO�NTERLAR */

//D�NAM�K BELLEK ���N AYRILAN YERLERE HEAP(YI�IN) DEN�R

// int *ptr= new int; - diyor ki g�stergede bana int tipinde yeni bir yer ay�r

// int *ptr= new int(5) -5 olarak yer ayr�lm�� olur de�er atanm�� olur

// int *ptr= new dizi[] -dizi i�in de ayn� i�lemi 

// 	
	
	
	
	
	
	
	
	
	
	
	
/*	
	int main(){
	int *g= new int; //pointerda int veritipinde yer ayr�ld�
	*g=10; //poienter 10 a atand�
	cout<<"*g:"<<*g<<endl; //de�erini bast�rmak i�in <<*g
	delete g;
	cout<<g; //bellekteki yerini g�steriyor <<g
		
		return 0;
		
	}
	
*/





/*

int main(){
	int *diz;
	diz=new int [5];
	diz[1]=8;
	cout<<diz; //bellekte ayr�lan yer ��kt�
	delete diz[]; //olu�turulan yeri siler
	
	
}


*/



/*

bool fun(int *a, int *b){
	
	return a==b; //a ve b pointerlar�n�n bellek adreslerinden yola ��kar
}

int main(){
	int *x=new int; //pointerda yer ay�r int
	int *y=new int;
	cout <<"*x ve *y degeri giriniz:";
	cin>>*x>>*y;
	cout<<fun(x,y);
	
	
	
	
}

*/
/*
int main(){
	
	int sayi;
	sayi=10;
	cout<<"sayi:"<<sayi<<endl; //direk sayinin de�erini verir
	cout<<"adresi:"<<&sayi<<endl; //direk &sayi diyerek adresini ald�m
	
	int *sayiptr; //pointer tan�mlad�m
	sayiptr=&sayi; //tan�mlad���m pointera adresi atad�m
	cout<<"sayi ptr:"<<sayiptr <<endl;//yukardaki gibi adresi bast�rabildim
	cout<<"*sayiptr:"<<*sayiptr; //*sayiptr pointerin g�sterdi�i de�ere bizi d�nd�r�r sayi de�erine yani
		
	
}
*/








/*
int main(){
	int arr[3]={1,2,3};
	cout<<arr<<endl;//bellekteki adresi geldi
	
	int *ptr;
	ptr=arr; //dizide bellek atamas� yaparken �n�nde & kullanmadan yapabildik
	cout<<"ptr:"<<ptr<<endl;
	cout<<"*ptr:"<<*ptr<<endl; //eleman g�sterici dizinin ilk ekeman�n� bana verdi arr[0]=1 i g�sterdi
	cout<<"*(ptr+1):"<<*(ptr+1)<<endl; //burada dizinin bir di�er eleman�n� g�sterdik
	
}

*/










/*

int main(){
	
	int arr[5]={1,2,3,4,5}; //dizi tan�mlad�k elemanlar�n� yazd�k
	
	int *ptr; //pointer tan�mlad�k
	ptr=arr; //dizi pointera aktard�k
	
	for(int i=0;i<5;i++){
		cout<<*(ptr+i)<<endl; //bellekteki elemanlar� s�rayla bast�rtt�k
	}
	
	
}


*/


/*
class dikdortgen{
	public:
	int kisa;
	int uzun;
	
	void ata(int u,int k){   //yap�c� fonk olmadan alan buldurttuk
		kisa=k;
		uzun=u;
		
	}
	int alan(){
		return kisa*uzun;
	}
	
	
};

int main(){
	dikdortgen a;
	a.ata(5,4);
	cout<<"a dikdortgeninin alani:"<<a.alan();
	
}
*/







/*

class paralel{ 
  public:
	int taban;
	int yukseklik;
	
	void degerAta(int t,int y){ //paralel kenar�n alan�n� yap�c� olmadan class ile bulduttuk
		taban=t;
		yukseklik=y;
	}
	int alan(){
		return taban*yukseklik;
		
	}
	
};

int main(){
	paralel a;
	a.degerAta(7,10);
	cout<<"paralelin alani:"<<a.alan();
	return 0;
}

*/

/*

class ucgen{
	public:
		int alt;
		int yukseklik;
		
		
		ucgen(int a,int y){ //yap�c� fonk ile ucgen alani buldurttuk
			alt=a;
			yukseklik=y;
		}
		int alanim(){
		return (alt*yukseklik)/2;
		}
};

int main(){
	ucgen emre(10,5);
	cout<<"emre ucgeninin alani:"<<emre.alanim();
	return 0;
}

*/




/*

class daireAlani{
	public:
	int yaricap;
	
	daireAlani(int y){ //yap�c� fonk ile dairenin alanini buldurttuk
		yaricap=y;
	}
	
	int alan(){
		return 3*(yaricap*yaricap);
	}
};

int main(){
	daireAlani x(5);
	cout<<"dairenin alaninin degeri:"<< x.alan();
	return 0;
	
}

*/





/*

class kare{
	public:
		int kenar;
		
		void ata(int k){ //yap�c� olmadan yapt�k
			kenar=k;
		}
		int kareninAlani(){
			return kenar*kenar;
		}
};

int main(){
	kare emreDikici; //yap�c� olmadan �nce nesnemizi �stte olu�turduk
	emreDikici.ata(10); //sonra . ile ata fonk �a��r�p i�ine de�eri koyduk
	cout<<"emre karesinin alani:"<<emreDikici.kareninAlani(); //alan� yazd�rd�k

}

*/

/*
class dikdortgen{
	public:
		int kisa;
		int uzun;
		
		void degerAta(int k,int u){ // yap�c� fonk kullanmadan yapt�k
			kisa=k;
			uzun=u;
		}
		
		int dikAlan(){
			return kisa*uzun;
		}
};

int main(){
	dikdortgen emrem; //yap�c�s�z yani void ile �nce �stte bir emrem dikd�rtgen nesnesi olu�turduk
	emrem.degerAta(12,10); //sonra emrem i�in degerata fonk �a��r�p i�ini doldurduk
	cout<<"dikdortgenin alani:"<<emrem.dikAlan(); //en son alan i�in emrem.dikalan fonk �a��rd�k ve alan nast�r�lm�� oldu
	return 0;
}

*/







/*
class kordinat{
	public:
		int x;
		int y;
		
		kordinat(int a,int b){ //yap�c� fonk ile kordinat olu�turduk
			x=a;
			y=b;
		}
		
		int xAl(){ //x alma i�lemi i�in fonk olu�turuduk
			return x;
		}
	
};
  int main(){
  	kordinat bir(14,5);
  	kordinat iki(70,10);
  	kordinat uc(0,0);
  	
  	cout<<"birin x i:"<<bir.xAl()<<endl;
  	cout<<"ikincinin x i:"<<iki.xAl()<<endl;
  	cout<<"ucuncunun x i:"<<uc.xAl()<<endl;
  	
  	return 0;
  }

*/






/*
class bir{
	public:
		int x;
		float y;
		
		bir(int a,float b):x(a),y(b){ //farkl� bir yap� kulland�k
		}
};
int main(){
	bir n1(1,2.5); //nesnelerimizi olu�turduk
	bir n2(0,0);
	n2=n1; //n1 i n2 ye atad�k
	cout<<"n2="<<n2.y;
}
*/









//miras konusu ilk hoca �rne�i//

//karenin alan�n� bast�rma �rne�i
/*
class sekil{ //�ekil diye bir class olu�turduk
	public:
		int alan;
		string birim;
		string sekilTuru;
		
		sekil(){
			birim="cm2";// yap�c�d�r yazmasakta olur kod �al��abilir
		}
		
	 void alanYazdir(){
	 	cout<<sekilTuru<<" "<<alan<<" "<<birim<<"  "<<"alana sahiptir"<<endl;
	 }

};
class kare:public sekil{
	public:
		int kenar;
		
};

int main(){
	kare k1;
	k1.kenar=10;
	k1.alan=k1.kenar*k1.kenar;
	k1.alanYazdir();
}


*/





/*

class a{   // a nesnesi olu�turduk
	public:
		int x;
		 void xAta(int x1){ //x e de�er vetmek i��in ata fonk olu�turduk
		 	x=x1;
		 }
		 int xAl(){  // o x i d�nd�rmek i�in x al fonk olu�turuduk
		 	return x;
		 }
};

class b:public a{  //yeni b class� i�in a clss�ndan miras ald�k
	public:
		int n;
		void nAta(int n1){  //n de�eri alabilmek i�in ata fonk kulland�k
			n=n1;
		}
	int nAl(){ //n degerini bast�rmak i�in n al fonk ile n de�erini d�nd�rd�k
		return n;
	}
	
};

int main(){
	b nesne; //yeni bir b calass�ndan nesne isimli nesne olu�turuk
	nesne.xAta(5); //nesnenin x ine 5 atad�k
	nesne.nAta(3); //nesnenin n sine 3 atad�k
	cout<<"x in degeri:"<<nesne.xAl()<<endl;  //x de�erini bast�rd�k
	cout<<"n nin degeri:"<<nesne.nAl(); //n de�erini bast�rd�k
}

*/

/*

class ogrenci{
	public:
		int no;                        //�ALI�MIYOR NEDEN B�LM�YORUM
		ogrenci(int no1){
			no=no1;
	}
		int al(){
			return no;
		}
};
class ogretmen{
	public:
		int sicil;
		ogretmen(int sicil1){
			sicil=sicil1;
		}
		int sicilAl(){
			return sicil;
		}
};
class asistan:public ogrenci,public ogretmen{
	public:
		asistan(no,sicil){
			ogrenci=no;
			ogretmen=sicil;
		}
};


   int main(){
   	int no=123;
   	int sicil=987;
   	asistan asistan(no,sicil);
   	cout<<"no:"<<asistan.al()<<endl;
   	cout<<"sicil:"<<asistan.sicilAl();
   	
   	return 0;
   	
   }

*/









/*
void mesaj(){ //de�er d�nd�rmeyen void fonk olu�turduk
	cout<<"ben EMre Dikici";
	cout<<"bil muhendislik okuyorum";
}

int main(){
	mesaj();  //buradada bu fonk �a��rd�k
	
}

*/



/*
int kuvvetAl(int sayi,int kuvvet){  //kuvvet alma fonk olu�turduk
	int sonuc=1;
	for(int i=1;i<=kuvvet;i++){
		sonuc=sonuc*sayi;
	     return sonuc;
	}

}

int main(){
	cout<<kuvvetAl(5,2);
}

*/


/*
//OLMUYOR
void buyuk(float a,float b){
	cout<<"sayilarin buyugu:";
	for(a>b);
		cout<<a<<endl;
	
	else;
		cout<<b<<endl;
	
}

int main(){
	int x;
	int y;
	cout<<"sayilari giriniz:";
	cin>>x>>y;
	buyuk(x,y);
}


*/












/*
  double alan(){ //alan fonk olu�turduk
	double en;  //en boy i�in tan�mlama yapt�k
	double boy;
	cout<<"en ve boy giriniz"; // en boy girdirrttik
	cin>>en>>boy;
	
	return en*boy;
}

int main(){
	double sonuc; //bir sonuc olu�turduk
	
	sonuc=alan(); //sonucu alan fonk a e�itledik
	cout<<"alan:"<<sonuc; //sonucu �a��rd�k
	
}
*/



/*

void guzel(int a,int &b){ //&de�er de�i�tir olarak kullan�ld� ne yazarsan yaz ikinci de�er hep 6 gelecek
	a=5;
	b=6;
	cout<<"a="<<a<<"b="<<b<<endl;
}

int main(){
	int i=10;
	int j=20;
	guzel(i,j); //guzel fonk �a��r�ld�
	cout<<"i="<<i<<"j="<<j<<endl;  //bast�r�ld�
	
}

*/





/*


struct kordinat{
	int x;
	int y;
	
	void merkez(){
		int x=0;
		int y=0;
	}
};

int main(){
	kordinat a;
	a.x=5;
	cout<<a.x<<endl; //yukardaki 5 i yaz�yor
    a.merkez();
}


*/












































































	
	
	
	

	
	
	
	






























































































































































