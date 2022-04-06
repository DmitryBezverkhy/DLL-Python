import sys
from ctypes import *


bit_depth_of_Python = "x64" if sys.maxsize > 2 ** 32 else "x86"  # Проверяем кодировку Python

lib = cdll.LoadLibrary(fr"Dll\{bit_depth_of_Python}\DllPastFunction.dll")  # Загружаем Dll

lib.window_print("AAAA")  # Выводит в новом окне сообщение
lib.sum_int(5, 6)  # Складывает два int
print()
lib.sum_double(c_double(10.3), c_double(-7.2))  # Складывает два double
print()
lib.sum_char(c_wchar_p("a"), c_wchar_p("b"))  # Складывает два char
