// HIghest common factor 
// GCD is the largest number which is divisible by 2 positive integers leaving no reminder 
// suppose we have taken 2 numbers : if agar x = y , the GCD  = same , the largest common divisor which is same for 
// the two numbers is the GCD of the two numbers 
// ...id we want less number id iterations we can use the modulus formula two 

// gcd(a , b ) = gcd( a-b , b) = gcd( a%b ,  b )
// int gcd(int a , int b ){
//     if(a == b ){
//         return b ; 
//     }
//     if(b == a ){
//         return a ; 
//     }
//     while ( a != b){
//         if( a > b){
//             a = a - b ;
//         }
//         else{
//             b  = a - b ; 

//         }
//         return a ; 
//     }
// }
// algorithm fo GCD modulus one 
// int modulus(int a , int b){
//     int ans  = 1 ;
//     for(int i ; i < min(a , b ) ; i++){
//         if(a %i == 0 && b%i == 0){
//             ans = 1 ; 
//         }
//     } 
// Euclid GCD algorithim 
//  a * b = lcm(a , b) * gcd(a, b )
// a % m + b % m = (a + b)%m
// a % m  - b % m = (a - b)%m
// a % m * b % m = (a * b)%m
// Fast exponenetiation 
// here we hve to calculate the powers
// if (a)ki power b  = (a)ki power b/2 if b is even 
// if (a)ki power b  = (a)ki power b/2 * a if b is odd 
// below is the following algorithim 
// int gcd(int a , int b){
//     if (b == 0){
//         return a ;
//     }
//     else{
//         return gcd(b , a%b);
//     }
// }here the time complexity will be O(log min(a , b ))

//LCM(least common multiple) = this is the least common integers that is divisible by both numbers 
// example : a*b / gcd(a  ,  b )
// Although Euclid GCD algorithm works for almost all cases we can further improve it and this algorithm is known as the Extended Euclidean Algorithm. This algorithm not only finds GCD of two numbers but also integer coefficients x and y such that:
// ax + by = gcd(a, b)
// int Extendedgcd(int a , int y , int*x , int*y){
//     if(b == 0){
//         x = 1  ; 
//         y = 0 ; 
//         return a ;
//     }
//     int x1 , y1 ; 
//     int d = Extendedgcd( b , a%b , x1 , y1);
//     x = y1 ; 
//     y = x1 - y1 * (a/b);
//     return d ;

// }
