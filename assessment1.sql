use task;

create table customer(
customer_id int,
cust_name text not null,
city text not null,
grade varchar(50),
salesman_id int
);

insert into customer(customer_id,cust_name,city,grade,salesman_id)values
(3002,"nick rimando","new york","100",5001),
(3007,"brad davis","new york","200",5001),
(3005,"graham zusi","california","200",5002),
(3008,"julian green","london","300",5002),
(3004,"fabian johnson","paris","300",5006),
(3009,"geoff camron","barlin","100",5003),
(3003,"jozy altidor","moscow","200",5007),
(3001,"brad guzan","london"," ",5005);

select *from customer;

create table salesmans(
salesman_id int,
name text not null,
city text not null,
commission varchar(50)
);

insert into salesmans(salesman_id,name,city,commission)values
(5001,"james hoog","new york",0.15),
(5002,"nail knite","paris",0.13),
(5005,"pit alex","london",0.11),
(5006,"mc lyon","paris",0.14),
(5007,"paul adam","rome",0.13),
(5003,"lauson hen","san jose",0.12);

select * from salesmans;

select c.cust_name,c.city,s.commission from customers as c left join salesmans as s on c.salesman_id=s.salesman_id;


