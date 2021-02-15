C code for Library management system


#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>

int LoginPage(int*);//only for authorized access
int Database();//to show what all books are available
int Issue();//to issue a particular book
int Continue();//to decide whether to issue , return or view database
int Return ();//to return a book
int Search();//in case of a large database the librarian can use the Search function to view the serial no. of a book
int RackNumber();// to display what rack a particular book resides.
int Add();
int Delete();
int Display();

struct Rack
{
    int n;
    char z;
};


static int  c1[10],c2[10],c3[10],c4[10],c5[10],i1[10],i2[10],i3[10],i4[10],i5[10],m1[10],m2[10],m3[10],m4[10],m5[10],
    ex1[10],ex2[10],ex3[10],ex4[10],ex5[10],et1[10],et2[10],et3[10],et4[10],et5[10];





int main()
{
int a=0;

    LoginPage(&a);
   if (a==1)//only if login is successful , execute the rest of the code.
   {
       Database ();
                     //everything else(call  every other function.)
   }
   else {printf("invalid username/password. please try again \n");
   main ();
   }
    return 0;
}
int LoginPage(int*x)
{
    char  s1[]="KjsceLib123";
    char s2[]="libsysxyz";
    char s3[50],s4[50];



 printf("********************KJSCE LIBRARY SYSTEM******************** \n");
 printf("Welcome \n");
 printf("please enter the required credentials\n");
 printf("Username:");
 gets(s3);
 printf("Password:");
 gets(s4);
 if((strcmp(s1,s3)==0&&strcmp(s2,s4)==0))
 {
   printf("Login Successful ! \n");
   printf("****************************************************************** \n");
   *x=1;
 }

    else {
 system("cls");//clear the screen and login fresh again.
    }

}

int Database()
{
    int b,i,x,y,a;
  static  int a1[5],a2[5],a3[5],a4[5],a5[5];

    printf("enter the branch to see the availability of the books per branch \n");
    printf(" 1 for Computer Engineering \n");
    printf("2 for Information Technology \n");
    printf("3 for Mechanical Engineering \n");
    printf("4 for Electronics and Telecommunication Engineering \n");
    printf("5 for Electronics Engineering \n");
    printf("----------------------------------------------------------------------\n");
    scanf("%d",&b);
    switch(b)
    {
    case 1:
        {a=1;
           printf("the list of available books is as follows \n ");
           printf(" S.NO |      NAME OF BOOK       | AUTHOR      | SERIAL    |      #COPIES \n");
           printf("-------------------------------------------------------------------------- \n");
           printf("  1    | Discrete M. Structures  | YN Singh    |  101      |     %d \n ",10+a1[0]);
           printf(" 2    | Data Structures using C | Reema T.    |  102      |     %d \n ",10+a1[1]);
           printf(" 3    |  Computer Organization  | Carl H.     |  103      |     %d \n ",10+a1[2]);
           printf(" 4    |          DBMS           | G.K Gupta   |  104      |     %d \n ",10+a1[3]);
           printf(" 5    | Theory of Computation   | Michael S.  |  105      |     %d \n ",10+a1[4]);
           printf("---------------------------------------------------------------------------------- \n");
           printf("press 1 to ISSUE the book or 2 to RETURN the book or 3 to SEARCH \n");//in case of a large number of books in database , search would be necessary as user cannot always visually scan the database.
           scanf("%d",&i);
           if(i==1)
            {Issue(a1,a);}
           else if(i==2)
           {
             Return(a1,a);
           }
            else
            {
                 Search(1);
            }





        }

        break;
         case 2:

        {
            a=2;
           printf("the list of available books is as follows \n ");
           printf(" S.NO        NAME OF BOOK        AUTHOR        SERIAL             #COPIES \n");
           printf("------------------------------------------------------------------------- \n");
           printf(" 1     |    Networking         |    Kurose      |   201            %d \n ",10+a2[0]);
           printf(" 2     |  Applied Mathematics  | Kumbhojkar G.V |   202            %d \n ",10+a2[1]);
           printf(" 3     |      VHDL Primer      |    J.Bhasker   |   203            %d \n ",10+a2[2]);
           printf(" 4     |    Web Programming    |   Chris Bates  |   204            %d \n ",10+a2[3]);
           printf(" 5     |Computer Organization  |   Tata McGraw  |   205            %d \n ",10+a2[4]);
           printf("----------------------------------------------------------------------------------------\n");
            printf("press 1 to ISSUE the book or 2 to RETURN the book or 3 to SEARCH \n");//in case of a large number of books in database , search would be necessary as user cannot always visually scan the database.
           scanf("%d",&i);
           if(i==1){
            Issue(a2,a);}
           else if (i==2)
           {

           Return(a2,a);}
            else
                {Search(2);}

        }
        break;
         case 3:
            {
                a=3;
                 printf("the list of available books is as follows \n ");
           printf(" S.NO        NAME OF BOOK        AUTHOR        SERIAL               #COPIES \n");
           printf("---------------------------------------------------------------------------------\n");
           printf(" 1.   |      Thermodynamics   |   P.K Nag       | 301       |     %d \n",10+a3[0]);
           printf(" 2.   |Strength of Materials  |  Oxford         | 302       |     %d \n",10+a3[1]);
           printf("3.    |    Fluid Mechanics    |  F.M White      | 303       |     %d \n",10+a3[2]);
           printf("4.    |        ToM            |  P.L Ballaney   | 304       |     %d \n",10+a3[3]);
           printf("5.    |    Applied Maths 4    |  G.V Kumbhojkar | 305       |     %d \n",10+a3[4]);
            printf("----------------------------------------------------------------------------------------\n");
            printf("press 1 to ISSUE the book or 2 to RETURN the book or 3 to SEARCH \n");//in case of a large number of books in database , search would be necessary as user cannot always visually scan the database.
           scanf("%d",&i);
           if(i==1)
            {Issue(a3,a);}
           else if(i==2){
            Return(a3,a);}
            else {
                Search(3);}



            }
            break;
         case 4:
            {
              a=4;
                printf("the list of available books are as follows \n");
           printf(" S.NO        NAME OF BOOK        AUTHOR        SERIAL              #COPIES \n");
           printf("------------------------------------------------------------------------- \n");
           printf(" 1      |    Digital Design      | Morris Mano    |   401            %d \n ",10+a4[0]);
           printf(" 2     |    Network Analysis    |  M.E. Van      |   402            %d \n ",10+a4[1]);
           printf(" 3     |     Electromagnetic    | J.A Admister   |   403            %d \n ",10+a4[2]);
           printf(" 4     |    Control Systems     | J.N Manik      |   404            %d \n ",10+a4[3]);
           printf(" 5     |    Adaptive Control    |  Sastry S.S    |   405            %d \n ",10+a4[4]);
           printf("----------------------------------------------------------------------------------------\n");
            printf("press 1 to ISSUE the book or 2 to RETURN the book or 3 to SEARCH \n");//in case of a large number of books in database , search would be necessary as user cannot always visually scan the database.
           scanf("%d",&i);
           if(i==1){
            Issue(a4,a);}
           else if(i==2)
           {Return(a4,a);

           }
            else {
                Search(4);}
            }
            break;

case 5:{
    a=5;
             printf("the list of available books are as follows \n");
           printf(" S.NO        NAME OF BOOK        AUTHOR        SERIAL              #COPIES \n");
           printf("------------------------------------------------------------------------- \n");
           printf(" 1     |    BEEE                | Ravish Singh   |   501            %d \n ",10+a5[0]);
           printf(" 2     | Signals and Systems    |  J.S Katre     |   502            %d \n ",10+a5[1]);
           printf(" 3     |    VLSI Design         | Poonam Kadam   |   503            %d \n ",10+a5[2]);
           printf(" 4     |    Power Electronics   | P.S Bhimbra    |   504            %d \n ",10+a5[3]);
           printf(" 5     |   Circuit Theory       |  Singh R.R    |    505            %d \n ",10+a5[4]);
           printf("----------------------------------------------------------------------------------------\n");
            printf("press 1 to ISSUE the book or 2 to RETURN the book or 3 to SEARCH \n");//in case of a large number of books in database , search would be necessary as user cannot always visually scan the database.
           scanf("%d",&i);
            if(i==1){
            Issue(a5,a);}
           else if(i==2){
            Return(a5,a);}
            else
                {Search(5);}


            }

    }
}

