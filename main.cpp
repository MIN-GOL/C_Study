# include <iostream>

// HelloWorld
// ------------------------------------------------
//int main() {
//    printf("Hello, World!\n");
//    return 0;  // 返回 0表示这个程序是正常退出的
//}
// ------------------------------------------------


// 数据类型
// ------------------------------------------------
//int main() {
//    printf("int: %d \n", sizeof(int));
//    printf("float: %d \n", sizeof(float));
//    printf("double: %d \n", sizeof(double));
//    printf("char: %d \n", sizeof(char));
//
//    return 0;
//}
// ------------------------------------------------


// 变量
// ------------------------------------------------
//int main() {
//    int a, b;
//    float salary = 56.23;
//    char letter = 'z';
//    a = 8;
//    b = 34;
//    int c = a + b;
//
//    printf("%d \n", c);         // %d 表示整数
//    printf("%f \n", salary);    // %f 表示浮点数
//    printf("%c \n", letter);    // %c 表示字符
//
//    return 0;  // 正常退出
//}
// ------------------------------------------------


// 常量
// ------------------------------------------------
// #define PI 3.141592654   // 预处理一个PI 常量， 存储值为3.14 （注意： 请勿在#define语句的末尾添加分号字符）
//int main() {
//    const double PI = 3.14;  // const 关键字表示常量， 不可修改
//    printf("%f",PI);
//
//    return 0;
//}
// ------------------------------------------------


// 输入
// ------------------------------------------------
//int main() {
////   第一种输入 getchar() -> 读取下一个单子符输入的值
//    char a = getchar(); // 获取输入的字符
//    printf("You entered:%c", a);
//
////   第二种输入 gets() -> 将输入的字符串读取为有序序列， 也称为字符串
//    char a[100];
//    gets(a);
//    printf("You entered:%s", a);
//
////  第三种输入 scanf() -> 可以读入任何固有类型的数据并自动把数值变换成适当的机内格式
//    int a;
//    scanf("%d", &a);          // scanf遇到空格后停止
//    printf("You entered: %d", a);
//
//
//    int a, b;
//    printf("Enter two numbers: ");
//    scanf("%d %d", &a, &b);
//    printf("The sum is: %d", a + b);
//
//    return 0;
//}
// ------------------------------------------------


// 输出
// ------------------------------------------------
//int main(){
//    // putchar() -> 向终端输出一个字符
//    char a  = getchar(); // 获取输入的字符
//    printf("You entered:%c", a);
//    putchar(a); // 将字符输出到屏幕
//
//    // puts() -> 输出显示为字符串 （只能用来输出字符串）
//    char a[100];
//    gets(a);
//
//    printf("You entered:%s", a);
//    puts(a); // 将字符串输出到屏幕
//
//    return 0;
//}
// ------------------------------------------------


// 格式化输入
// ------------------------------------------------
//int main() {
//    int x;
//    float y;
//    char text[20];                             // 输入10，22.5，abcd
//    scanf("%d %f %s", &x, &y, text);    // 这里指的是将10分配给x 20.5分配给y 将文本abcd分配给文本(必须使用 &来访问变量地址
//                                              //  字符串不需要 & 因为字符串充当了指针
//    printf("%d  %d  %s", x, y, text);
//
//    return 0;
//}
// ------------------------------------------------


// 格式化输出
// ------------------------------------------------
//int main() {
//    printf("The tree has %d apples.\n", 22);
//
//    printf("Hello World!\n");       // 如果要输出 %符号， 在格式字符中使用 %%
//
//    return 0;
//}
// ------------------------------------------------


// 注释
// ------------------------------------------------
//int main() {
//    // 单行注释
//    /* Output a string */
//
//    // 多行注释
//    /*
//     * Output a string
//     */
//}
// ------------------------------------------------


// 算术运算符
// ------------------------------------------------
//int main() {
//    int length = 10;
//    int width = 5;
//    int area = length * width;
//
//    printf("%d \n", area);  /* 50 */
//
//    return 0;
//}
// ------------------------------------------------


// /与%的区别
// ------------------------------------------------
//int main() {
//    int i1 = 10;
//    int i2 = 3;
//    int quotient, remainder;
//    float f1 = 4.2;
//    float f2 = 2.5;
//    float result;
//
//    quotient = i1 / i2; // 3 -> 整数除法 保留整数部分除去所有余数
//    remainder = i1 % i2; // 1 -> 余数
//    result = f1 / f2; // 1.68
//
//    return 0;
//}
// ------------------------------------------------


