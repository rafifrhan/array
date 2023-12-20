#include <iostream>
using namespace std;
   
int main(){
int input[100], n, i;
  float total, rata2;
 
  cout << "Input jumlah element array: ";
  cin >> n;
 
  cout << "Input "<< n << " angka : " ;
  cout << endl;
 
 
  for(i = 0; i < n; i++){
    cin >> input[i];
  }
 
  cout << endl;
 
 
  total = 0;
  for(i = 0; i < n; i++){
    total = total+input[i];
  }
 

  rata2 = (total/n);
  cout << "Total :" << total<<endl;
  cout << "Nilai rata-rata dari "<< n <<
          " inputan adalah: " << rata2;
 
  cout << endl;
  return 0;
}


 
