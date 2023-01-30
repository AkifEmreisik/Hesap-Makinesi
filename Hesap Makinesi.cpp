#include<iostream>

int main(){
	std::cout<<"Carpma icin 1 i toplama icin 2 yi cıkarma icin 3 u bolme icin 4 u tuslayiniz"<<std::endl;
	int a;
	std::cin>> a;
	int b;
	int c;
	if(a==1)
	{
		std::cout<<"birinci sayıyı giriniz"<<std::endl;
		std::cin>>b;
		std::cout<<"İkinci sayiyi giriniz"<<std::endl;
		std::cin>>c;
		std::cout<<"sonuc=";
		std::cout<<b*c;
	}
	else if(a==2)
		{
			std::cout<<"birinci sayıyı giriniz"<<std::endl;
			std::cin>>b;
			std::cout<<"İkinci sayiyi giriniz"<<std::endl;
			std::cin>>c;
			std::cout<<"sonuc=";
			std::cout<<b+c;
		}
	else if(a==3)
		{
			std::cout<<"birinci sayıyı giriniz"<<std::endl;
			std::cin>>b;
			std::cout<<"İkinci sayiyi giriniz"<<std::endl;
			std::cin>>c;
			std::cout<<"sonuc=";
			std::cout<<b-c;		
		}
	else if(a==4)
		{
			std::cout<<"birinci sayıyı giriniz"<<std::endl;
			std::cin>>b;
			std::cout<<"İkinci sayiyi giriniz"<<std::endl;
			std::cin>>c;
			std::cout<<"sonuc=";
			std::cout<<b/c;
		}
		else
			std::cout<<"yanlis karakter tusladiniz";
			
	return 0;
}
