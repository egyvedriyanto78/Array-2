#include <iostream>
using namespace std;

int main(){
	int matrikordo [5][6]={{11,22,33,44,55,66},{77,88,99,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24},{25,26,27,28,29,30}};
	
	int i, j;
	
	cout<<"\t****************************"<<endl;
	cout<<"\t===== Matriks Ordo 5x6 ====="<<endl;
	cout<<"\t****************************"<<endl;
	
	cout<<"\nMenampilkan matrik ordo\n";
	for(i=0; i<5; i++){
		for(j=0; j<6; j++){
			cout<<matrikordo[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
