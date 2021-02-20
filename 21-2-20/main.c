//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//#include<iostream.h>
//
//int main()
//{
//    cout<<"1"<<endl;
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("%+d",1);
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<conio.h>
//#include<string.h>
//int main()
//{
//    int cur=0;
//    char key[11];
//    printf("ÇëÊäÈëÃÜÂë:");
//    while((key[cur]=getch()))
//    {
//        if(key[cur]=='\r')
//        {
//            printf("\n");
//            break;
//        }
//        if(key[cur]=='\b')
//        {
//            if(cur>0)
//            {
//                printf("\b \b");
//                cur--;
//            }
//            continue;
//        }
//        if(cur>=0&&cur<10)
//        {
//            printf("*");
//            cur++;
//        }
//    }
//    key[cur]='\0';
//    if(strcmp(key,"123456")==0)
//        printf("µÇÂ¼³É¹¦\n");
//    else
//        printf("µÇÂ¼Ê§°Ü\n");
//    printf("%s",key);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("% d\n",1);
//    printf("% d\n",-1);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("%#x",10);
//
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    char arr[]="4122";
//    int i=atoi(arr);
//    printf("%d",i);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int a;
//    a=ceil(1.11);
//    printf("%d\n",a);
//    a=floor(1.11);
//    printf("%d",a);
//    return 0;
//}
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//    time_t b=time(NULL);
//    char *a=ctime(&b);
//    printf("%s",a);
//    return 0;
//}
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//    printf("%d",time(NULL));
//    return 0;
//}
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//    time_t a=time(NULL);
//    char b[20];
//    strftime(b,19,"%A %B",localtime(&a));
//    printf("%s",b);
//    return 0;
//}