int Issue (int y[],int m)
{
    int j,i,k,l;
    l=1;


    printf("enter the valid S.NO (between 1 to 5) of the book you would like to issue \n");
    scanf("%d",&j);

    printf("the number of copies of this book available are %d \n",(10+y[j-1]));
    printf("------------------------------------------------------------------------\n");
    if((10+y[j-1])<=0)
    {
         printf("sorry , no copies are available\n");

         printf("---------------------------------------------------------------\n");
    }


    else
    { y[j-1]=y[j-1]-1;

    Add(l,m,j);
    printf("-------------------------------------------------------------------------\n");
     printf("the book has been successfully issued  \n");
        printf("the new number of copies of this book available are %d\n",(10+y[j-1]));
        printf("-----------------------------------------------------------------------\n");
        if(m==1){
    RackNumber(m,j);}
    else if(m==2)
    {
        RackNumber(m+4,j);
    }
    else if(m==3)
    {
        RackNumber(m+9,j);
    }
    else if(m==4)
    {
        RackNumber(m+14,j);
    }
    else {
        RackNumber(m+19,j);
    }
    }


}
int RackNumber(int p, int q)
{
     struct Rack r[25];
    int i;
    for(i=0;i<25;i++)
    {
        if(i>=0&&i<5)
        {
            r[i].n=1;
        }
        else if(i>=5&&i<10)
        {
            r[i].n=2;
        }
        else if(i>=10&&i<15)
        {
            r[i].n=3;
        }
        else if(i>=15&&i<20)
        {
            r[i].n=4;
        }
        else
            r[i].n=5;
    }

    for(i=0;i<25;i++)
    {
        switch(i%5)
        {
        case 0:

                r[i].z='a';
                break;
        case 1:
                 r[i].z='b';
                  break;
        case 2:
                r[i].z='c';
                 break;
        case 3:
                r[i].z='d';
                break;
        case 4:
                r[i].z='e';
                break;
        }

    }
     if(p>=0&&p<5)
        {
            printf("please collect your book from RACK NUMBER %d %c\n",r[q].n,r[q].z);
        }

         else if (p>=5&&p<10)
        {
            printf("please collect your book from RACK NUMBER %d %c\n",r[q+4].n,r[q+4].z);
        }

            else if (p>=10&&p<15)
        {
            printf("please collect your book from RACK NUMBER %d %c\n",r[q+9].n,r[q+9].z);
        }

            else if (p>=15&&p<20)
        {
            printf("please collect your book from RACK NUMBER %d %c\n",r[q+14].n,r[q+14].z);
        }
        else
        {
            printf("please collect your book from RACK NUMBER %d %c\n",r[q+19].n,r[q+19].z);
        }


     printf("please STAMP the date of return on the book for reference.\n");
    printf("*******************************************************************************\n");
    Continue();//after issuing a book user might want to issue/return another book or simply choose to exit.


}

