## UVA10035_Primary_Arithmetic_3
+ website : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=976
-----
```c++
while(a!=0||b!=0)
{	
  carry=a%10+b%10+carry;
  carry/=10;
  a/=10;
  b/=10;
  if(carry!=0)
  count++;
}
```
The important thing is how to deal the carry number.
