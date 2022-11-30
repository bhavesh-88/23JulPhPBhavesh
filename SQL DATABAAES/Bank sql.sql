show databases;
create database Bank;
use Bank;
create table Bank_details(Product char(10),quantity int,price real,purchase decimal(6.2),estimated_sale float);
describe Bank_details;
insert into Bank_details values("paycard",3,330,8008,9009);
insert into Bank_details values("paypoints",3,200,800,6800);
insert into Bank_details values("paycard",3,330,8008,9009);

alter table Bank_details add column Geolocation varchar(20);

select *from Bank_details;

select Geolocation from Bank_details where quantity =3;

select char_length(Product) from Bank_details where Product="paycard";
alter table Bank_details modify Product varchar(20);

create table Bank_Holidays(holidays date,start_time datetime,End_time datetime);
insert into Bank_Holidays values(current_date(),current_date(),current_date());
select *from Bank_Holidays;
insert into Bank_Holidays values("paycard",3,330,8008,9009);
update Bank_Holidays set holidays = date_add(holidays,interval 1 day);


select product as iop from Bank_details;
select *from Bank_details limit 1;

select  substr(Geolocation ,1,5) from Bank_details;

DELIMITER //
create procedure c()
BEGIN
select *from Bank_details;
end ;//

call c;


