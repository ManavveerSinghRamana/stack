#include <iostream>
using namespace std;

int precedence(char c){
    if(c=='^') return 3;
    if(c=='*' || c=='/') return 2;
    if(c=='+' || c=='-') return 1;
    return -1;
}

void infixToPostfix(char exp[]){
    char stack[100];
    int top=-1;
    char output[100];
    int k=0;

    int n=0;
    while(exp[n]!='\0'){
        char ch=exp[n];
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            output[k++]=ch;
        } else if(ch=='('){
            stack[++top]=ch;
        } else if(ch==')'){
            while(top!=-1 && stack[top]!='('){
                output[k++]=stack[top--];
            }
            top--;
        } else {
            while(top!=-1 && precedence(stack[top])>=precedence(ch)){
                output[k++]=stack[top--];
            }
            stack[++top]=ch;
        }
        n++;
    }

    while(top!=-1){
        output[k++]=stack[top--];
    }

    output[k]='\0';
    cout<<"Postfix Expression: "<<output<<endl;
}

int main(){
    char exp[100];
    cout<<"Enter Infix Expression: ";
    cin.getline(exp,100);

    infixToPostfix(exp);
    return 0;
}
