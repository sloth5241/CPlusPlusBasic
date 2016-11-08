#include <iostream>
using namespace std;

struct student{  
    char *name;  
    int score;  
    struct student* next;  
}stu,*stu1;   

int main(){   
    try{
        stu.name = (char*)malloc(sizeof(char)); /*1.结构体成员指针需要初始化*/  
        strcpy(stu.name,"Jimy");  
        stu.score = 99;  

        stu1 = (struct student*)malloc(sizeof(struct student));/*2.结构体指针需要初始化*/  
        stu1->name = (char*)malloc(sizeof(char));/*3.结构体指针的成员指针同样需要初始化*/  
        stu.next  = stu1;  
        strcpy(stu1->name,"Lucy");  
        stu1->score = 98;  
        stu1->next = NULL;  
        printf("name %s, score %d \n ",stu.name, stu.score);  
        printf("name %s, score %d \n ",stu1->name, stu1->score);  
        free(stu1);  
    }
    catch(const char* msg){
        cout << "exception msg:" << msg << endl; 
    }
    return 0;  
}
