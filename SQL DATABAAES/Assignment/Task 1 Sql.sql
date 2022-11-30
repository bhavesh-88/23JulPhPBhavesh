show databases;
drop database 23july;
create database School;
use School;

create table student(Rollno int primary key,Name varchar(10),Branch varchar(20));

insert into student values(1,"jay","Computer Science");
insert into student values(2,"Suhani","Electronic and Com"),(3,"Kirti","Electronic and Com");

select *from student;

create table Exam(Rollno int , Foreign key (Rollno) references student(Rollno),S_code varchar(10),Marks int,P_code varchar(20));

create table Exam(Rollno int ,S_code varchar(10),Marks int,P_code varchar(20), CONSTRAINT FOREIGN KEY (Rollno)
    REFERENCES student(Rollno));
drop table Exam;
insert into Exam values(1,"CS11",50,"CS");
insert into Exam values(1,"CS12",60,"CS");
insert into Exam values(2,"EC101",66,"EC");
insert into Exam values(2,"EC102",70,"EC");
insert into Exam values(3,"EC101",45,"EC");
insert into Exam values(3,"CS102",50,"EC");

select *from Exam;

describe Exam;