int Continue ()
{
    int t,i,j,k;
    char c;

    printf("press 1 to ISSUE/RETURN or 2 to SEARCH or -1 to EXIT\n");
    scanf("%d",&t);
    switch (t)
    {
    case 1:
        Database();
        break;
    case 2:

     {
        printf("enter the S.NO of the branch that you would like to search the books for\n") ;

         printf(" 1 for Computer Engineering \n");
         printf("2 for Information Technology \n");
         printf("3 for Mechanical Engineering \n");
         printf("4 for Electronics and Telecommunication Engineering \n");
         printf("5 for Electronics Engineering \n"); ;
        scanf("%d",&i);

        switch(i)
        {
            case 1:{

                Display(1);
                Search(1);

                }
            break;
            case 2:  {Display(2);

Search(2);}
            break;
            case 3:{
                Display(3);
                Search(3);}
            break;
            case 4:

              {
                  Display(4);
                  Search(4);}
            break;
            case 5: {
                Display(5);
                Search (5);}
            break;
        }

     }
     break;
            case -1 :
               {
                Display(7);
               }
                break;




    }
}
int Return(int x[],int a)
{
    int k;

    printf("enter the valid S.NO (between 1 to 5) of the book that student is returning \n");
    scanf("%d",&k);
    printf("the number of copies of this book available are %d\n",10+x[k-1]);//we will never give a call to return function
    //before even issuing a book therefore we don't need
    if(10+x[k-1]>=10)
        printf("sorry , database already has max number of given book. Cannot return\n");
    else
    {

        Delete(a,k);

        x[k-1]=x[k-1]+1;
        printf("book successfully returned \n");
        printf("new number of copies available are %d \n",10+x[k-1]);


    }
    printf("**************************************************************************************** \n");
    Continue();
}
int Search (int k)
{
    char s1[5][40]={"Discrete M. Structures","Data Structures using C","Computer Organization","DBMS","Theory of Computation"};
char s2[5][40]={"Networking","Applied Mathematics","VHDL Primer"," Web Programming","Computer Organization"};
char s3[5][40]={"Thermodynamics","Strength of Materials","Fluid Mechanics","ToM","Applied Maths 4"};
 char s4[5][40]={"Digital Design","Network Analysis","Electromagnetic","Control Systems","Adaptive Control"};
 char s5[5][40]={"BEEE","Signals and Systems","VLSI Design","Power Electronics","Circuit Theory"};
 char s[50];
 int i,j,l,n;
 n=0;

 printf("please enter the name of the book\n");
 scanf("%29s", s);
 if(k==1)

 {
     for(i=0;i<5;i++)
     {
         if(strstr(s1[i],s)!=0)
            {
                printf("the book is FOUND at serial no. %d\n",i+1);
                printf("------------------------------------------------\n");
                n=1;
                break;


            }
     }
     if(n==0)
     {
         printf("sorry , book was not found in Computer Engineering Database\n");
          printf("-----------------------------------------------------------------\n");
     }
             printf("press 1 to ISSUE/RETURN or 2 to SEARCH again or -1 to EXIT\n");
     fflush(stdin);
     scanf("%d",&j);
     switch(j)
     {


     case 1:
        Database();
     case 2:
        {Display(6);
        fflush(stdin);
        scanf("%d",&l);
          switch(l) { case 1:{
               Display(1);
                 Search(1);}
            break;
            case 2:  {
              Display(2);
Search(2);}
            break;
            case 3:{
               Display(3);Search(3);}
            break;
            case 4:

              {Display(4);Search(4);}
            break;
            case 5: {
               Display(5);
                Search (5);}
            break;
            case -1:
                {
                    Display(7);
                }
                break;
        }
        }
     }
 }





 else if(k==2)
    {
        for(i=0;i<5;i++)
     {
         if(strstr(s2[i],s)!=0)
            {
                printf("the book is FOUND at serial no. %d\n",i+1);
                 printf("------------------------------------------------\n");
                n=1;
                break;
               }



     }
     if(n==0)
     {
         printf("sorry,book was not found in IT Database\n");
          printf("------------------------------------------------\n");
     }
     printf("press 1 to ISSUE/RETURN or 2 to SEARCH again\n");
     fflush(stdin);
     scanf("%d",&j);
     switch(j)
     {


     case 1:
        Database();
     case 2:
        {Display(6);
        fflush(stdin);
        scanf("%d",&l);
          switch(l) { case 1:{
               Display(1);
                 Search(1);}
            break;
            case 2:  {
              Display(2);
Search(2);}
            break;
            case 3:{
               Display(3);
                 Search(3);}
            break;
            case 4:

              {Display(4);


               Search(4);}
            break;
            case 5: {
               Display (5);
                Search (5);}
            break;
            case -1:
                {
                    Display(7);
                }
                break;
        }
        }
     }


    }

 else if(k==3)
    {
        for(i=0;i<5;i++)
     {
         if(strstr(s3[i],s)!=0)
            {
                printf("the book is FOUND at serial no. %d\n",i+1);
                 printf("------------------------------------------------\n");
                n=1;
                break;

            }
     }
     if(n==0)
     {
         printf("sorry, book was not found in Mechanical Engineering Database\n");
          printf("----------------------------------------------------------------\n");
     }
             printf("press 1 to ISSUE/RETURN or 2 to SEARCH again or -1 to EXIT\n ");
     fflush(stdin);
     scanf("%d",&j);
     switch(j)
     {


     case 1:
        Database();
     case 2:
        {Display(6);
        fflush(stdin);
        scanf("%d",&l);
          switch(l) { case 1:{
                Display(1);
                 Search(1);}
            break;
            case 2:  {
             Display(2);
Search(2);}
            break;
            case 3:{
                Display(3);

                 Search(3);}
            break;
            case 4:

              {Display(4);

               Search(4);}
            break;
            case 5: {
              Display(5);
                Search (5);}
            break;
            case -1:
                {
                    Display(7);
                }
                break;
        }
        }
     }
    }





    else if(k==4){
    for(i=0;i<5;i++)
     {
         if(strstr(s4[i],s)!=0)
            {
                printf("the book is FOUND at serial no. %d\n",i+1);
                 printf("------------------------------------------------\n");
                n=1;
                break;

            }
     }
     if(n==0)
     {
         printf("sorry,book was not found in EXTC Database\n");
          printf("------------------------------------------------\n");
     }
             printf("press 1 to ISSUE/RETURN or 2 to SEARCH again or -1 to EXIT\n");
     fflush(stdin);
     scanf("%d",&j);
     switch(j)
     {


     case 1:
        Database();
     case 2:
        {Display(6);
        fflush(stdin);
        scanf("%d",&l);
          switch(l) { case 1:{
                Display(1);
                 Search(1);}
            break;
            case 2:  {
               Display(2);
Search(2);}
            break;
            case 3:{
                Display(3);

                 Search(3);}
            break;
            case 4:

              {Display(4);
               Search(4);}
            break;
            case 5: {
              Display(5);
                Search (5);}
            break;
            case -1:
                {
                    Display(7);
                }
                break;
        }
        }
     }


     }






 else if(k==5){
    for(i=0;i<5;i++)
     {
         if(strstr(s5[i],s)!=0)
            {
                printf("the book is FOUND at serial no. %d\n",i+1);
                 printf("------------------------------------------------\n");
                n=1;
                break;

            }
     }
     if(n==0)
     {
         printf("sorry, book was not found in Electronics Database\n");
          printf("------------------------------------------------\n");
     }
             printf("press 1 to ISSUE/RETURN or 2 to SEARCH again or -1 to EXIT\n");
     fflush(stdin);
     scanf("%d",&j);
     switch(j)
     {


     case 1:
        Database();
     case 2:
        {Display(6);
        fflush(stdin);
        scanf("%d",&l);
          switch(l) { case 1:{
                Display(1);
                 Search(1);}
            break;
            case 2:  {
              Display(2);
Search(2);}
            break;
            case 3:{Display(3);

                 Search(3);}
            break;
            case 4:

              {
                  Display(4);


               Search(4);}
            break;
            case 5: {
              Display(5);
                Search (5);}
            break;
            case -1:
                {
                    Display(7);
                }
                break;
        }
        }
     }


     }
}
int Add(int a, int b,int o)
{ int i,k,d;

  static int z[25];

        switch (b)
        {
        case 1:
            {
                switch (o)
                {
                case 1:
                    {
                        printf("please enter the 3 digit roll no. of the student who is issuing the book\n");
                        scanf("%d",&d);
                       for(i=0;i<z[0];i++);

                           c1[i]=d;

                           printf("the list of students who are currently having this book are\n");
                           for(k=0;k<=z[0];k++)
                            {
                                printf("%d.",k+1);
                                printf("%d",c1[k]);

                                printf("\n");
                            }
                             z[0]=z[0]+1;
                             d=0;
                           }
                           break;
                           case 2:
                    {  printf("please enter the 3 digit roll no. of the student who is issuing the book\n");
                        scanf("%d",&d);
                       for(i=0;i<z[1];i++);

                           c2[i]=d;

                           printf("the list of students who are currently having this book are\n");
                           for(k=0;k<=z[1];k++)
                            { printf("%d.",k+1);
                                printf("%d",c2[k]);

                                printf("\n");
                            }
                             z[1]=z[1]+1;
                             d=0;

                           }
                           break;
                           case 3:
                    {
                         printf("please enter the 3 digit roll no. of the student who is issuing the book\n");
                        scanf("%d",&d);
                       for(i=0;i<z[2];i++);

                           c3[i]=d;

                           printf("the list of students who are currently having this book are\n");
                           for(k=0;k<=z[2];k++)
                            {
                                 printf("%d.",k+1);
                                printf("%d",c3[k]);

                                printf("\n");
                            }
                             z[2]=z[2]+1;
                             d=0;


                           }
                           break;
                           case 4:
                    {
                        printf("please enter the 3 digit roll no. of the student who is issuing the book\n");
                        scanf("%d",&d);
                       for(i=0;i<z[3];i++);

                           c4[i]=d;

                           printf("the list of students who are currently having this book are\n");
                           for(k=0;k<=z[3];k++)
                            {
                                 printf("%d.",k+1);
                                printf("%d",c4[k]);

                                printf("\n");
                            }
                             z[3]=z[3]+1;
                             d=0;
                           }
                           break;
                           case 5:
                    {  printf("please enter the 3 digit roll no. of the student who is issuing the book\n");
                        scanf("%d",&d);
                       for(i=0;i<z[4];i++);

                           c5[i]=d;

                           printf("the list of students who are currently having this book are\n");
                           for(k=0;k<=z[4];k++)
                            {
                                printf("%d.",k+1);
                                printf("%d",c5[k]);

                                printf("\n");
                            }
                             z[4]=z[4]+1;
                             d=0;
                           }
                           break;
                }
                }

                break;
                 case 2:
            {
                switch (o)
                {
                case 1:
                    {
                        printf("please enter the 3 digit roll no. of the student who is issuing the book\n");
                        scanf("%d",&d);
                       for(i=0;i<z[5];i++);

                           i1[i]=d;

                           printf("the list of students who are currently having this book are\n");
                           for(k=0;k<=z[5];k++)
                            {
                                printf("%d.",k+1);
                                printf("%d",i1[k]);

                                printf("\n");
                            }
                             z[5]=z[5]+1;
                             d=0;
                           }
                           break;
                           case 2:
                    {  printf("please enter the 3 digit roll no. of the student who is issuing the book\n");
                        scanf("%d",&d);
                       for(i=0;i<z[6];i++);

                           i2[i]=d;

                           printf("the list of students who are currently having this book are\n");
                           for(k=0;k<=z[6];k++)
                            {
                                printf("%d.",k+1);
                                printf("%d",i2[k]);

                                printf("\n");
                            }
                             z[6]=z[6]+1;
                             d=0;

                           }
                           break;
                           case 3:
                    {
                         printf("please enter the 3 digit roll no. of the student who is issuing the book\n");
                        scanf("%d",&d);
                       for(i=0;i<z[7];i++);

                           i3[i]=d;

                           printf("the list of students who are currently having this book are\n");
                           for(k=0;k<=z[7];k++)
                            {
                                printf("%d.",k+1);
                                printf("%d",i3[k]);

                                printf("\n");
                            }
                             z[7]=z[7]+1;
                             d=0;


                           }
                           break;
                           case 4:
                    {
                        printf("please enter the 3 digit roll no. of the student who is issuing the book\n");
                        scanf("%d",&d);
                       for(i=0;i<z[8];i++);

                           i4[i]=d;

                           printf("the list of students who are currently having this book are\n");
                           for(k=0;k<=z[8];k++)
                            {printf("%d.",k+1);
                                printf("%d",i4[k]);

                                printf("\n");
                            }
                             z[8]=z[8]+1;
                             d=0;
                           }
                           break;
                           case 5:
                    {  printf("please enter the 3 digit roll no. of the student who is issuing the book\n");
                        scanf("%d",&d);
                       for(i=0;i<z[9];i++);

                           i5[i]=d;

                           printf("the list of students who are currently having this book are\n");
                           for(k=0;k<=z[9];k++)
                            {printf("%d.",k+1);
                                printf("%d",i5[k]);

                                printf("\n");
                            }
                             z[9]=z[9]+1;
                             d=0;
                           }
                           break;

                }
            }
                break;

              case 3:
            {
                switch (o)
                {
                case 1:
                    {
                        printf("please enter the 3 digit roll no. of the student who is issuing the book\n");
                        scanf("%d",&d);
                       for(i=0;i<z[10];i++);

                           m1[i]=d;

                           printf("the list of students who are currently having this book are\n");
                           for(k=0;k<=z[10];k++)
                            {printf("%d.",k+1);
                                printf("%d",m1[k]);

                                printf("\n");
                            }
                             z[10]=z[10]+1;
                             d=0;
                           }
                           break;
                           case 2:
                    {  printf("please enter the 3 digit roll no. of the student who is issuing the book\n");
                        scanf("%d",&d);
                       for(i=0;i<z[11];i++);

                           m2[i]=d;

                           printf("the list of students who are currently having this book are\n");
                           for(k=0;k<=z[11];k++)
                            {printf("%d.",k+1);
                                printf("%d",m2[k]);

                                printf("\n");
                            }
                             z[11]=z[11]+1;
                             d=0;

                           }
                           break;
                           case 3:
                    {
                         printf("please enter the 3 digit roll no. of the student who is issuing the book\n");
                        scanf("%d",&d);
                       for(i=0;i<z[12];i++);

                           m3[i]=d;
printf("the list of students who are currently having this book are\n");
                           for(k=0;k<=z[12];k++)
                            {printf("%d.",k+1);
                                printf("%d",m3[k]);

                                printf("\n");
                            }
                             z[12]=z[12]+1;
                             d=0;


                           }
                           break;
                           case 4:
                    {
                        printf("please enter the 3 digit roll no. of the student who is issuing the book\n");
                        scanf("%d",&d);
                       for(i=0;i<z[13];i++);

                           m4[i]=d;

                           printf("the list of students who are currently having this book are\n");
                           for(k=0;k<=z[13];k++)
                            {printf("%d.",k+1);
                                printf("%d",m4[k]);

                                printf("\n");
                            }
                             z[13]=z[13]+1;
                             d=0;
                           }
                           break;
                           case 5:
                    {  printf("please enter the 3 digit roll no. of the student who is issuing the book\n");
                        scanf("%d",&d);
                       for(i=0;i<z[14];i++);

                           m5[i]=d;

                           printf("the list of students who are currently having this book are\n");
                           for(k=0;k<=z[14];k++)
                            {printf("%d.",k+1);
                                printf("%d",m5[k]);

                                printf("\n");
                            }
                             z[14]=z[14]+1;
                             d=0;
                           }
                           break;

                }
            }
                break;
                           case 4:
                                {
                switch (o)
                {
                case 1:
                    {
                        printf("please enter the 3 digit roll no. of the student who is issuing the book\n");
                        scanf("%d",&d);
                       for(i=0;i<z[15];i++);

                           ex1[i]=d;

                           printf("the list of students who are currently having this book are\n");
                           for(k=0;k<=z[15];k++)
                            {printf("%d.",k+1);
                                printf("%d",ex1[k]);

                                printf("\n");
                            }
                             z[15]=z[15]+1;
                             d=0;
                           }
                           break;
                           case 2:
                    {  printf("please enter the 3 digit roll no. of the student who is issuing the book\n");
                        scanf("%d",&d);
                       for(i=0;i<z[16];i++);

                           ex2[i]=d;

                           printf("the list of students who are currently having this book are\n");
                           for(k=0;k<=z[16];k++)
                            {printf("%d.",k+1);
                                printf("%d",ex2[k]);

                                printf("\n");
                            }
                             z[16]=z[16]+1;
                             d=0;

                           }
                           break;
                           case 3:
                    {
                         printf("please enter the 3 digit roll no. of the student who is issuing the book\n");
                        scanf("%d",&d);
                       for(i=0;i<z[17];i++);

                           ex3[i]=d;
printf("the list of students who are currently having this book are\n");
                           for(k=0;k<=z[17];k++)
                            {printf("%d.",k+1);
                                printf("%d",ex3[k]);

                                printf("\n");
                            }
                             z[17]=z[17]+1;
                             d=0;


                           }
                           break;
                           case 4:
                    {
                        printf("please enter the 3 digit roll no. of the student who is issuing the book\n");
                        scanf("%d",&d);
                       for(i=0;i<z[18];i++);

                           ex4[i]=d;

                           printf("the list of students who are currently having this book are\n");
                           for(k=0;k<=z[18];k++)
                            {printf("%d.",k+1);
                                printf("%d",ex4[k]);

                                printf("\n");
                            }
                             z[18]=z[18]+1;
                             d=0;
                           }
                           break;
                           case 5:
                    {  printf("please enter the 3 digit roll no. of the student who is issuing the book\n");
                        scanf("%d",&d);
                       for(i=0;i<z[19];i++);

                           ex5[i]=d;

                           printf("the list of students who are currently having this book are\n");
                           for(k=0;k<=z[19];k++)
                            {printf("%d.",k+1);
                                printf("%d",ex5[k]);

                                printf("\n");
                            }
                             z[19]=z[19]+1;
                             d=0;
                           }
                           break;

                }

            }break;
            case 5:
                                {
                switch (o)
                {
                case 1:
                    {printf("%d.",k+1);
                        printf("please enter the 3 digit roll no. of the student who is issuing the book\n");
                        scanf("%d",&d);
                       for(i=0;i<z[15];i++);

                           et1[i]=d;

                           printf("the list of students who are currently having this book are\n");
                           for(k=0;k<=z[15];k++)
                            {
                                printf("%d",et1[k]);

                                printf("\n");
                            }
                             z[15]=z[15]+1;
                             d=0;
                           }
                           break;
                           case 2:
                    {  printf("please enter the 3 digit roll no. of the student who is issuing the book\n");
                        scanf("%d",&d);
                       for(i=0;i<z[16];i++);

                           et2[i]=d;

                           printf("the list of students who are currently having this book are\n");
                           for(k=0;k<=z[16];k++)
                            {printf("%d.",k+1);
                                printf("%d",et2[k]);

                                printf("\n");
                            }
                             z[16]=z[16]+1;
                             d=0;

                           }
                           break;
                           case 3:
                    {
                         printf("please enter the 3 digit roll no. of the student who is issuing the book\n");
                        scanf("%d",&d);
                       for(i=0;i<z[17];i++);

                           et3[i]=d;
printf("the list of students who are currently having this book are\n");
                           for(k=0;k<=z[17];k++)
                            {printf("%d.",k+1);
                                printf("%d",et3[k]);

                                printf("\n");
                            }
                             z[17]=z[17]+1;
                             d=0;


                           }
                           break;
                           case 4:
                    {
                        printf("please enter the 3 digit roll no. of the student who is issuing the book\n");
                        scanf("%d",&d);
                       for(i=0;i<z[18];i++);

                           et4[i]=d;

                           printf("the list of students who are currently having this book are\n");
                           for(k=0;k<=z[18];k++)
                            {printf("%d.",k+1);
                                printf("%d",et4[k]);

                                printf("\n");
                            }
                             z[18]=z[18]+1;
                             d=0;
                           }
                           break;
                           case 5:
                    {  printf("please enter the 3 digit roll no. of the student who is issuing the book\n");
                        scanf("%d",&d);
                       for(i=0;i<z[19];i++);

                           et5[i]=d;

                           printf("the list of students who are currently having this book are\n");
                           for(k=0;k<=z[19];k++)
                            {printf("%d.",k+1);
                                printf("%d",et5[k]);

                                printf("\n");
                            }
                             z[19]=z[19]+1;
                             d=0;
                           }
                           break;

                }

            }break;
        }
}
 int Delete (int p,int q)
 {
     int t,i,j,d,k;
     static int a[25];
     for(i=0;i<25;i++)
     {
         a[i]=10;
     }
     switch (p)
     {
     case 1:
        {
          printf("please enter the 3 digit roll no. of the student who wants to return the book\n");
          scanf("%d",&t);
          switch (q)
          {
         case 1:
            {
                for(i=0;i<a[0];i++)
                {
                    if(c1[i]==t)
                        break;
                }
                d=i;
                for(i=d;i<a[0]-1;i++)
                {
                    c1[i]=c1[i+1];
                }
                a[0]=a[0]-1;

                printf("the new list of the roll numbers of the students that have the book are\n");
                for(i=0;i<a[0]-1;i++)
                {
                    if(c1[i]==0)
                        break;
                        printf("%d.",i+1);
                    printf("%d",c1[i]);
                    printf("\n");
                }
                d=0;
                t=0;

            }
            break;
         case 2:
            {
 for(i=0;i<a[1];i++)
                {
                    if(c2[i]==t)
                        break;
                }
                d=i;
                for(i=d;i<a[1]-1;i++)
                {
                    c2[i]=c2[i+1];
                }
                a[1]=a[1]-1;

                printf("the new list of the roll numbers of the students that have the book are\n");
                for(i=0;i<a[1]-1;i++)
                {
                 printf("%d.",i+1);
                if(c2[i]==0)
                        break;
                    printf("%d",c2[i]);
                    printf("\n");
                }
                d=0;
                t=0;
            }
            break;
         case 3:
            {
 for(i=0;i<a[2];i++)
                {
                    if(c3[i]==t)
                        break;
                }
                d=i;
                for(i=d;i<a[2]-1;i++)
                {
                    c3[i]=c3[i+1];
                }
                a[2]=a[2]-1;

                printf("the new list of the roll numbers of the students that have the book are\n");
                for(i=0;i<a[2]-1;i++)
                {
                    if(c3[i]==0)
                        break;
                         printf("%d.",i+1);
                    printf("%d",c3[i]);
                    printf("\n");
                }
                d=0;
                t=0;
            }
            break;
         case 4:
            {
 for(i=0;i<a[3];i++)
                {
                    if(c4[i]==t)
                        break;
                }
                d=i;
                for(i=d;i<a[3]-1;i++)
                {
                    c4[i]=c4[i+1];
                }
                a[3]=a[3]-1;

                printf("the new list of the roll numbers of the students that have the book are\n");
                for(i=0;i<a[3]-1;i++)
                { printf("%d.",i+1);
                    if(c4[i]==0)
                        break;
                         printf("%d.",i+1);
                    printf("%d",c4[i]);
                    printf("\n");
                }
                d=0;
                t=0;
            }
            break;
         case 5:
            {
 for(i=0;i<a[4];i++)
                {
                    if(c5[i]==t)
                        break;
                }
                d=i;
                for(i=d;i<a[4]-1;i++)
                {
                    c5[i]=c5[i+1];
                }
                a[4]=a[4]-1;

                printf("the new list of the roll numbers of the students that have the book are\n");
                for(i=0;i<a[4]-1;i++)
                {
                    if(c5[i]==0)
                        break;
                         printf("%d.",i+1);
                    printf("%d",c5[i]);
                    printf("\n");
                }
                d=0;
                t=0;
            }
            break;
          }


        }
        break;
         case 2:
            {
printf("please enter the 3 digit roll no. of the student who wants to return the book\n");
          scanf("%d",&t);
          switch (q)
          {
         case 1:
            {
                for(i=0;i<a[5];i++)
                {
                    if(i1[i]==t)
                        break;
                }
                d=i;
                for(i=d;i<a[5]-1;i++)
                {
                    i1[i]=i1[i+1];
                }
                a[5]=a[5]-1;

                printf("the new list of the roll numbers of the students that have the book are\n");
                for(i=0;i<a[5]-1;i++)
                {
                    if(i1[i]==0)
                        break;
                         printf("%d.",i+1);
                    printf("%d",i1[i]);
                    printf("\n");
                }
                d=0;
                t=0;

            }
            break;
         case 2:
            {
 for(i=0;i<a[6];i++)
                {
                    if(i2[i]==t)
                        break;
                }
                d=i;
                for(i=d;i<a[6]-1;i++)
                {
                    i2[i]=i2[i+1];
                }
                a[6]=a[6]-1;

                printf("the new list of the roll numbers of the students that have the book are\n");
                for(i=0;i<a[6]-1;i++)
                {
                    if(i2[i]==0)
                        break;
                         printf("%d.",i+1);
                    printf("%d",i2[i]);
                    printf("\n");
                }
                d=0;
                t=0;
            }
            break;
         case 3:
            {
 for(i=0;i<a[7];i++)
                {
                    if(i3[i]==t)
                        break;
                }
                d=i;
                for(i=d;i<a[7]-1;i++)
                {
                    i3[i]=i3[i+1];
                }
                a[7]=a[7]-1;

                printf("the new list of the roll numbers of the students that have the book are\n");
                for(i=0;i<a[7]-1;i++)
                {
                    if(i3[i]==0)
                        break;
                         printf("%d.",i+1);
                    printf("%d",i3[i]);
                    printf("\n");
                }
                d=0;
                t=0;
            }
            break;
         case 4:
            {
 for(i=0;i<a[8];i++)
                {
                    if(i4[i]==t)
                        break;
                }
                d=i;
                for(i=d;i<a[8]-1;i++)
                {
                    i4[i]=i4[i+1];
                }
                a[8]=a[8]-1;

                printf("the new list of the roll numbers of the students that have the book are\n");
                for(i=0;i<a[8]-1;i++)
                {
                    if(i4[i]==0)
                        break;
                         printf("%d.",i+1);
                    printf("%d",i4[i]);
                    printf("\n");
                }
                d=0;
                t=0;
            }
            break;
         case 5:
            {
 for(i=0;i<a[9];i++)
                {
                    if(i5[i]==t)
                        break;
                }
                d=i;
                for(i=d;i<a[9]-1;i++)
                {
                    i5[i]=i5[i+1];
                }
                a[9]=a[9]-1;

                printf("the new list of the roll numbers of the students that have the book are\n");
                for(i=0;i<a[9]-1;i++)
                {
                    if(i5[i]==0)
                        break;
                         printf("%d.",i+1);
                    printf("%d",i5[i]);
                    printf("\n");
                }
                d=0;
                t=0;
            }
            break;
          }
            }
          break;
         case 3:
            {
                printf("please enter the 3 digit roll no. of the student who wants to return the book\n");
          scanf("%d",&t);
          switch (q)
          {
         case 1:
            {
                for(i=0;i<a[10];i++)
                {
                    if(m1[i]==t)
                        break;
                }
                d=i;
                for(i=d;i<a[10]-1;i++)
                {
                    m1[i]=m1[i+1];
                }
                a[10]=a[10]-1;

                printf("the new list of the roll numbers of the students that have the book are\n");
                for(i=0;i<a[10]-1;i++)
                {
                    if(m1[i]==0)
                        break;
                         printf("%d.",i+1);
                    printf("%d",m1[i]);
                    printf("\n");
                }
                d=0;
                t=0;

            }
            break;
         case 2:
            {
 for(i=0;i<a[11];i++)
                {
                    if(m2[i]==t)
                        break;
                }
                d=i;
                for(i=d;i<a[11]-1;i++)
                {
                    m2[i]=m2[i+1];
                }
                a[11]=a[11]-1;

                printf("the new list of the roll numbers of the students that have the book are\n");
                for(i=0;i<a[11]-1;i++)
                {
                    if(m2[i]==0)
                        break;
                         printf("%d.",i+1);
                    printf("%d",m2[i]);
                    printf("\n");
                }
                d=0;
                t=0;
            }
            break;
         case 3:
            {
 for(i=0;i<a[12];i++)
                {
                    if(m3[i]==t)
                        break;
                }
                d=i;
                for(i=d;i<a[12]-1;i++)
                {
                    m3[i]=m3[i+1];
                }
                a[12]=a[12]-1;

                printf("the new list of the roll numbers of the students that have the book are\n");
                for(i=0;i<a[12]-1;i++)
                {
                    if(m3[i]==0)
                        break;
                         printf("%d.",i+1);
                    printf("%d",m3[i]);
                    printf("\n");
                }
                d=0;
                t=0;
            }
            break;
         case 4:
            {
 for(i=0;i<a[13];i++)
                {
                    if(m4[i]==t)
                        break;
                }
                d=i;
                for(i=d;i<a[13]-1;i++)
                {
                    m4[i]=m4[i+1];
                }
                a[13]=a[13]-1;

                printf("the new list of the roll numbers of the students that have the book are\n");
                for(i=0;i<a[13]-1;i++)
                {
                    if(m4[i]==0)
                        break;
                         printf("%d.",i+1);
                    printf("%d",m4[i]);
                    printf("\n");
                }
                d=0;
                t=0;
            }
            break;
         case 5:
            {
 for(i=0;i<a[14];i++)
                {
                    if(m5[i]==t)
                        break;
                }
                d=i;
                for(i=d;i<a[14]-1;i++)
                {
                    m5[i]=m5[i+1];
                }
                a[14]=a[14]-1;

                printf("the new list of the roll numbers of the students that have the book are\n");
                for(i=0;i<a[14]-1;i++)
                {
                    if(m5[i]==0)
                        break;
                         printf("%d.",i+1);
                    printf("%d",m5[i]);
                    printf("\n");
                }
                d=0;
                t=0;
            }
            break;
          }

            }
            break;
         case 4:
            {
printf("please enter the 3 digit roll no. of the student who wants to return the book\n");
          scanf("%d",&t);
          switch (q)
          {
         case 1:
            {
                for(i=0;i<a[15];i++)
                {
                    if(ex1[i]==t)
                        break;
                }
                d=i;
                for(i=d;i<a[15]-1;i++)
                {
                    ex1[i]=ex1[i+1];
                }
                a[15]=a[15]-1;

                printf("the new list of the roll numbers of the students that have the book are\n");
                for(i=0;i<a[15]-1;i++)
                {
                    if(ex1[i]==0)
                        break;
                         printf("%d.",i+1);
                    printf("%d",ex1[i]);
                    printf("\n");
                }
                d=0;
                t=0;

            }
            break;
         case 2:
            {
 for(i=0;i<a[16];i++)
                {
                    if(ex2[i]==t)
                        break;
                }
                d=i;
                for(i=d;i<a[16]-1;i++)
                {
                    ex2[i]=ex2[i+1];
                }
                a[16]=a[16]-1;

                printf("the new list of the roll numbers of the students that have the book are\n");
                for(i=0;i<a[16]-1;i++)
                {
                    if(ex2[i]==0)
                        break;
                         printf("%d.",i+1);
                    printf("%d",ex2[i]);
                    printf("\n");
                }
                d=0;
                t=0;
            }
            break;
         case 3:
            {
 for(i=0;i<a[17];i++)
                {
                    if(ex3[i]==t)
                        break;
                }
                d=i;
                for(i=d;i<a[17]-1;i++)
                {
                    ex3[i]=ex3[i+1];
                }
                a[17]=a[17]-1;

                printf("the new list of the roll numbers of the students that have the book are\n");
                for(i=0;i<a[17]-1;i++)
                {
                    if(ex3[i]==0)
                        break;
                         printf("%d.",i+1);
                    printf("%d",ex3[i]);
                    printf("\n");
                }
                d=0;
                t=0;
            }
            break;
         case 4:
            {
 for(i=0;i<a[18];i++)
                {
                    if(ex4[i]==t)
                        break;
                }
                d=i;
                for(i=d;i<a[18]-1;i++)
                {
                    ex4[i]=ex4[i+1];
                }
                a[18]=a[18]-1;

                printf("the new list of the roll numbers of the students that have the book are\n");
                for(i=0;i<a[18]-1;i++)
                {
                    if(ex4[i]==0)
                        break;
                         printf("%d.",i+1);
                    printf("%d",ex4[i]);
                    printf("\n");
                }
                d=0;
                t=0;
            }
            break;
         case 5:
            {
 for(i=0;i<a[19];i++)
                {
                    if(ex5[i]==t)
                        break;
                }
                d=i;
                for(i=d;i<a[19]-1;i++)
                {
                    ex5[i]=ex5[i+1];
                }
                a[19]=a[19]-1;

                printf("the new list of the roll numbers of the students that have the book are\n");
                for(i=0;i<a[19]-1;i++)
                {
                    if(ex5[i]==0)
                        break;
                         printf("%d.",i+1);
                    printf("%d",ex5[i]);
                    printf("\n");
                }
                d=0;
                t=0;
            }
            break;
          }
            }
break;
         case 5:
            {
 printf("please enter the 3 digit roll no. of the student who wants to return the book\n");
          scanf("%d",&t);
          switch (q)
          {
         case 1:
            {
                for(i=0;i<a[20];i++)
                {
                    if(et1[i]==t)
                        break;
                }
                d=i;
                for(i=d;i<a[20]-1;i++)
                {
                    et1[i]=et1[i+1];
                }
                a[20]=a[20]-1;

                printf("the new list of the roll numbers of the students that have the book are\n");
                for(i=0;i<a[20]-1;i++)
                {
                    if(et1[i]==0)
                        break;
                         printf("%d.",i+1);
                    printf("%d",et1[i]);
                    printf("\n");
                }
                d=0;
                t=0;

            }
            break;
         case 2:
            {
 for(i=0;i<a[21];i++)
                {
                    if(et2[i]==t)
                        break;
                }
                d=i;
                for(i=d;i<a[21]-1;i++)
                {
                    et2[i]=et2[i+1];
                }
                a[21]=a[21]-1;

                printf("the new list of the roll numbers of the students that have the book are\n");
                for(i=0;i<a[21]-1;i++)
                {
                    if(et2[i]==0)
                        break;
                         printf("%d.",i+1);
                    printf("%d",et2[i]);
                    printf("\n");
                }
                d=0;
                t=0;
            }
            break;
         case 3:
            {
 for(i=0;i<a[22];i++)
                {
                    if(et3[i]==t)
                        break;
                }
                d=i;
                for(i=d;i<a[22]-1;i++)
                {
                    et3[i]=et3[i+1];
                }
                a[22]=a[22]-1;

                printf("the new list of the roll numbers of the students that have the book are\n");
                for(i=0;i<a[22]-1;i++)
                {
                    if(et3[i]==0)
                        break;
                         printf("%d.",i+1);
                    printf("%d",et3[i]);
                    printf("\n");
                }
                d=0;
                t=0;
            }
            break;
         case 4:
            {
 for(i=0;i<a[23];i++)
                {
                    if(et4[i]==t)
                        break;
                }
                d=i;
                for(i=d;i<a[23]-1;i++)
                {
                    et4[i]=et4[i+1];
                }
                a[23]=a[23]-1;

                printf("the new list of the roll numbers of the students that have the book are\n");
                for(i=0;i<a[23]-1;i++)
                {
                    if(et4[i]==0)
                        break;
                         printf("%d.",i+1);
                    printf("%d",et4[i]);
                    printf("\n");
                }
                d=0;
                t=0;
            }
            break;
         case 5:
            {
 for(i=0;i<a[24];i++)
                {
                    if(et5[i]==t)
                        break;
                }
                d=i;
                for(i=d;i<a[24]-1;i++)
                {
                    et5[i]=et5[i+1];
                }
                a[24]=a[24]-1;

                printf("the new list of the roll numbers of the students that have the book are\n");
                for(i=0;i<a[24]-1;i++)
                {
                    if(et5[i]==0)
                        break;
                         printf("%d.",i+1);
                    printf("%d",et5[i]);
                    printf("\n");
                }
                d=0;
                t=0;
            }
            break;
          }


            }
break;
     }
 }

 int Display (int k)
 {
     switch(k)
     {
     case 1:
        {
           printf("the list of  books in this branch is as follows \n ");
           printf(" S.NO |      NAME OF BOOK       | AUTHOR      | SERIAL    |      \n");
           printf("----------------------------------------------------------------- \n");
           printf("  1    | Discrete M. Structures  | YN Singh    |  101      |   \n ");
           printf(" 2    | Data Structures using C | Reema T.    |  102      |   \n ");
           printf(" 3    |  Computer Organization  | Carl H.     |  103      |    \n ");
           printf(" 4    |          DBMS           | G.K Gupta   |  104      |    \n ");
           printf(" 5    | Theory of Computation   | Michael S.  |  105      | \n");
           printf("---------------------------------------------------------------------------------- \n");
        }
        break;
     case 2:
        {
            printf("the list of  books in this branch  is as follows \n ");
           printf(" S.NO        NAME OF BOOK        AUTHOR        SERIAL              \n");
           printf("------------------------------------------------------------------------- \n");
           printf(" 1     |    Networking         |    Kurose      |   201         \n  ");
           printf(" 2     |  Applied Mathematics  | Kumbhojkar G.V |   202           \n ");
           printf(" 3     |      VHDL Primer      |    J.Bhasker   |   203           \n ");
           printf(" 4     |    Web Programming    |   Chris Bates  |   204           \n ");
           printf(" 5     |Computer Organization  |   Tata McGraw  |   205           \n ");
           printf("----------------------------------------------------------------------------------------\n");
        }
        break;
     case 3:
         {
              printf("the list of  books in this branch is as follows \n ");
           printf(" S.NO        NAME OF BOOK        AUTHOR        SERIAL                \n");
           printf("---------------------------------------------------------------------------------\n");
           printf(" 1.   |      Thermodynamics   |   P.K Nag       | 301       |      \n");
           printf(" 2.   |Strength of Materials  |  Oxford         | 302       |      \n");
           printf("3.    |    Fluid Mechanics    |  F.M White      | 303       |      \n");
           printf("4.    |        ToM            |  P.L Ballaney   | 304       |      \n");
           printf("5.    |    Applied Maths 4    |  G.V Kumbhojkar | 305       |      \n");
            printf("----------------------------------------------------------------------------------------\n");
         }
         break;
     case 4:
         {
             printf("the list of available books in this branch are as follows \n");
           printf(" S.NO        NAME OF BOOK        AUTHOR        SERIAL              #COPIES \n");
           printf("------------------------------------------------------------------------- \n");
           printf(" 1      |    Digital Design      | Morris Mano    |   401             \n ");
           printf(" 2     |    Network Analysis    |  M.E. Van      |   402            \n ");
           printf(" 3     |     Electromagnetic    | J.A Admister   |   403             \n ");
           printf(" 4     |    Control Systems     | J.N Manik      |   404            \n ");
           printf(" 5     |    Adaptive Control    |  Sastry S.S    |   405            \n ");
           printf("----------------------------------------------------------------------------------------\n");
         }
         break;
     case 5:
        {

            printf("the list of available books are as follows \n");
           printf(" S.NO        NAME OF BOOK        AUTHOR        SERIAL             \n");
           printf("------------------------------------------------------------------------- \n");
           printf(" 1     |    BEEE                | Ravish Singh   |   501        \n   ");
           printf(" 2     | Signals and Systems    |  J.S Katre     |   502          \n ");
           printf(" 3     |    VLSI Design         | Poonam Kadam   |   503           \n ");
           printf(" 4     |    Power Electronics   | P.S Bhimbra    |   504            \n");
           printf(" 5     |   Circuit Theory       |  Singh R.R    |    505           \n");
           printf("----------------------------------------------------------------------------------------\n");
        }
        break;
     case 6:
        {
            printf("please enter the branch number\n");
         printf(" 1 for Computer Engineering \n");
         printf("2 for Information Technology \n");
         printf("3 for Mechanical Engineering \n");
         printf("4 for Electronics and Telecommunication Engineering \n");
         printf("5 for Electronics Engineering \n");
        }
        break;
     case 7:
        {
            printf("Thank you for using the Library Management System. Have a good day\n");
                printf("*****************************************************************************\n");
        }


     }
 }


