#!/usr/bin/python3
import sys
import math

number = int(input().strip())
socks = [int(c_temp) for c_temp in input().strip().split(' ')]

pairs = 0

for colour in set(socks):
  singlesocks = len([x for x in socks if x == colour])
  pairs += math.floor(singlesocks/2)

print(pairs)
