#include <iostream>
using namespace std;
class Output{
	public : 
	void cetak(){
		cout<<"Hasil Bilangan Fibonacci : "<<endl;
	}
	void getData(){
		ambil_data.open("api_data_2.txt");
		if(ambil_data.is_open()){
			string data_file;
			while(ambil_data >> data_file){
				cout << data_file<<" ";
			}
		}
		ambil_data.close();

	}

	private : 
	ifstream ambil_data;
	string data_file[100];
	int index = 0;
};
