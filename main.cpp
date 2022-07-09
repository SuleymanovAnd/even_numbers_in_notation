#include <iostream>
void evendigits ( long long number, int &ans){
    if ( (number%10)%2 == 0) {ans++;}
if (number > 10){
    evendigits ( number/10, ans);
}

}
int main() {

    int ans = 0;

    evendigits (9223372036854775806, ans);

    std::cout << ans;
}
