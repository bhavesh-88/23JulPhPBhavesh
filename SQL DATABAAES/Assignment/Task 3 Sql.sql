show databases;
 create  database Company_info;
 use Company_info;
 create table Employee(Employee_id int primary key Auto_increment,First_Name varchar(10),Last_Name varchar(10),Salary int,Joining_date varchar(20),department varchar(10));
 
 
 insert into Employee values(1,"John","Abraham",1000000,"01-Jan-13 12 AM","Bankiing");
 insert into Employee (First_Name,Last_Name,Salary,Joining_date,department) values("Michael","Clarke",800000,"01-JAN-13 12 AM","Insurance");
 insert into Employee (First_Name,Last_Name,Salary,Joining_date,department) values("Roy","Thomas",700000,"01-FEB-13 12 AM","Banking");
 insert into Employee (First_Name,Last_Name,Salary,Joining_date,department) values("Tom","Jose",600000,"01-FEB-13 12 AM","Insurance");
 insert into Employee (First_Name,Last_Name,Salary,Joining_date,department) values("Jerry","Pinto",650000,"01-FEB-13 12 AM","Insurance");
 insert into Employee (First_Name,Last_Name,Salary,Joining_date,department) values("Philip","Mathew",750000,"01-JAN-13 12 AM","Services");
 insert into Employee (First_Name,Last_Name,Salary,Joining_date,department) values("TestName1","123",650000,"01-JAN-13 12 AM","Services");
 insert into Employee (First_Name,Last_Name,Salary,Joining_date,department) values("TestName2","Lname%",600000,"01-FEB-13 12 Am","Insurance");
 select *from Employee;
 
 
 
 create table Incentive(Employee_ref_id int,Incentive_date varchar(10),Incentive_amount int);

insert into Incentive values(1,"01-FEB-13",5000);
insert into Incentive values(2,"01-FEB-13",3000);
insert into Incentive values(3,"01-FEB-13",4000);
insert into Incentive values(1,"01-JAN-13",4500);
insert into Incentive values(2,"01-JAN-13",3500);

select *from Incentive; 

select First_Name from Employee ;
select First_Name ,Joining_date,Salary from Employee; 
 select *from Employee  order by First_Name;
 select *from Employee  order by Salary DESC;
 
 select *from Employee where First_name like 'J%';
 select department,Salary from Employee  order by Salary;
 
select  e.First_Name ,i.Incentive_amount from Employee e inner join  Incentive i 
 
 
 
 
 
 
 