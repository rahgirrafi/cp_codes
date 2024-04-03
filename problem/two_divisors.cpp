#include <iostream>
#include <numeric>

long int GCD(long int a, long int b){
    if(b == 0) return a;
    else return GCD(b, a%b);
}

long int LCM(long int a, long int b){
    return (unsigned long long int) a*b/GCD(a,b);
}

long int find_result(long int a,long int b){
    long int result = LCM(a,b);
    if(result>b) return result;
    else return result* (b/a);


}

int main(){
int n;
std::cin>>n;
long int t=n, a,b;
while(t>0){
std::cin>>a>>b;
std::cout<<find_result(a,b)<<std::endl;
t--;
}



}