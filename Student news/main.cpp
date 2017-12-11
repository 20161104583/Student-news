//
//  main.cpp
//  Student news
//
//  Created by 龙龙 on 2017/12/11.
//  Copyright © 2017年 龙龙. All rights reserved.
//
//#include "stdafx.h"
#include <iostream>
using namespace std;
struct Student
{
    char name[50];
    char num[20];
    int age;
    struct Student *next;
};
int main(int argc, const char * argv[]) 
    // insert code here...
{
    struct Student *p,*q,*head;
    int i=1;
    head=new Student;
    q=head;
    strcpy(head->name,"wang");
    strcpy(head->num,"20161104583");
    head->age=20;
    while(cout<<"1or0?",cin>>i,i==1)
    {
        p=new Student;
        q->next=p;
        q=p;
        cin>>p->name;
        cin>>p->num;
        cin>>p->age;
        p->next=NULL;
    }
    p=head;
    while(p!=NULL)
    {
        cout<<p->name<<" "<<p->num<<" "<<p->age<<endl;
        p=p->next;
    }
    return 0;
}
