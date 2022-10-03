#!/usr/bin/python3
import random
import ctypes

ops = ctypes.CDLL('./100-operations.so')
a = random.randint(-111, 111)
b = random.randint(-111, 111)

print("{} + {} = {}".format(a, b, ops.add(a, b)))
print("{} + {} = {}".format(a, b, ops.sub(a, b)))
print("{} + {} = {}".format(a, b, ops.mul(a, b)))
print("{} + {} = {}".format(a, b, ops.div(a, b)))
print("{} + {} = {}".format(a, b, ops.mod(a, b)))
