-- SELECT DISTINCT active, address_id FROM customer;

-- SELECT count(ACTIVE) from customer;
-- SELECT count(distinct ACTIVE), count(distinct address_id), count(distinct create_date), count(distinct customer_id), count(distinct email), count(distinct first_name) from customer;

-- select * FROM country WHERE country="South Korea"

-- SELECT * FROM customer WHERE customer_id % 2 = 0;
-- SELECT * FROM customer WHERE customer_id % 2 = 1;

-- SELECT * FROM payment WHERE amount > 3;
-- SELECT * FROM payment WHERE amount < 3;
-- SELECT * from payment WHERE amount BETWEEN 2 AND 3;
-- SELECT * FROM payment WHERE amount IN('2.99', '3');

-- SELECT * FROM customer;
-- UPDATE customer
-- SET first_name = 'John', last_name = 'Doe' 
-- where customer_id=1;

-- DELETE FROM customer where customer_id = 2; -- error 발생
-- SELECT * FROM customer; -- 다른 데이터와 연결되어 있을 경우에는 에러 발생함.


-- --SET FOREIGN_KEY_CHECKS=0; -- 따라서 삭제하기 전에 연결을 끊어주거나 다른 데이터를  disable 해야함
-- SELECT * FROM customer;
-- DELETE FROM customer where customer_id = 2;
-- SELECT * FROM customer;
-- --SET FOREIGN_KEY_CHECKS=1;

-- SELECT * from customer;
-- INSERT INTO customer (first_name, last_name);
-- value(BAE, JIN);
-- SELECT * FROM customer;

-- CREATE DATABASE testdb;

-- CREATE TABLE testdb.Persons2 (
--  PersonID int NOT NULL AUTO_INCREMENT,
--  LastName varchar(255) NOT NULL,
--  PRIMARY KEY(PersonID)
--  );

-- INSERT INTO testdb.persons2(LastName)
-- value(
--     "test2"
-- );

-- SELECT * FROM testdb.persons2
-- alter TABLE testdb.persons2
-- ADD Email varchar(255);
-- SELECT * FROM testdb.persons2

-- ALTER TABLE testdb.persons2
-- DROP column Email;

-- select * from testdb.persons2;

DROP DATABASE Persons2;