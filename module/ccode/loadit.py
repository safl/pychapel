from ctypes import cdll

hello_lib   = cdll.LoadLibrary("hello_c.so")
helloc_c    = hello_lib.hello_c

print helloc_c()
