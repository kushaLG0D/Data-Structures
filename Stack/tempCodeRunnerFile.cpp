 char *infix = "x+b";
    int size=strlen(infix);
    Stack st(size);
    cout << InToPos(infix,st);

    return 0;