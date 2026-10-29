#include <iostream>
using namespace std;

int  mayor(int a, int b ,int c) {
 
if (a > b ) {
    if (a > c ) {
    
        return a;
    }else{
        return c;
    }
}else if(b > c ) {

    return b;

}else {
    return c;
}
}
int main() {
   int a , b, c;

   cout<<"Ingrese primer numero";
   cin>> a;
   cout<<"Ingrese segundo numero";
   cin>> b;
   cout<<"Ingrese tercer numero";
   cin>> c;
 cout <<"El numero es mayor"<<mayor(a,b,c)<<endl;

 return 0;

}