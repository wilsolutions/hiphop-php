--TEST--
date_date_set() tests
--INI--
date.timezone=UTC
--FILE--
<?php

$dto = date_create("2006-12-12");
var_dump($dto);
var_dump($dto->format("Y.m.d H:i:s"));
///var_dump(date_date_set());
var_dump($dto->format("Y.m.d H:i:s"));
///var_dump(date_date_set($dto, 2006, 5));
var_dump($dto->format("Y.m.d H:i:s"));
var_dump(date_date_set($dto, 2006, 2, 15));
var_dump($dto->format("Y.m.d H:i:s"));
var_dump(date_date_set($dto, 2006, 24, 60));
var_dump($dto->format("Y.m.d H:i:s"));

echo "Done\n";
?>
--EXPECTF--
object(DateTime)#%d (0) {
}
string(19) "2006.12.12 00:00:00"

Warning: date_date_set() expects exactly 4 parameters, 0 given in %s on line %d
bool(false)
string(19) "2006.12.12 00:00:00"

Warning: date_date_set() expects exactly 4 parameters, 3 given in %s on line %d
bool(false)
string(19) "2006.12.12 00:00:00"
NULL
string(19) "2006.02.15 00:00:00"
NULL
string(19) "2008.01.29 00:00:00"
Done
