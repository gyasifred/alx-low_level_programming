# C - Dynamic libraries

# steps
``` gcc *.c -c -fPIC```
``` gcc *.o -shared -o libdynamic.so```

# Call C functions from Python
```gcc -shared -o 100-operations.so 100-operations.c -I/usr/include/python3.8 -lpython3.8```
