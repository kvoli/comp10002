Quiz 1
===

## Practice Problems

>  The most important reason to regularly back up computers is: 

Group of answer choices \
Backup disks are cheap \
The hardware is usually unreliable \
The computer hardware is expensive \
The programs installed on the computer are expensive \
The data stored on the computer is usually of either personal or commercial value far greater than the cost of the hardware itself 

> Which of the following statements does not result in the value of variable n increasing by one: 

n = n+1 \
n++ \
n = n + 4 < 5 \
n += 1 \
n += n!=n+1 

> The following code fragment manipulate two int variables, jill and jack:

```c
    jill = 0;
    jack = 1;
    while (jack < 1000) {
        jill += 1;
        jack += jack;
    }
```

10 and 1000 respectively \
9 and 512 respectively \
11 and 1024 respectively \
10 and 1024 respectively \
It is not possible to tell, as not enough information has been provided 

> The following function was written by a student, and  is intended to add up and return the sum of the factors of the argument n, not including n itself, assuming that n ≥ 1:


```c
    int
    sumfactors(int n) {
        int sum=1, f;
        for (f=2; f<n; n++) {
            if (n%f==0) {
                sum += f;
            }
        }
        return sum;
    }
```

The function executes, and returns the (expected) value 6 \
The function executes for a few seconds, and then returns a wildly incorrect value \
The function executes, and returns the (unexpected) value 5 \
The function enters an endless loop and no value is returned \
The function executes, and returns the (unexpected) value 7 


