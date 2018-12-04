//
//  main.cpp
//  OverRidingExampleNew
//
//  Created by Mac on 04/12/18.
//  Copyright © 2018 tops. All rights reserved.cf
//

#include <iostream>

class StudentClass {
    int no;
    char name[30];
    
public:
    void setData(int no, char name[30])
    {
        this->no = no;
        //this->name = name;
        strcpy(this->name, name);
    }
    
    virtual void showData()
    {
        std::cout<<"\n\nNo is :"<<no;
        std::cout<<"\nName is :"<<name;
    }
    
};

class ExamClass:public StudentClass {
    int marks[3];
    int total;
    double per;
    
public:
    void setMarks()
    {
        int i = 0;
        total = 0;
        for (i=0; i<3; i++) {
            std::cout<<"\n\tEnter Marks:\t";
            std::cin>>marks[i];
            total += marks[i];
        }
        
        
        per = total / 3;
    }
    
    virtual void showData()
    {
        StudentClass::showData();
        std::cout<<"\n\nMarks:\n";
        for (int i=0; i<3; i++) {
            std::cout<<"\n\t Marks:\t"<<marks[i];
        }
        std::cout<<"\n\tTotal is :"<<total;
        std::cout<<"\n\tPer is :"<<per;
    }
};
int main(int argc, const char * argv[]) {
    
    ExamClass e1;
    e1.setData(1, "bhadresh");
    e1.setMarks();
    
    e1.showData();
    return 0;
}
