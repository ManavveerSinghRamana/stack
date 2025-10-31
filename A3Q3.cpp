#include <iostream>
using namespace std;

void checkBalanced(char exp[]){
    char stack[100];
    int top=-1;
    int n=0;

    while(exp[n]!='\0'){
        char ch=exp[n];
        if(ch=='(' || ch=='{' || ch=='['){
            stack[++top]=ch;
        } else if(ch==')' || ch=='}' || ch==']'){
            if(top==-1){
                cout<<"Not Balanced"<<endl;
                return;
            }
            char open=stack[top--];
            if((ch==')' && open!='(') || 
               (ch=='}' && open!='{') ||
               (ch==']' && open!='[')){
                cout<<"Not Balanced"<<endl;
                return;
            }
        }
        n++;
    }

    if(top==-1)
        cout<<"Balanced"<<endl;
    else
        cout<<"Not Balanced"<<endl;
}

int main(){
    char exp[100];
    cout<<"Enter expression: ";
    cin.getline(exp,100);

    checkBalanced(exp);
    return 0;
}
