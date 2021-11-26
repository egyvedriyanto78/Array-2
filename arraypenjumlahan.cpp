#include <iostream>
using namespace std;

int main(){
	system ("color 8");
	
	int angka[5] = {1,2,3,4,5};
	int jumlah;
	
	for (int i=0; i<5; i++){
		jumlah += angka [i];
	}
	cout << jumlah<<endl;
	
	return 0;
}
