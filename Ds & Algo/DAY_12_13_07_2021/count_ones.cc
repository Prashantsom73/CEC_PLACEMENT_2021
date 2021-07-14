#include<iostream>
using namespace std;
// int countone(int n){
//         int count = 0;
//         while (n > 0)   
//         {
//             if (n % 2 == 1) // also can be written as, if (n & 1)
//                 count++;
//             n /= 2;
//         }  
//         return count;
//     }
int countone(int n){
  int c= 0;
    while (n != 0) {
        c++;
        n &= (n - 1);
    }
    return c;
}
int main(){
    cout<<countone(9);
}