#pragma GCC optimize("O3, unroll-loops")
char* removeOuterParentheses(char* s) {
    int balance=0, j=0;
    for(int i=0; s[i]!='\0'; i++){
        const char c=s[i];
        balance+=(c=='(')-(c==')');
        if ((balance==1 && c=='(')||(balance==0 && c==')')) continue;
        s[j++]=s[i];
    }
    s[j]='\0';
    return s;
}