#include <iostream>
using namespace std;

void reverseString(char str[]){
    int n=0;
    while(str[n]!='\0'){
        n++;
    }

    char stack[100];
    int top=-1;

    for(int i=0;i<n;i++){
        stack[++top]=str[i];
    }

    cout<<"Reversed string: ";
    while(top!=-1){
        cout<<stack[top--];
    }
    cout<<endl;
}

int main(){
    char str[100];
    cout<<"Enter string: ";
    cin.getline(str,100);

    reverseString(str);
    return 0;
}
