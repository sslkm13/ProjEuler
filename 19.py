import datetime

sundays = 0
for y in xrange(1901, 2001):
    for m in xrange(1, 13):
        d = datetime.date(y, m, 1)
        if d.weekday() == 6:
            sundays = sundays + 1

print sundays
