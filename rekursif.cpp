#include<iostream>
using namespace std;

class Operator{
	friend ostream& operator<<(ostream&,Operator);
	friend istream& operator<<(istream&,Operator);
	
	public:
		long rek(int n);
		long iti(int n);
	
	private:
		int n;
	
};


long Operator::rek(int n){//rekursif
    if (n == 0 || n ==1){
    return n;
  } 
  else {
    return (rek(n-1) + rek(n-2));
  }	
}

long Operator::iti(int n){
	int a=1;
    int b=1;
    int c;
  
    cout << a << " " << b;
  
    for (int i=1; i<=n-2; i++) {
        c= a+b;
        cout<< " "<<c;
  
        a=b;
        b=c;
    }
    return 0;
}


int main(){
	int n;
	cout<<"angka :";
	cin>>n;
	Operator run;
	cout<<run.rek(n);
	cout<<endl;
	cout<<run.iti(n);
}
