#include <stdio.h>
struct person{
    char name[10];
    struct person *partner;
    struct person *child;
    struct person *mother;
}p0 = {"Taro",(struct person *)0,(struct person *)0},
 p1 = {"Hanako",(struct person *)0,&p0},
 p2 = {"Hiroshi",&p1,&p0};

int main(){
    p1.partner = &p2;
    p0.mother = &p1;
    printf("myself partner child\n");
    printf("%s\n",p0.name);
    printf("%s %s %s\n",p1.name,p1.partner->name,p1.child->name);
    printf("%s %s %s\n",p2.name,p2.partner->name,p2.child->name);

    printf("\n");
    printf("Taro's mother = %s\n",p0.mother->name);
    printf("Taro's father = %s\n",p0.mother->partner->name);
    

}