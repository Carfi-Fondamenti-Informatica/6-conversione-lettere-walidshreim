#include <iostream>
using namespace std;
char letter(char c){
    char b;

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        cout << "true"<< endl;
        if(c >= 'a' && c <= 'z'){
        b=c-32;
        cout<< b <<endl;}
        if (c >= 'A' && c <= 'Z'){
            b=c+32;
            cout<< b <<endl;
        }
    }
    else
        cout<<"false"<<endl;

}
int main() {
    char a;
    cin >> a;
    letter (a);


}