// 运算符优先级
// ------------------------------------------------
//int main() {
//    // C的运算符优先级规则和数学运算相同： 乘除优先于加减 但是括号内的运算符优先级更高 阶级相同的话从左到右依次执行
//    int a = 6;
//    int b = 4;
//    int c = 2;
//    int result;
//    result = a - b + c; // 4
//    printf("%d \n", result);
//
//    result = a + b / c; // 8
//    printf("%d \n", result);
//
//    result = (a + b) / c; // 5
//    printf("%d \n", result);
//
//    return 0;
//}
// ------------------------------------------------


// 类型转换
// ------------------------------------------------
//int main() {
//    float price = 6.50;
//    int increase = 2;
//    float newPrice;
//
//    newPrice = price + increase;
//    printf("New price is %4.2f \n", newPrice);     /* Output: New price is 8.50 */
//
//    // 强制转换为其他类型
//    float average;
//    int total = 23;
//    int count = 4;
//
//    average = (float) total / count;
//    printf("Average is %4.2f", average);          /* Output: Average is 6.75 */
//
//    return  0;
//}
// ------------------------------------------------


/// 赋值运算符
// ------------------------------------------------
//int main() {
//    int x = 2;
//    x += 1;  // 3
//    x -= 1;  // 2
//    x *= 3;  // 6
//    x /= 2;  // 3
//    x %= 2;  // 1
//    x += 3 * 2;  // 7 等价于 x = x +（3 * 2）
//}
// ------------------------------------------------


// if语句
// ------------------------------------------------
//int main() {
//    int score = 89;
//
//    if (score > 75)
//        printf("your score is %d, Passed!\n", score);
//    else
//        printf("your score is %d, Failed!\n", score);
//
//    return 0;
//}
// ------------------------------------------------


// if...else语句
// ------------------------------------------------
//int main() {
//    int score = 89;
//
//    if (score >= 90)
//        printf("Top 10%%.\n");
//    else
//        printf("Less than 90.\n");
//
//    // 输出的是 Less than 90. 没有冒号 但是每个语句后面都要有; (除了设置常量的语句 const)
//
//    return 0;
//}
// ------------------------------------------------


// 条件运算符 (?:)
// ------------------------------------------------

/* 语法为： 条件 ? 表达式1 : 表达式2 */
//int iMax(int a, int b) {
//
//    if (a >= b)
//        return a;
//    else
//        return b;
//}
//
// 可以改写成
//int iMax(int a, int b) {return a >= b ? a : b;}
// ------------------------------------------------


// if语句的嵌套
//int main() {
//    int profit = 100;
//    int clients = 10;
//    int bonus;
//
//    if (profit > 1000)
//        if (clients > 15)
//            bonus = 100;
//        else
//            bonus = 25;
//}
// ------------------------------------------------


// if-else if 语句
// ------------------------------------------------
//int main() {
//    int score = 89;
//
//    if (score >= 90)        // 不用: 和 {} 但是条件的语句后面都要有;
//        printf("%s", "Top 10%\n");
//    else if (score >= 80)
//        printf("%s", "Top 20%\n");
//    else if (score > 75)
//        printf("%s", "You passed.\n");
//    else
//        printf("%s", "You did not pass.\n");
//}
// ------------------------------------------------


// switch语句
// ------------------------------------------------
//int main(void) {
//    char grade = 'C';
//    switch(grade){
//        case 'A': printf("85-100\n");break;
//        case 'B': printf("70-84\n");break;
//        case 'C': printf("60-69\n");break;
//        default: printf("<60");
//    }
//
//    return 0;
//}
// ------------------------------------------------


// 逻辑运算符 && 和 ||
// ------------------------------------------------
//int main() {
//    int n = 101;
//    if (n >0 && n <= 100)           // && -> 当两个表达式 都为真才返回 True
//        printf("Range (1 - 100).\n");
//
//    if (n <= 18 || n > 80)          // || -> 当两个表达式 存在为真的时候在返回 True
//        printf("protected.\n");
//
//    return 0;
//
//    // 附加： ! 用于反转布尔表达式的状态
//}
// ------------------------------------------------


