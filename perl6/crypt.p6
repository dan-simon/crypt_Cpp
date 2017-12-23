sub get_descriptions ($f) {
  my $text = slurp($f);
  my @items = $text.split(/\n\n/);
  my %result;
  for @items {
    / '== ' (\N+) \n (.+) /;
    %result{~$0} = ~$1;
  }
  return %result;
}

say get_descriptions('../descriptions.txt');
