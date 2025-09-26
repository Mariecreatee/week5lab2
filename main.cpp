#include <iostream>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
using namespace std;
//problem11
// int main() {
//     int num, positive, negative, count;
//     positive=0, negative=0, count=0;
//     int total=0;
//
//
//     while (cin >> num && num!=0) {
//         total+=num;
//         cout++;
//         if (num>0)
//             positive++;
//         else if (num<0)
//             negative++;
//     }
//     if (count==0) {
//         cout << "No number entered, expect 0"<< endl;
//     else
//         cout << "The number of positives is "<< positive<< endl;
//         cout << "The number of negatives is "<< negative<< endl;
//         cout << "The total number is "<< count;
//     }
//     return 0;
// }
//problem12
// int main() {
//     int n;
//     cin >> n;
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             cout <<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//problem14
// int main() {
//     int n;
//     cin >> n;
//     for (int i=1; i<=n; i++) {
//         for (int j=1; j<=i; j++) {
//             cout << i;
//         }
//         cout<< endl;
//     }
//     return 0;
// }
//problem15
// int main() {
//     int n;
//     cin>> n;
//     double sum = 0.0;
//
//     for (int i=1; i<=n; i++) {
//         cout << "1/"<<i;
//         if (i<n)
//             cout << "+";
//         sum+=1.0/i;
//     }
//     cout << endl;
//     cout << "The summ is "<< sum;
//     return 0;
// }
//problem16
// int main() {
//     double rent=1000, yRent, total=0;
//     for (int year =1; year<=5; year++) {
//         yRent=rent*12;
//         total=total+yRent;
//         cout << "For year "<< year<< " rent is "<< yRent<<endl;
//         cout << "The total fpr year "<< year<<" is "<< total<<endl;
//         rent*=1.03;
//     }
//     cout << "The total for all 5 years is "<< total;
//     return 0;
// }
//problem17
// int main() {
//     int x;
//     cin >>x;
//     if (x<0)
//         x=-x;
//     int sum=0;
//     while (x>0) {
//         int dig=x%10;
//         sum=sum+dig;
//         x=x/10;
//     }
//     cout << "The summ of digits is "<< sum;
//     return 0;
// }
//problem19
// int main() {
//     int n;
//     cin>> n;
//     for (int i=2; i<=n; i++) {
//         while (n%i==0) {
//             cout<<i;
//             n=n/i;
//         }
//     }
//     cout << endl;
//     return 0;
// }
//problem20(ishlamadi, qanday qilishni bilmadim:((((
// int main() {
//     int seconds;
//     cin>> seconds;
//     for (int i=seconds-1; i>=0; --i) {
//         if (i>0)
//             cout << i<< "seconds left";
//         else
//             cout << "Time is up!";
// #ifdef _WIN32
//         Sleep(1000);
// #else
//         sleep(1);
// #endif
//     }
// return 0;
// }
//problem21
// int main() {
//     cout << "Miles   Kilometers"<< endl;
//     for (int mil=1; mil<=10; mil++) {
//         double km=mil*1.609;
//         cout << mil<<"        "<<km<<endl;
//     }
//     return 0;
// }
//problem22
// int main() {
//     int n = 0;
//     int value = 1;   // start with 2^0 = 1
//
//     while (value * 2 < 30000) {
//         value = value * 2;
//         n++;
//     }
//
//     cout << "The largest n such that 2^n < 30000 is: " << n << endl;
//
//     return 0;
// }
//problem23
// int main() {
//     int evenCount = 0;
//     int oddCount = 0;
//
//     // generate 100000 random numbers
//     for (int i = 0; i < 100000; i++) {
//         int num = rand();   // random number
//
//         if (num % 2 == 0) {
//             evenCount++;
//         } else {
//             oddCount++;
//         }
//     }
//
//     cout << "Total even numbers: " << evenCount << endl;
//     cout << "Total odd numbers: " << oddCount << endl;
//
//     return 0;
// }

