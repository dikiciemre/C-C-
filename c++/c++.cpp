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
                         //toplama adýnda fonksiyon kuruldu ve içine hangi deðerlerin toplanacaðý yazýldý	
	return a+b;
}


int carpma(int a,int b){
	
	return a*b;       //toplamadaki ayný iþlem yapýldý
}



int main(int argc, char** argv){
	
	cout<<"toplami:"<<	toplama(3,25)<<endl;//toplama(3,25) in anlamý toplama fonksiyonunda 3 ile 25 sayýlarýný topla
	cout<<"carpimi:"<<	carpma(3,25);	      //burda da 3ile 25 sayýlarýný çarp anlamýna geliyor

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
	int en;     //prizmanýn elemanlarýný girdik
	int boy;
	int sonuc;
};

int main(int argc, char** argv){
     
     prizmaHacmi yukseklik1,boy1,en1,hacim;  //elemanlarý tekrar tanýmladýk
     
     
	 cout<<"prizmanin yuksekligini giriniz:";     
     cin>>yukseklik1.yukseklik;                    
                                                  //prizma deðerlerini istedik
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
struct ucgenAlan{ //ucgenalan adýnda struct belirledik
	
	int altTaban,yukseklik,sonuc; //ucgende alaný bulmak için ne lazým ise yazdýk
};

   int main(int argc, char** argv){
   
       ucgenAlan alttaban1,yukseklik1,alan; 
	    //main fonksiyonunda tekrar yazdýk çünkü main baþka bir fonksiyon yukardan baðýmsýz
        // deðerlerimizi main için yeniden tanýmladýk diyebiliriz
       
       cout<<"ucgenin alttaban uzunlugunu giriniz: ";
       cin>>alttaban1.altTaban;      //ucgenin alttaban uzunluðunu istedik
   
       cout<<"ucgenin yuksekligini giriniz: ";
       cin>>yukseklik1.yukseklik;

       alan.sonuc= (alttaban1.altTaban*yukseklik1.yukseklik)/2; // alaný buldurduk
       
       cout<<"ucgenin alani:"<<alan.sonuc; //alaný ekrana bastýrdýk
       
return 0;
   }

*/







/*
void ucgenAlan(int yukseklik,int altTaban){
//void yani belirsiz bir fonksiyon oluþturduk ve içine kullanacaðýmýz deðerleri girdik
	
cout<< "ucgenin alani:"<<(yukseklik*altTaban)/2; 
//bu fonksiyon içiçnde çalýþacak formülü girdik burada formülümüz ucgen alan formülü
	
}

int main(){
	
	ucgenAlan(24,6);
	 //ucgen alaný için kullanacaðýmýz deðerleri kendimiz girdik

    return 0;	
}
*/






/*
void faktoriyel (int sayi){
	int faktoriyel=1;
	
	for(int i=2; i<=sayi;i++){
		faktoriyel*=i;
		
	}
	cout<<"faktöriyel:"<<faktoriyel;
	
	
}

int main(){
	int sayi;
	cout<<"sayý gir:";
	cin>>sayi;
	faktoriyel(sayi);
}
*/






/*

void topla(int a, int b){
 //topla adýnda fonksiyona toplanacak deðer isimlerini girdik
	
	int toplam;                 |
	toplam=a+b;                 |--> //toplam adýnda deðer tanýmladýk neleri toplayacaðýmýzý yazdýk 
	cout<<"toplam:"<<toplam;    |    // ekrana bastýrdýk yani void topla fonksiyonumuz a ile b yi topluyor 
}

int main(){
	
	int a; int b;  //main fonksiyonu için tekrar taným yaptýk
	
	cout<< "sayýlarý giriniz:";
	cin >> a>> b;  //sayýlarý istedik
	topla(a,b); //void fonksiyonunu çaðýrdýk
}
*/









/*

int carpim (int a,int b){
	return a*b;

}

int main(){
	int a, b;
	cout <<"sayý giriniz";
	cin>> a>>b;
	cout<<	"sonuc:"<<carpim(a,b);
	
}

*/









/*
int toplam(int a, int b){
//bu da fonksyonun cinsi belirli ise (int,string vs)return kalýbý ile kolayca fonksiyonu döndürebiliriz
	return a+b;
}

int main(){
	
	int a,b;//sayýlarý tanýmladýk
	
	cout<<"sayilari giriniz";
	cin>>a>>b;  //sayýlarý kullanýcýdan istedik
	
	cout<<"toplam="<<toplam(a,b);  //ekrana bastýrdýk
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

class dikdortgen{  //class oluþturduk
	
	public: //bunu yazmayý unutma public olmasý sonra da kullanýlabilir olmasý demek
		
	   int en,boy;   //deðerlerimizi tanýmladýk
	   
	   void ata(int e,int b){  //void ata fonksiyonu ile  < e deðerini en'e >   < b deðerini boy'a atadýk >
	   	
	       en=e;    //atama iþlemleri yapýldý
		   boy=b;	
	   }
	   
	   int alan(){
	   	       //alan fonksiyonu ile dikdortgenin alaný bulundu
	   	   int alan= en*boy;
	   
	   }
};

int main(){
	
	dikdortgen dk1; //dk isimli bir dikdortgen tanýmladým
	
	dk1.ata(4,5);   //dk isimli dikdörtgene en'e 4  boy'a 5 deðerini atadýk
	
	cout<<"alan:"<<dk1.alan();   //alan fonksiyonunu çaðýrarak ekrana bastýrdýk 
	
	
	return 0;
}

*/










/*
 class nokta{ //nokta adýnda class oluþtu
 	
	public:  //bunu yazmayý unutma public olmasý sonra da kullanýlabilir olmasý demek
		
		int x,y; //kullanacaðýmýz deðerler
		
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
	
	
	  int elma,elma2,armut,armut2,sonuc;  //meyveleri yazýyoruz
	  //ikiþer çeþit elma ve armut var

};

int main(){
	
	  meyve elma,amasya,armut,deveci,toplam,toplam2;//elma armut çeþitleri yazýldý
	  //toplam elmalar için   toplam2 armutlar içindir
	  
	  cout<<"elmalari giriniz:";
	  cin>>elma.elma>>amasya.elma2;
	  
	  //armut ve elmalar istendi
	  cout<<endl<<"armutlari giriniz:";
	  cin>>armut.armut>>deveci.armut2;
	  
	  
	  toplam.sonuc=elma.elma+amasya.elma2;
	  
	  //yukarýda elmalar aþaðýda armutlar  toplandý ancak ekrana bastýrýlmadý
	  
	  toplam2.sonuc=armut.armut+deveci.armut2;
	  
	  
	  
	  //ekrana bastýrýldý
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
	
	public: //class yapýsýnda public yazmak unutulmamalý
	
	string name; //class içinde tenýmlarýmýzý yaptýk
};

int main(){
	
	student student1; //obje 1 imizi oluþturduk
	
	student student2; //obje 2 mizi oluþturduk
	
	student1.name="a"; //deðerlerini verdik
	student2.name="emre";
	
	cout<<"birinci ogrenci ismi:"<<student1.name<<endl; //ekrana verdiðimiz deðerleri bastýrdýk
	cout<<"ikinci ogrenci ismi:"<<student2.name<<endl;
	
	
}

*/




/*

class student{
	public: // public class ta unutulamaz
		string name;
		
		void tellName(){  // CLASS ÖZELLÝÐÝDÝR CLASS ÝÇÝNE FONK OLUÞTURUP KULLANABÝLÝYORUZ
			cout<<"benim adim"<<"  "<<name<<endl;  
			
		}
		
	
};
 int main(){
 	
 	student student1;  //nesnemizi oluþturduk
 	
 	student1.name="emre dikici"; //name a atama iþlemini yaptýk
 	
 	student1.tellName(); // tellName fonksiyonunu student1 için çaðýrdýk
 	
 	return 0;
 }

*/









/*

class ogrenci{
	
	public:  //public unutulmamalýdýr
	string ad;
	string soyAdi;  //cinsleriyle yazýldý
	
	
	void ogrenciBilgi(){  //void fonk oluþturuldu kolayca mainde isteyebileceðiz
		
		cout<<"ogrencinin adi:"<<ad<<endl; //ad ve say adi bastýrýldý fonk içerisinde
		cout<<"ogrencinin soyadi:"<<soyAdi<<endl;
	}
	
};

int main(){
	
	ogrenci a;
	a.ad="emre";  //adý atandý
	a.soyAdi="dikici";  //soy adý atandý
	a.ogrenciBilgi(); //fonk çaðýrýldý buse nesnesi için
	
	return 0;
	
}

*/









/*
struct malStok{
	int kodno;
	int malMevcut;
	
}mal1,mal2; //bu þekidede nesnemizi oluþturabilriz

int main(){
	malStok mal1,mal2;
	mal1.kodno=12;
	mal1.malMevcut=11;
	
	return 0;
}


*/










/*

struct kordinat{
	int x;  //veri tipleri giriþi yapýldý
	int y;
	
	void merkez(){ //structýn içinde bir fonksiyon tanýmladýk çaðýrýnca bu deðerler gözükecek
	x=0;
	y=0;
	
}
	
	
};



int main(){
	
	kordinat a; //a nesnesi main içinde oluþturuldu 
	
	a.x=5; //a nesnesinin deðerleri mainde girildi
	a.y=5;
	cout<<"x kordinati="<<a.x<<endl; //verilen deðerler bastýrýldý
	cout<<"y kordinati="<<a.y<<endl;
	
	a.merkez(); //a için yaptýðýmýz merkez fonk çaðýrýldý
	cout<<"merkezli x kordinati="<<a.x<<endl; //bunun altý direk fonk deðerlererini a için girecek
	cout<<"merkezli y kordinati"<<a.y<<endl;
	
	return 0;
	
}



*/




/*

int main(){
	
	int x=2;  
	int *prt=&x; //* ve istediðini yaz yine pointer algýlar (bilgisayardaki yer atamaný göstermek için)
	
	cout<<"degisken degeri="<<*prt<<endl; // *prt atadýðým deðeri gösterir
    cout<<"degisken degeri="<<x<<endl; //direk x deðeri gösterir
    cout<<"degisken degeri="<<prt<<endl;  // düz ptr yazarsak pc deki deðeri verir
    cout<<"degisken degeri="<<&x;  //&x dersek bilgisayar deðerini gösterir
    
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
	
	string dizi[]={"emre","deneme","dikici"}; //dizinin elemanlarýný tanýmladýk
	
	string *ptr= dizi; //dizinin ilk terimini atýyoruz
	
	cout<<"1. ismim:"<<*ptr<<endl; //ilk terimi bastýrýyoruz
	cout<<"2. ismim"<<*(ptr+1)<<endl; //2. terimi bastýrýyoruz
	cout<<"soy adim:"<<*(ptr+2); // 3.terimi bastýrýnýz
		
}
*/





/*
	int main(){
		
		string dizi[]={"emre","dikici"}; //dizinin elemanlarýný tanýmladýk
		
		string *zxc= &dizi[1];  //dizinin 1. elemanýný zxc pointerýna atadýk
		string *zxcv=&dizi[0]; //dizinin 2. elemanýný zxcv pointerýna atadýk
		
		cout<<"soy adim:"<<*zxc<<endl; //dizinin ilk terimini bastýrdýk
        cout<<"adim:"<<*zxcv;	//dizinin ikinci terimini bastýrdýk
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
	cout<<"ilk sayim:"<<*ptr<<endl; //ptr dizinin 0. elemanýna eþitlendi ve bastýrýldý
	cout<<"ikinci sayim:"<<*(ptr+1); //dizinin 1. elemaný için *(ptr+1) yapýldý ve bastýrýldý
	
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
	
	int *ptr= new int; //pointerda new diyerek int bir alan tutulacaðýný söyledik
	
  *ptr=5; //5 diye bir ptr oluþturduk bellek oluþturduk
  
  delete ptr; //silebiliyoruz
	
	
}


*/









/*
int main(){
	int *px; //pointer oluþturduk adý px
	int *py;  //pointer (adres tutucu) py
	int x=3,y=4;
	px=&x; //px adres tutucusu 3 oldu
	py=&y;  //py adres tutucusu 4 oldu
	py=px; // x in deðeri y ye atandý eþiy oldular
	*py=5; //y yi baþtan yeni deðer atadýk
	cout<<"px:"<<*px; //en son *px diyerek adresteki deðerini bastýrdýk 
	return 0;
} 



*/








/*	
	cout<<"px:"<<px; //deseydik bellekteki o saçma sayýlardan oluþan þey gelirdi dime ?
	
*/	
	

	
/* 
	
int *gos= NULL; //gos göstergesini null a eþitlersek deðeri göstermez 0 olmuþ olur


*/



/* DÝNAMÝK BELLEK KULLANIMI \ POÝNTERLAR */

//DÝNAMÝK BELLEK ÝÇÝN AYRILAN YERLERE HEAP(YIÐIN) DENÝR

// int *ptr= new int; - diyor ki göstergede bana int tipinde yeni bir yer ayýr

// int *ptr= new int(5) -5 olarak yer ayrýlmýþ olur deðer atanmýþ olur

// int *ptr= new dizi[] -dizi için de ayný iþlemi 

// 	
	
	
	
	
	
	
	
	
	
	
	
/*	
	int main(){
	int *g= new int; //pointerda int veritipinde yer ayrýldý
	*g=10; //poienter 10 a atandý
	cout<<"*g:"<<*g<<endl; //deðerini bastýrmak için <<*g
	delete g;
	cout<<g; //bellekteki yerini gösteriyor <<g
		
		return 0;
		
	}
	
*/





/*

int main(){
	int *diz;
	diz=new int [5];
	diz[1]=8;
	cout<<diz; //bellekte ayrýlan yer çýktý
	delete diz[]; //oluþturulan yeri siler
	
	
}


*/



/*

bool fun(int *a, int *b){
	
	return a==b; //a ve b pointerlarýnýn bellek adreslerinden yola çýkar
}

int main(){
	int *x=new int; //pointerda yer ayýr int
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
	cout<<"sayi:"<<sayi<<endl; //direk sayinin deðerini verir
	cout<<"adresi:"<<&sayi<<endl; //direk &sayi diyerek adresini aldým
	
	int *sayiptr; //pointer tanýmladým
	sayiptr=&sayi; //tanýmladýðým pointera adresi atadým
	cout<<"sayi ptr:"<<sayiptr <<endl;//yukardaki gibi adresi bastýrabildim
	cout<<"*sayiptr:"<<*sayiptr; //*sayiptr pointerin gösterdiði deðere bizi döndürür sayi deðerine yani
		
	
}
*/








/*
int main(){
	int arr[3]={1,2,3};
	cout<<arr<<endl;//bellekteki adresi geldi
	
	int *ptr;
	ptr=arr; //dizide bellek atamasý yaparken önünde & kullanmadan yapabildik
	cout<<"ptr:"<<ptr<<endl;
	cout<<"*ptr:"<<*ptr<<endl; //eleman gösterici dizinin ilk ekemanýný bana verdi arr[0]=1 i gösterdi
	cout<<"*(ptr+1):"<<*(ptr+1)<<endl; //burada dizinin bir diðer elemanýný gösterdik
	
}

*/










/*

int main(){
	
	int arr[5]={1,2,3,4,5}; //dizi tanýmladýk elemanlarýný yazdýk
	
	int *ptr; //pointer tanýmladýk
	ptr=arr; //dizi pointera aktardýk
	
	for(int i=0;i<5;i++){
		cout<<*(ptr+i)<<endl; //bellekteki elemanlarý sýrayla bastýrttýk
	}
	
	
}


*/


/*
class dikdortgen{
	public:
	int kisa;
	int uzun;
	
	void ata(int u,int k){   //yapýcý fonk olmadan alan buldurttuk
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
	
	void degerAta(int t,int y){ //paralel kenarýn alanýný yapýcý olmadan class ile bulduttuk
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
		
		
		ucgen(int a,int y){ //yapýcý fonk ile ucgen alani buldurttuk
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
	
	daireAlani(int y){ //yapýcý fonk ile dairenin alanini buldurttuk
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
		
		void ata(int k){ //yapýcý olmadan yaptýk
			kenar=k;
		}
		int kareninAlani(){
			return kenar*kenar;
		}
};

int main(){
	kare emreDikici; //yapýcý olmadan önce nesnemizi üstte oluþturduk
	emreDikici.ata(10); //sonra . ile ata fonk çaðýrýp içine deðeri koyduk
	cout<<"emre karesinin alani:"<<emreDikici.kareninAlani(); //alaný yazdýrdýk

}

*/

/*
class dikdortgen{
	public:
		int kisa;
		int uzun;
		
		void degerAta(int k,int u){ // yapýcý fonk kullanmadan yaptýk
			kisa=k;
			uzun=u;
		}
		
		int dikAlan(){
			return kisa*uzun;
		}
};

int main(){
	dikdortgen emrem; //yapýcýsýz yani void ile önce üstte bir emrem dikdörtgen nesnesi oluþturduk
	emrem.degerAta(12,10); //sonra emrem için degerata fonk çaðýrýp içini doldurduk
	cout<<"dikdortgenin alani:"<<emrem.dikAlan(); //en son alan için emrem.dikalan fonk çaðýrdýk ve alan nastýrýlmýþ oldu
	return 0;
}

*/







/*
class kordinat{
	public:
		int x;
		int y;
		
		kordinat(int a,int b){ //yapýcý fonk ile kordinat oluþturduk
			x=a;
			y=b;
		}
		
		int xAl(){ //x alma iþlemi için fonk oluþturuduk
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
		
		bir(int a,float b):x(a),y(b){ //farklý bir yapý kullandýk
		}
};
int main(){
	bir n1(1,2.5); //nesnelerimizi oluþturduk
	bir n2(0,0);
	n2=n1; //n1 i n2 ye atadýk
	cout<<"n2="<<n2.y;
}
*/









//miras konusu ilk hoca örneði//

//karenin alanýný bastýrma örneði
/*
class sekil{ //þekil diye bir class oluþturduk
	public:
		int alan;
		string birim;
		string sekilTuru;
		
		sekil(){
			birim="cm2";// yapýcýdýr yazmasakta olur kod çalýþabilir
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

class a{   // a nesnesi oluþturduk
	public:
		int x;
		 void xAta(int x1){ //x e deðer vetmek iççin ata fonk oluþturduk
		 	x=x1;
		 }
		 int xAl(){  // o x i döndürmek için x al fonk oluþturuduk
		 	return x;
		 }
};

class b:public a{  //yeni b classý için a clssýndan miras aldýk
	public:
		int n;
		void nAta(int n1){  //n deðeri alabilmek için ata fonk kullandýk
			n=n1;
		}
	int nAl(){ //n degerini bastýrmak için n al fonk ile n deðerini döndürdük
		return n;
	}
	
};

int main(){
	b nesne; //yeni bir b calassýndan nesne isimli nesne oluþturuk
	nesne.xAta(5); //nesnenin x ine 5 atadýk
	nesne.nAta(3); //nesnenin n sine 3 atadýk
	cout<<"x in degeri:"<<nesne.xAl()<<endl;  //x deðerini bastýrdýk
	cout<<"n nin degeri:"<<nesne.nAl(); //n deðerini bastýrdýk
}

*/

/*

class ogrenci{
	public:
		int no;                        //ÇALIÞMIYOR NEDEN BÝLMÝYORUM
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
void mesaj(){ //deðer döndürmeyen void fonk oluþturduk
	cout<<"ben EMre Dikici";
	cout<<"bil muhendislik okuyorum";
}

int main(){
	mesaj();  //buradada bu fonk çaðýrdýk
	
}

*/



/*
int kuvvetAl(int sayi,int kuvvet){  //kuvvet alma fonk oluþturduk
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
  double alan(){ //alan fonk oluþturduk
	double en;  //en boy için tanýmlama yaptýk
	double boy;
	cout<<"en ve boy giriniz"; // en boy girdirrttik
	cin>>en>>boy;
	
	return en*boy;
}

int main(){
	double sonuc; //bir sonuc oluþturduk
	
	sonuc=alan(); //sonucu alan fonk a eþitledik
	cout<<"alan:"<<sonuc; //sonucu çaðýrdýk
	
}
*/



/*

void guzel(int a,int &b){ //&deðer deðiþtir olarak kullanýldý ne yazarsan yaz ikinci deðer hep 6 gelecek
	a=5;
	b=6;
	cout<<"a="<<a<<"b="<<b<<endl;
}

int main(){
	int i=10;
	int j=20;
	guzel(i,j); //guzel fonk çaðýrýldý
	cout<<"i="<<i<<"j="<<j<<endl;  //bastýrýldý
	
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
	cout<<a.x<<endl; //yukardaki 5 i yazýyor
    a.merkez();
}


*/












































































	
	
	
	

	
	
	
	






























































































































































