Formatted Output 

printf("who:%s size%d cost%5.2f", "you",12,1.2);

% = strings

%d = integer 

%5.2f = floating points

Output Produced: who:you size: 12 cost 1.20

- scanf reads formatted input from standart input.

Example

 scanf(format_str, &arg1, &arg2, ...);

 - arguments (arg) are the addresses of variables that stores the read values

 - format string tells scanf how the input will be formatted

 Input data: y 101

 char c;
 int i;
 scanf("%c %d", &c, &i);

