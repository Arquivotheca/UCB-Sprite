#!/bin/csh -fx
# scale by 0.94, translate up by 300 units
# print font size 2 at 22 pt., 3 at 28 pt. and 4 at 38 pt.
/usr/local/gr2ps.old -s 1.2 1.2 -t -180 200 -2 18 -3 28 -4 38 $*
