#include <iostream>
using namespace std;


int main(){
	int angka_satu;
	int angka_dua;
	char oprator;
	
		
		cout<<"MINI CALCULATOR by erqyan_ "<<endl;
		cout<<"==========================="<<endl<<endl;
		cout<<"+ untuk pertambahan "<<endl;
		cout<<"- untuk pengurangan "<<endl;
		cout<<"* untuk perkalian "<<endl;
		cout<<"/ untuk pembagian "<<endl;
		cout<<"% untuk sisa dari pembagian "<<endl<<endl;
		cout<<"SEMOGA BERMANFAAT>< "<<endl<<endl;
		
		
		cout<<"apa yang anda butuhkan? ";
		cin>>oprator;
		
		if (oprator=='+'){
		cout<< "PERTAMBAHAN "<<endl<<"======================"<<endl;
	}
		else if (oprator=='-'){
		cout<< "PENGURANGAN "<<endl<<"======================"<<endl;
	}
		else if (oprator=='*'){
		cout<< "PERKALIAN "<<endl<<"======================"<<endl;
	}
		else if (oprator=='/'){
		cout<< "PEMBAGIAN "<<endl<<"======================"<<endl;
	}
		else if (oprator=='%'){
		cout<< "HASIL BAGI "<<endl<<"======================"<<endl;
	}
		else{ 
		cout<< "OPERATOR TIDAK DITEMUKAN:("<<endl<<"======================"<<endl;
		}
		
		cout<<"masukkan angka kesatu: ";
		cin>>angka_satu;
	
		cout<<"masukkan angka kedua: ";
		cin>>angka_dua;
	
		 if (oprator=='+'){
		cout<< "hasil dari pertambahan "<<angka_satu <<" ditambah "<<angka_dua<<" adalah "<<angka_satu+angka_dua;
	}
		else if (oprator=='-'){
		cout<< "hasil dari pengurangan "<<angka_satu <<" dikurangi "<<angka_dua<<" adalah "<<angka_satu-angka_dua;
	}
		else if (oprator=='*'){
		cout<< "hasil dari perkalian "<<angka_satu <<" dikali "<<angka_dua<<" adalah "<<angka_satu*angka_dua;
	}
		else if (oprator=='/'){
		cout<< "hasil dari pembagian "<<angka_satu <<" dibagi "<<angka_dua<<" adalah "<<angka_satu/angka_dua;
	}
		else if (oprator=='%'){
		cout<< "hasil dari sisa bagi "<<angka_satu <<" sisa bagi "<<angka_dua<<" adalah "<<angka_satu%angka_dua;
	}
		else{ 
		cout<<"operator tidak ditemukan:(";
		}
		

		return 0;



	
	
	
}
