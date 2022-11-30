#include<stdio.h>
//	structures is user defined datatype

struct employes
{
	
	char name[20];
    long int no;
	char address[50];
	int age;
};
int main()
{
	struct employes bhavesh={"bhavesh",3456789012,"Raj",21};
	struct employes suraj={"suraj",3456789012,"delhi",22};
	struct employes roshan={"roshan",3456789012,"Mp",23};
    struct employes Dharmesh={"Dharmesh",3456789012,"Mh",24};
	struct employes rajesh={"rajesh",3456789012,"Ahemdabad",25};
	
	printf("\n Name=%s number=%ld Address=%s Age=%d",bhavesh.name,bhavesh.no,bhavesh.address,bhavesh.age);
    printf("\n Name=%s number=%ld Address=%s Age=%d",suraj.name,suraj.no,suraj.address,suraj.age);
    printf("\n Name=%s number=%ld Address=%s Age=%d",roshan.name,roshan.no,roshan.address,roshan.age);
    printf("\n Name=%s number=%ld Address=%s Age=%d",Dharmesh.name,Dharmesh.no,Dharmesh.address,Dharmesh.age);
    printf("\n Name=%s number=%ld Address=%s Age=%d",rajesh.name,rajesh.no,rajesh.address,rajesh.age);
 return 0;
 
}

