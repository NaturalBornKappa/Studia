<!DOCTYPE html>
<html>
<body>

<?php


$x = 5; //zasieg globalny
$y = 10; //zasieg globalny

function myTest(){
	$GLOBALS['y'] = $GLOBALS['x'] + $GLOBALS['y'];
}

myTest();
echo $y;

?>

</body>
</html>
