show databases;
create database Marketing;

create table Customer(Customer_id int,Cus_name varchar(10),City varchar(10),Grade int,Salesman_id int);

insert into Customer values(3002,"Nick Rimando","New York",100,5001);
insert into Customer values(3007,"Brad Davis","New York",200,5001);
insert into Customer values(3005,"Graham Zusi","California",200,5002);
insert into Customer values(3008,"Julien Green","London",300,5002);
insert into Customer values(3004,"Fabian Johnson","Paris",300,5006);
insert into Customer values(3009,"Geoff Cameron","Berlin",100,5003);
insert into Customer values(3003,"Jozy Altidor","Moscow",200,5007);
insert into Customer (Customer_id,Cus_name,City,Salesman_id)values(3001,"Brad Guzan","London",5005);

select *from Customer;

create table Salesman(Salesman_id int,name varchar(10),City varchar(10),Commission float);

insert into Salesman values(5001,"James Hoog","New York",0.15);
insert into Salesman values(5002,"Nail knite","Paris",0.13);
insert into Salesman values(5005,"Pit Alex","London",.11);
insert into Salesman values(5006,"Mc Lyon","Paris",.14);
insert into Salesman values(5007,"Poul Adam","Rome",.13);
insert into Salseman values(5003,"Lauson HEn","San Jose",.12);

select *from Salesman;