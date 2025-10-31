#include <iostream>
using namespace std;

void evaluatePostfix(char exp[]){
    int stack[100];
    int top=-1;

    int n=0;
    while(exp[n]!='\0'){
        char ch=exp[n];
        if(ch>='0' && ch<='9'){
            stack[++top]=ch-'0';
        } else {
            int val2=stack[top--];
            int val1=stack[top--];
            switch(ch){
                case '+': stack[++top]=val1+val2; break;
                case '-': stack[++top]=val1-val2; break;
                case '*': stack[++top]=val1*val2; break;
                case '/': stack[++top]=val1/val2; break;
                default: cout<<"Invalid operator: "<<ch<<endl; return;
            }
        }
        n++;
    }

    cout<<"Result: "<<stack[top]<<endl;
}

int main(){
    char exp[100];
    cout<<"Enter Postfix Expression: ";
    cin.getline(exp,100);

    evaluatePostfix(exp);
    return 0;
}
