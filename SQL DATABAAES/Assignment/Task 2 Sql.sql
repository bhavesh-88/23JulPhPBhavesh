show databases;
use School;

create table Info(First_Name varchar(20),Last_Name varchar(20),Address varchar(50),city varchar(10),Age int);

insert into Info values ("Mickey","Mouse","123 Fantasy Way","Anahelim",73);
insert into Info values ("Bat","Man","321 Cavern Ave","Gothsm",54);
insert into Info values ("Wonder","woman","987 Truth Way","Paradise",39);
insert into Info values ("Donald","Duck","555 Quack Street","Mallard",65);
insert into Info values ("Bugs","Bunny","567 Carrot Street","Rascal",58);
insert into Info values ("wiley","coyote","999 acme way","canyon",61);
insert into Info values ("Cat","woman","234 Purrfect Street","Hairball",32);
insert into Info values ("tweety","Bird","543 ","Itotitaw",20);

select *from Info;