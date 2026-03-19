#include <iostream>

using namespace std;

// two num and all odds between
//int main(){
//
//int a, b;
//cin >> a >> b;
//
//int i = a;
//while (i < b){
//  if (i % 2 == 1){
//        cout << i << endl;
//   }
//
//   i++;
//}
//
//return 0;
//
//}

// arrays - massivebi

//int main(){
//
//    int n;
//    cout << "sheiyvanet sagnebis raodenoba: ";
//    cin >> n;
//
//    int qula[n];
//   double sum = 0;
//    for (int i = 0; i < n; i++) {
//        cout << i + 1 << "sagnis qula: ";
//       cin >> qula[i];
//        sum += qula[i];
//
//    }
//
//   int max = qula[0];
//    int min = qula[0];
//    double avg = sum / n;
//
//  for (int i = 1; i < n; i++){
//    if(max < qula[i]){
//        max = qula[i];
//    }if (min < qula[i]){
//       min = qula[i];
//    }
//
//  }
//
//  cout << "min: " << min << endl;
//  cout << "max: " << max << endl;
//  cout << "avg: " << avg << endl;
//
//  return 0;
//
//}


// sehmodis ricxvi da unda vipovot gamyofebi da gamyofebis jami
int main(){

    int n;
    cout << "sheiyvanet ricxvi: " << endl;
    cin >> n;

    int sum = 0;
    for (int i = 1; i < n; i++){
        if (n % i == 0){
            cout << i << "aris gamyofi" << endl;
            sum += i;
        }

    }

    cout << "gamyofebis jamia" << sum << endl;

    return 0;
}



