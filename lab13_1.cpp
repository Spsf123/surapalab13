#include<iostream>
#include <ctime>
using namespace std;

long int fibonacci(int);
int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}
long int fibonacci(int x){
    if(x == 1 ){
        return 1;}
        if ( x > 1){
            return fibonacci(x-1) + fibonacci(x-2);
        }
    else {
        return 0;
    }

}
