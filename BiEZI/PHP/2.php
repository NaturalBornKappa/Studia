<!DOCTYPE html>
<html>
<body>

<?php
$x = 5; //zasieg globalny
$y = 10; //zasieg globalny

function myTest(){
	global $x, $y;
	$y= $x + $y;
}

myTest();
echo $y;

?>

</body>
</html>
