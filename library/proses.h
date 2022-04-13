#include <iostream>
using namespace std;
class Proses{
	public :
	void cetak(){
		cout<<"=========================================\n";
		cout<<"Masukkan Banyak Bilangan Fibbonaci : ";
		cin>>banyakBil;
		cout<<"=========================================\n";
	}
	int fibonacci(int banyakBil){
      if (banyakBil == 0 || banyakBil ==1){
        return banyakBil;
      } 
      else{
        return (fibonacci(banyakBil-1) + fibonacci(banyakBil-2));
      }
    }
  	void toFile(){
		tulis_data.open("api_data_2.txt");
    	for(int i = 0 ; i<banyakBil; i++){
      		tulis_data << fibonacci(i) << " ";
    	}
		tulis_data.close();
	}

	private :
	int banyakBil;
	ofstream tulis_data;
};
