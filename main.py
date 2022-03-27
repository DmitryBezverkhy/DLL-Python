from ctypes import *


lib = cdll.LoadLibrary(r"Dll\x64\DllPastFuction.dll")
lib.FunctionPrint1()
print()
lib.FunctionPrint2()
print()
lib.FunctionPrint3()

