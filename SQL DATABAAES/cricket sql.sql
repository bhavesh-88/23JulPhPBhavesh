show databases;
create database cricket;
use cricket;
create table cricket1 (player_id int,player_N varchar(20), Runs int,Charisma int);
insert into cricket1 values(01,"virat",20,55);
insert into cricket1 values(20,"bhavesh",11,30);
insert into cricket1 values(02,"suraj",41,23);
insert into cricket1 values(03,"Rohit",10,31);
insert into cricket1 values(04,"jagdish",50,10);
insert into cricket1 values(15,"Amit",43,87);
insert into cricket1 values(18,"Roshan",22,11);
insert into cricket1 values(22,"imran",25,68);
insert into cricket1 values(09,"yusuf",20,55);
insert into cricket1 values(28,"Narender",65,40);

select *from cricket1;

create table cricket2 (player_id int,player_N varchar(20), Runs int,popularity int);
insert into cricket2 values(01,"virat",20,5);
insert into cricket2 values(02,"bhavesh",11,13);
insert into cricket2 values(03,"suraj",41,2);
insert into cricket2 values(04,"Rohit",10,11);
insert into cricket2 values(05,"jagdish",50,10);
insert into cricket2 values(06,"Amit",43,8);
insert into cricket2 values(07,"Roshan",22,11);
insert into cricket2 values(08,"imran",25,6);
insert into cricket2 values(09,"yusuf",20,5);
insert into cricket2 values(10,"Narender",65,15);

select *from cricket2;
drop table cricket2;
update cricket2 set player_N ="bhavesh" where player_id=20;

select *from cricket1 union
select *from cricket2;

select player_N,popularity from cricket2 where popularity >(select avg(popularity) from cricket2);
select avg(popularity) from cricket2;

select player_N,player_id from cricket1 where cricket1.player_id in(select player_id from cricket2);

select player_N,player_id,runs from cricket1 where runs >(select avg(runs) from cricket1);
select avg(runs) from cricket1;

select * from cricket1 where player_N like 'N%';

select * from cricket1 where player_N not like 'N%';

create table newcricket (player_id int,player_N varchar(20), Runs int,Charisma int,player_idd int,player_Nn varchar(20), Runss int,popularity int);
insert into newcricket values(2,"bhavesh",11,30,05,"jagdish",50,10);
insert into newcricket values(3,"suraj",41,23,02,"bhavesh",11,13);
insert into newcricket values(4,"Rohit",10,31,03,"suraj",41,2);
insert into newcricket values(5,"jagdish",50,10,04,"Rohit",10,11);
insert into newcricket values(6,"Amit",43,87,06,"Amit",43,8);
insert into newcricket values(7,"Roshan",22,11,07,"Roshan",22,11);
insert into newcricket values(8,"imran",25,68,08,"imran",25,6);
insert into newcricket values(9,"yusuf",20,55,09,"yusuf",20,5);
insert into newcricket values(10,"Narender",65,40,10,"Narender",65,15);

select *from newcricket;
 
select * from newcricket where charisma is null;
select * from newcricket where charisma >25;
 
 
DELIMITER //
create procedure b()
BEGIN
select *from newcricket;
select player_id from newcricket; 
select Runs from newcricket;
 end //
 
 call b(); //
 drop procedure b; //
 
DELIMITER &&
create trigger b 









 