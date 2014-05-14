<?hh

$HowManyTimesIsAdrianAwesome = 100;

for ($i = 1; $i <= $HowManyTimesIsAdrianAwesome; $i++) {
    echo get_message( $i );
}

function get_message(int $index) : string {
	return "Adrian is awesome ".$index." time(s) \n";
}
