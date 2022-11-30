show databases;
use company;
select *from employees;
describe Employees;
drop table employees;
create table Employees(id int auto_increment primary key,first_name varchar(10) not null,last_name varchar(10) not null,city varchar(20),field varchar(20),age int check(age>=21),salary int,contact varchar(10) unique key);
insert into Employees(first_name,last_name,city,field,age,salary,contact) values("kunal","malviya","ajmer","manager",23,20000,'8824488693');
insert into Employees(first_name,last_name,city,field,age,salary,contact) values("danish","dekosta","jaipur","hr",25,22000,'7124488123');
insert into Employees(first_name,last_name,city,field,age,salary,contact) values("deepak","kumar","kota","hr",21,15000,'1234488693');
insert into Employees(first_name,last_name,city,field,age,salary,contact) values("milan","parmar","ahemdabad","coder",22,10000,'8827488693');
insert into Employees(first_name,last_name,city,field,age,salary,contact) values("bhavesh","malviya","pali","it",23,20000,'9783352201');
insert into Employees values(6,"yash","solanki","rajkot","marketing",27,25000,'9057276783');
insert into Employees(first_name,last_name,city,field,age,salary,contact) values("harry","potter","gandhinagar","accontant",21,30000,'4567819023');
insert into Employees(first_name,last_name,city,field,salary,contact) values("sural","kumar","ahemdabad","it",27000,'1234567891');
select *from Employees;
insert into Employees(first_name,last_name,city,age,salary,contact) values("black","adam","gandhinagar",21,15500,'5102395748');
insert into Employees(first_name,last_name,field,salary) values("pushpa","raj","finance",20000);

update Employees set field ="marketing" where id=3;

alter table Employees add column job_code int after salary;
select *from employees;
alter table Employees add column DOB int after salary;
alter table Employees add column job_cod int after salary;
alter table Employees drop job_cod;
alter table Employees modify DOB date;
alter table Employees rename column job_code to job_cod;
alter table Employees rename to employees;
alter table employees rename to Employees;

select *from Employees;
desc Employees;

update Employees set job_cod =101 where id =1;
update Employees set job_cod =124,DOB='2022/01/01' where id =2;
update Employees set job_cod =167 where id =3;
update Employees set job_cod =122,DOB='2022/04/11' where id =4;
update Employees set job_cod =111,DOB='1992/05/11' where id =5;
update Employees set job_cod =130,DOB='1076/01/11' where id =6;
update Employees set job_cod =167,DOB='1978/06/11' where id =7;
update Employees set job_cod =189,DOB='1996/03/11' where id =8;
update Employees set job_cod =110 where id =9;
update Employees set job_cod =198 where id =10;

select first_name from Employees where id=2;
select *from Employees where id=2;
select first_name from Employees where id=2 or field ="it";

select *from Employees where id=1 and salary !=15000;
select *from Employees where id=1 and salary >15000;
select *from Employees where id=1 and salary !=15000;

select *from Employees where salary between 12000 and 20000;
select *from Employees where first_name like'b%';
select  salary from Employees where first_name like'%k';
select *from Employees where city in ("ahemdabad","kota");
select distinct city from Employees;

select city from Employees order by city;
select *from Employees order by job_cod;

select count(id)  from Employees;
select count(id) as total_customer from Employees;

select sum(salary) as Revenue from Employees;
select sum(id) as total_number from Employees;

select min(salary) as lowest_salary from Employees;
select max(job_cod) as highes from Employees;   

select city from Employees;
select cityfrom Employees group by city;

select city,count(id) from Employees group by city;

select city,count(id) from Employees where city in("ahemdabad","rajkot") group by city;

select city,count(id) from Employees group by city having (count(id)>=2);
select city,count(id) from Employees group by city having (count(id)<2);

select *from Employees;
create index i on Employees(id,first_name,last_name,city,field,age,salary,DOB,job_cod,contact);
show indexes from Employees;

show indexes from Employees\G;
drop index i on Employees;


