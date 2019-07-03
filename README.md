
# Answers for C Test Semester 2 Moad 1

The files in this repository are answers for the test.


# Question 1

חנות מוצרי חשמל.... צרו פונקציה שתקבל שם הקונה, כמה מוצרים הוא רוצה, ולקבל מחירים
אם קנה
מוצר 1: 10 אחוז הנחה
שני מוצרים: 20 אחוז הנחה
שלושה מוצרים ומעלה: 30% הנחה
אסור לשנות את המיין
```
int main ()
{
    int num;        //amount of costumers
    int maxPay;        //Biggest buy
    pay (&num, &maxPay);
    printf ("The biggest purchase was: %.2f",maxPay);
    printf ("There where %d clients that used the sale",num);
}
```

# Question 2

What is the print of the next code:
```
int fun(int counter)
{
    printf("\n%d", counter);
    if (counter < 3)
    {
        counter++;
        fun(fun(fun(counter)));
    }
    return counter;
}

int main()
{
    fun(1);
    return 0;
}
```


# Question 3
Create function as follow:
```
char* duplicate(char* letters, int* digits)
```
Where letters is a string
and digits is an array of numbers

verify letters has only letters (a-z and A-Z)
verify digits only has positive numbers

if any fail return Null pointer

The function will return a string with each letter repeating by the amount of the number in the corresponding array (digits)

# Question 4
Create a function 
```
int  sumOfDiv(int data[], int size, int div)
```
Where data is an array of numbers in the size of size
and div is a number
return a sum of all numbers that divide with div without remainder

## note
All code and questions where written from memory there are some inconsistencies
