show databases;
use company;
select *from employees;
alter table employees add column sum int;

DELIMITER //
create trigger r after insert on employees
for each row
begin


set new.sum =old.age+old.job_cod;
end ;//

describe employees;
insert into employees (id,first_name,last_name,city,field,age,salary,job_cod,sum) values(11"aa","cv","asd","aa",12,12000,111,0);

DELIMITER //
create  procedure em()
begin
    declare employees_first_name varchar(10);
    declare employees_city varchar(20);
	declare employees_field varchar(20);
    declare temp int default 0;
	declare c1 cursor for select first_name,city,field from employees;
	declare continue handler for not found set temp=1;
open c1;
get_employees:
    loop
    fetch c1 into employees_first_name,employees_city,employees_field;
    if temp=1 then
         leave get_employees;
	end if;
       select concat(employees_first_name,employees_city,employees_field);
    end loop 
get_employees;
    close c1;
end; //

call em;
drop procedure em; &&
