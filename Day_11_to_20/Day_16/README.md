# Things I learned in: Day_16
**Note:** use the github provided TOC for navigaing.

## Binary to decimal:
**Formula:** 
For binary number fedcba , Decimal number = f * 2^5 + e * 2^4 + d * 2^3 + …..+ a * 2^0.
```cpp
int main(){
int t=1;
    cin>>t;
    while((t--)>0){
        long long data;
        cin>>data;
        int len = 0;
        
        long long dec = 0;
        
        while(data!=0){
            dec += (data%10)*pow(2,len);
            len++;
            data /= 10;
        }
        cout<<dec<<endl;

    }
    return 0;
}
```

## Farenhiet to celsius:
got to know that there are different kinds of divisions available, integer devision,float devision, double devision etc. 
Source: [https://stackoverflow.com/questions/27971967/c-does-not-take-5-9-and-seems-to-typecast-it](https://stackoverflow.com/questions/27971967/c-does-not-take-5-9-and-seems-to-typecast-it)

**For example:** if you do `cout<<5/9` then its a integer devide so it will give you 0,not 0.55555, so u need to do it in floating way.
```
                5      // int
                5l     // long
                5.0    // double
                5.0f   // float
                5ul    // unsigned long
```
