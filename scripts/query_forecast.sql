
explain analyze select a_time, value from ex1 where a_time > 1000 forecast value on a_time number 10;
set ar_start=1000;
explain analyze select a_time, value from ex1ts where a_time > 1000  forecast value on a_time number 10;
explain analyze select a_time, value from ex1ts  forecast value on a_time number 10;

explain analyze select a_time, value from ex1 where a_time > 10000  forecast value on a_time number 10;
set ar_start=10000;
explain analyze select a_time, value from ex1ts where a_time > 10000  forecast value on a_time number 10;
explain analyze select a_time, value from ex1ts  forecast value on a_time number 10;

explain analyze select a_time, value from ex1 where a_time > 50000 forecast value on a_time number 10;
set ar_start=50000;
explain analyze select a_time, value from ex1ts forecast value on a_time number 10;
explain analyze select a_time, value from ex1ts where a_time > 50000 forecast value on a_time number 10;


explain analyze select a_time, value from ex1 where a_time > 100000 forecast value on a_time number 10;
set ar_start=100000;
explain analyze select a_time, value from ex1ts forecast value on a_time number 10;
explain analyze select a_time, value from ex1ts where a_time > 100000 forecast value on a_time number 10;



explain analyze select a_time, value from ex1 where a_time > 110000 forecast value on a_time number 10;
set ar_start=110000;
explain analyze select a_time, value from ex1ts forecast value on a_time number 10;
explain analyze select a_time, value from ex1ts where a_time > 110000 forecast value on a_time number 10;

explain analyze select a_time, value from ex1 where a_time > 117000 forecast value on a_time number 10;
set ar_start=117000;
explain analyze select a_time, value from ex1ts forecast value on a_time number 10 ;



explain analyze select a_time, value from ex1 where a_time > 118700 forecast value on a_time number 10;
set ar_start=118700;
explain analyze select a_time, value from ex1ts forecast value on a_time number 10 ;
explain analyze select a_time, value from ex1ts where a_time > 118700 forecast value on a_time number 10;

