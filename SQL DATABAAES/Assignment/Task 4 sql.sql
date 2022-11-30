show databases;
create database company_in;

use company_in;

create table Salesperson(SNo int,SNAME varchar(10),CITY varchar(10),COOMM float);

insert into Salesperson values(1001,"Peel","London",.12);
insert into Salesperson values(1002,"serres","San Jose",.13);
insert into Salesperson values(1004,"Motika","London",.11);
insert into Salesperson values(1007,"Rafkin","Barcelona",.15);
insert into Salesperson values(1003,"Axelod","New york",.1);

drop table Salesperson;

select *from Salesperson;

create table CUSTOMER(CNM INT,CNAME VARCHAR(10),CITY VARCHAR(10),RATING INT,SNO int);

insert into CUSTOMER values (201,"Hoffman","London",100,1001);
insert into CUSTOMER values (202,"Giovanne","Roe",200,1003);
insert into CUSTOMER values (203,"Liu","San Jose",300,1002);
insert into CUSTOMER values (204,"Grass","Barcelona",100,1002);
insert into CUSTOMER values (206,"Clements","London",300,1007);
insert into CUSTOMER values (207,"Pereira","Roe",100,1004);

select *from CuSTOMER;


select SName,City from Salesperson where City ="London" and COOMM >=.12;
select *from Salesperson where City in("Barcelona","London");
select *from Salesperson where COOMM between 0.10 and 0.12; 
select *from CUSTOMER where Rating <=100 or City ="Rome";