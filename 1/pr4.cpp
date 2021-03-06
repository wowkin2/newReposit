/**
* @file         pr4.cpp
* @brief        Task1
* @task         4. �������������� ����� ���� ��������, �������� �������,
��� ���� ������ ��� � 2-� ������� �������� ������������ ������� ������ �����.
* @author       Volodymyr Spodaryk
* @email        spodaryk.volodymyr@i.ua
* ----------------------------------------------------------------------*/

#include <vcl.h>
//#include "stdafx.h"
#include <iostream>
#include <conio>
using namespace std;
typedef unsigned long int ULI;
typedef   signed long int SLI;
//------------------------- prototype functions -----------------------//

/**
* @brief        Change 2 bites in ULI
* @param[in]    ULI number to change
* @param[in]    int first bit position
* @param[in]    int second bit position
* @return       void
*/
void Show(ULI temp);

/**
* @brief        Change 2 bites in ULI
* @param[in]    ULI number to change
* @return       ULI changed number
*/
ULI Foo(ULI a, int pos1, int pos2);

//--------------------------- main function ---------------------------//

int main(void)
{
        ULI a;
        int pos1, pos2;
        cout<<"Input number: ";
        cin>>a;
        cout<<"Input first, second bit position: ";
        cin>>pos1>>pos2;
        cout<<"Binary: "<<endl;
        Show(a);
        cout<<endl<<"Output: "<<Foo(a,pos1,pos2)<<endl;
        cout<<"Binary: "<<endl;
        Show(Foo(a,pos1,pos2));
        getch();
        return 0;
}

//------------------------ realization of prototype ------------------//

ULI Foo(ULI x, int a1, int a2)
{

        a1 = (x & (1<<a1))>>a1;
        a2 = (x & (1<<a2))<<a2;
        x=a1 | a2;
        return x;//(x ^ 1) ;
}

void Show(ULI temp)
{
        ULI x[32];
        int i;
        for(i=0;i<32;i++)
        {
                x[i]=temp%2;
		temp=temp/2;
	}
        for(i=31;i>=0;i--)
        {
	        cout<<x[i];
                if((i)%4==0)
                {
                        cout<<" ";
                }
        }
        cout<<endl;
}

