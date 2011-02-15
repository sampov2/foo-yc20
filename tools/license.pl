#!/usr/bin/perl

use strict;

open(LICENSE, "LICENSE");
my $license = join("",<LICENSE>);
close(LICENSE);

my $filename = $ARGV[0];
open(IN,$filename) || die("Could not open $filename");

my $text = join("",<IN>);
close(IN);

$text =~ s-Copyright[^\*]*\*/-$license*/-m;

if ($ARGV[1] eq "-w") {
	open(OUT,">$filename");
	print OUT $text;
	close(OUT);
} else {
	print $text;
}


