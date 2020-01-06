# Python is an interpreted, high-level, general-purpose programming language.
# The timeit python module provides a simple function that determines the execution time of small bits in python code.

import timeit
code_to_test = """
a = range(100000)
b = []
for i in a:
    b.append(i*2)
"""
elapsed_time = timeit.timeit(code_to_test, number=100)/100
print(elapsed_time)
