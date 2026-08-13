/* Scrieţi un subprogram C++ care primeşte ca parametru un şir de caractere s şi returnează valoarea
 numerică a primului caracter cifră din şir, dacă acesta există sau -1 în caz contrar.
exp: s="abc 72 pui" => 7          s="abcedar" => -1
*/

#include <iostream>
#include <cstring>
using namespace std;

int numar(char s[]) {
   for (int i=0; i < strlen(s); i++)
       if (s[i] > '0' && s[i] < '9')
           return s[i] - '0';
    return -1;
}

int main() {
    char s[101];
    cin.getline(s, 101);
    cout << numar(s);
}