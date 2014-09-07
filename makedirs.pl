
@langs = ('objc','java','php');

for ($i=0; $i<42; $i++) {
  $tmp = $i + 1;
  foreach $lang (@langs) {
    print $tmp . "\t" . $lang . "\n";
    $cmd = "mkdir -p section$tmp/$lang";
    print $cmd . "\n";
    `$cmd`;
  }
}
