#include <iostream>
using namespace std;
#define I 2
#define K 7
#define L 1
#define C 9
#define U 5
#define S 6

int main ()
{
    system("CLS");
    // soal a
    bool hasil1 = 3 - 1 < I || K - 5 < 8 + 2 && L + 7 >= 9 + 3;
    cout << "A. 3 - 1 < I || K - 5 < 8 + 2 && L + 7 >= 9 + 3 = "<< hasil1 << endl;
    /*  3 - 1 < I or K - 5 < 8 + 2 and L + 7 >= 9 + 3
    ((3 - 1) < I) || [((K - 5) < (8 + 2)) && ((L + 7) >= (9 + 3))]   => selesaikan operator aritmatika dahulu
    (2 < I) || [(2 < 10) && (8 >=12)]     => prioritas (<, <=, >, >=)  
    (false) || [true && false]     => prioritas &&
    false || false =false(0) */

    // soal b
    bool hasil2 = L % 3 > U and (C / U < S or 3 * I - K > 0);
    cout <<"B. L % 3 > U and (C / U < S or 3 * I - K > 0) = " << hasil2 << endl;
    /* ((L % 3) > U) and (((C / U) < S) or ((3 * I)  - K) > 0)    => prioritas (%,/,*)
    (1 > 5) && ((1 < 5) || (6 - K) > 0 )     => prioritas (-)
    (1 > 5) && ((1 < 5) || (-1 > 0 ))   => prioritas (<,<=, >,, >=) 
    false && (false || false )  +> prioritas dalam kurung
    false && false  = false(0) */ 

    // soal c
    bool hasil3 = I - 9 > K || L + 3 < 4 * C;
    cout << "C. I - 9 > K OR L + 3 < 4 * C = " << hasil3 << endl;
    /*  (I - 9) > K || (L + 3) < (4 * C) =>prioritas (*,)
    -7 > K || 4 < 36   => prioritas (<,>)
    false || true = true(0)*/

    // soal d
    int hasil4 = I | K & L ^ 3 << 2 ;
    cout << "D. I OR K AND L XOR 3 SHL 2 = " << hasil4 << endl;
    /* I | K & R ^ 3 << 2  

       3       =   0011
       3 shl 2 = 001100 = 12
       
       K       = 0111
       l       = 0001
       K & L   = 0001 = 1 

       K&L          = 0001
       3<<2         = 1100
       (K&L)^(3<<2) = 1101 = 13

       I            = 0010
       (K&L)^(3<<2) = 1101
       I|(K&L)^(3<<2)=1111 = 15
    

    */






    return 0;
}