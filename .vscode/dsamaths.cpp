// prime numbers  : jikse sirf 2 factors h 1 and itself 
// code for prime numbers
// cpomplexity is O(n) 
// bool isPrime(int n ){
//     for(int i = 0 ; i < n ; i++ ){
//         if (n % i == 0){
//             return false ; 

//         }
//         return 0 ; 
//     }

// }
// sieve of erastomers  
// here make every no as prime numbers and then check which is prime orn not ... 
// then cut the elemnts which are not prime 
// int countprime(int n ){
//     int count = 0 ; 
//     vector<bool> prime(n+1 , true){
//         prime[0] == prime[1] = false ; 
//         for(int i = 2 ; i < n ; i++){
//             if(prime[i]){
//                 count++ ; 
//                 for( int j = 2*i ; j < n ; j = j+1){
//                     prime[j] = 0 ; 
//                 }
//             }

//         }
//         return ans ; 
//     }
// }
// segemnted sieve 
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


// }
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

// Modular Exponentiation 
// given are x , m , n nd u have to find (x) ki power n % m 
int modularExponentiation(int n , int x , int m ){
    int res = 1 ; 
    while( n > 0){
        if ( n & 1){
            // given is odd then 
            res  = res * a  ;
        }
        a = a*a ; 
        b = b >> 1 ; 
    }
    return res ; 
    }