// 逻辑运算符
// ------------------------------------------------
//int main() {
//    int n = 1;
//    if (n != 1 && n !=2 && n !=3 ){
//        printf("n not in 1, 2, 3 \n");
//    }else{
//        printf("n in 1, 2, 3 \n");
//    }
//
//    int a = 88;
//    if (a == 999 || (a > 0 && a <= 100))
//        printf("Input valid.\n");
//}
// ------------------------------------------------


// 逻辑运算符
// ------------------------------------------------
//int main(void) {
//    char n = 'i';
//    if (!(n == 'x' || n == 'X')){
//        printf("不是罗马数字 10.\n");
//        printf("表达式的值是=>%d", !(n == 'x' || n == 'X'));
//    }
//
//    return 0;
//}
// ------------------------------------------------


// while 语句
// ------------------------------------------------
//int main() {
//    int count = 1;
//
//    while (count < 8) {
//        printf("Count = %d\n", count);
//        count++;
//    }
//
//    return 0;
//}
// ------------------------------------------------


// do-while 语句
// ------------------------------------------------
//int main() {
////    int count = 1;
//    int count = 8;
//
//    do {
//        printf("Count = %d\n", count);
//        count++;
//    }while (count < 8);
//
//    return 0;
//}
// ------------------------------------------------


// break和 continue 语句
// ------------------------------------------------
//int main() {
//    // break
//    int num = 5;
//
//    while (num > 0) {
//        if (num == 3)
//            break;
//        printf("%d\n", num);
//        num--;
//    }
//
//    // continue
//    int num = 5;
//
//    while (num > 0) {
//        num--;
//        if (num == 3)
//            continue;
//
//        printf("%d\n", num);
//    }
//}
// ------------------------------------------------


// for 表达式
// ------------------------------------------------
//int main(void) {
//    int i;
//    int max = 10;
//
//    for (i=0; i<max; i++) {
//        printf("%d\n", i);        // 输出结果为 0-9
//    }
//
//    return 0;
//}
// ------------------------------------------------


// 循环嵌套
// ------------------------------------------------
//int main(void) {
//    int i, j;
//    int table = 10;
//    int max = 12;
//
//    for (i = 1; i <= table; i++) {
//        for (j = 0; j <= max; j++) {
//            printf("%d x %d = %d\n", i, j, i*j);
//        }
//        printf("\n"); /* blank line between tables */
//    }
//    return 0;
//}
// ------------------------------------------------


// 函数
// ------------------------------------------------
/* 声明一个函数 */
//int square (int num);
//
//int main() {
//    int x, result;
//
//    x = 5;
//    result = square(x);
//    printf("%d squared is %d\n", x, result);
//
//    return 0;
//}
//
///* 定义 */
//int square (int num) {
//    int y;
//
//    y = num * num;
//
//    return (y);
//}
// ------------------------------------------------


// 函数参数
// ------------------------------------------------
//int sum_up (int x, int y);
//
//int main() {
//    int x, y, result;
//
//    x = 3;
//    y = 12;
//    result = sum_u p(x, y);
//    printf("%d + %d = %d", x, y, result);
//
//    return 0;
//}
//
//int sum_up (int x, int y) {
//    x += y;
//    return(x);
//}
// ------------------------------------------------


// 变量作用域
// ------------------------------------------------
/* 声明一个全局变量 global */
//int global1 = 0;
//
//int main() {
//    int local1, local2;
//
//    local1 = 5;
//    local2 = 10;
//    global1 = local1 + local2;
//    printf("%d \n", global1);  /* 15 */
//
//    return 0;
//}
// ------------------------------------------------


// 静态变量
// ------------------------------------------------
//void say_hello();
//
//int main() {
//    int i;
//
//    for (i = 0; i < 5; i++) {
//        say_hello();
//    }
//
//    return 0;
//}
//
//void say_hello() {
//    static int num_calls = 1;           // 使用static 初始化修饰一个静态变量
//
//    printf("Hello number %d\n", num_calls);
//    num_calls++;
//
//}
// ------------------------------------------------


// 递归函数
// ------------------------------------------------
//int factorial(int num);
//
//int main() {
//    int x = 5;
//
//    printf("The factorial of %d is %d\n", x, factorial(x));
//
//    return 0;
//}
//
//// function definition
//int factorial(int num) {
//    if (num == 1)
//        return 1;
//    else
//        return num * factorial(num - 1);
//}
/*
 *  2*factorial(1)
 *  3*factorial(2)
 *  4*factorial(3)
 *  5*factorial(4)
 */
// ------------------------------------------------
