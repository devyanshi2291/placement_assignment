//devyanshi khatri
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,c,x;
	cout<<"Enter a three digit number n:-";
	cin>>a;
    x=a%10;
    a=a/10;
    b=a%10;
    c=a/10;

    if (x==c)
    
       cout<<"It is PALINDROME. "<<endl;
    else
       cout<<"It is NOT PALINDROME. "<<endl;
    
    getch();
}