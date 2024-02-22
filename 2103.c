int countPoints(char* rings) {
    if(strlen(rings)<=6)
    return 0;
    int num=0;
    int a[3][10]={0};
    char*p=rings+0;
    while((*p)!='\0'){
        if((*p)=='R'){
            p++;
            a[0][(int)(*p)-'0']=1;
        }
        if((*p)=='G'){
            p++;
            a[1][(int)((*p)-'0')]=1;
        }
        if((*p)=='B'){
            p++;
            a[2][(int)(*p)-'0']=1;
        }
        p++;
    }
    for(int i=0;i<10;i++){
        int flag=1;
        for(int j=0;j<3;j++){
            if(a[j][i]==0)
            flag=0;
        }
        if(flag!=0) num++;
    }
    return num;
}