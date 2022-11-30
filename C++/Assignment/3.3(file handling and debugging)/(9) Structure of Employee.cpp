#include<stdio.h>
struct Employee
{
	char name[30];
	float no;
	char Address[50];
	int Age;
	

};
int main()
{
	struct Employee bhavesh;
	
	bhavesh.name="bhavesh";
	bhavesh.no=8234237878;
	bhavesh.Address="Raj";
	bhavesh.Age=21;
	
	printf("Employee Name = %s \n",bhavesh.name);
	printf("Employee number =%f \n",bhavesh.no);
	printf("Employee Address =%s \n",bhavesh.Address);
	printf("Employee Age =%d \n",bhavesh.Age);
}

