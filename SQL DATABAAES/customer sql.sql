use mydata;

select *from customer;
set autocommit=0;

commit;

update customer set c_name="milan" where id=1;
savepoint s;

delete from customer where id=4;

rollback to s;





