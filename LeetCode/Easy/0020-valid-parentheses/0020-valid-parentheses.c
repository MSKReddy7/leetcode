bool isValid(char* s) 
{
    int maxLen = strlen(s);
    char stack[maxLen];
    int top = -1;

    for(int i=0; i<maxLen; i++)
    {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            stack[++top] = s[i] == '(' ? ')' : s[i] == '[' ? ']' : '}';
        else if(top == -1 || s[i] != stack[top])
                return false;
        else
            top--;
    }
    
    return top == -1;
}