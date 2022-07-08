# include <iostream>

// HelloWorld
// -----------------------------------------------------------------------
//int main() {
//    printf("Hello, World!\n");
//    return 0;  // 返回 0表示这个程序是正常退出的
//}
// -----------------------------------------------------------------------


// 数据类型
// -----------------------------------------------------------------------
//int main() {
//    printf("int: %d \n", sizeof(int));
//    printf("float: %d \n", sizeof(float));
//    printf("double: %d \n", sizeof(double));
//    printf("char: %d \n", sizeof(char));
//
//    return 0;
//}
// -----------------------------------------------------------------------


// 变量
// -----------------------------------------------------------------------
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
// -----------------------------------------------------------------------


// 常量
// -----------------------------------------------------------------------
// #define PI 3.141592654   // 预处理一个PI 常量， 存储值为3.14 （注意： 请勿在#define语句的末尾添加分号字符）
//int main() {
//    const double PI = 3.14;  // const 关键字表示常量， 不可修改
//    printf("%f",PI);
//
//    return 0;
//}
// -----------------------------------------------------------------------


// 输入
// -----------------------------------------------------------------------
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
// -----------------------------------------------------------------------


// 输出
// -----------------------------------------------------------------------
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
// -----------------------------------------------------------------------


// 格式化输入
// -----------------------------------------------------------------------
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
// -----------------------------------------------------------------------


// 格式化输出
// -----------------------------------------------------------------------
//int main() {
//    printf("The tree has %d apples.\n", 22);
//
//    printf("Hello World!\n");       // 如果要输出 %符号， 在格式字符中使用 %%
//
//    return 0;
//}
// -----------------------------------------------------------------------


// 注释
// -----------------------------------------------------------------------
//int main() {
//    // 单行注释
//    /* Output a string */
//
//    // 多行注释
//    /*
//     * Output a string
//     */
//}
// -----------------------------------------------------------------------


// 算术运算符
// -----------------------------------------------------------------------
//int main() {
//    int length = 10;
//    int width = 5;
//    int area = length * width;
//
//    printf("%d \n", area);  /* 50 */
//
//    return 0;
//}
// -----------------------------------------------------------------------


// /与%的区别
// -----------------------------------------------------------------------
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
// -----------------------------------------------------------------------


// 运算符优先级
// -----------------------------------------------------------------------
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
// -----------------------------------------------------------------------


// 类型转换
// -----------------------------------------------------------------------
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
// -----------------------------------------------------------------------


/// 赋值运算符
// -----------------------------------------------------------------------
//int main() {
//    int x = 2;
//    x += 1;  // 3
//    x -= 1;  // 2
//    x *= 3;  // 6
//    x /= 2;  // 3
//    x %= 2;  // 1
//    x += 3 * 2;  // 7 等价于 x = x +（3 * 2）
//}
// -----------------------------------------------------------------------


// if语句
// -----------------------------------------------------------------------
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
// -----------------------------------------------------------------------


// if...else语句
// -----------------------------------------------------------------------
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
// -----------------------------------------------------------------------


// 条件运算符 (?:)
// -----------------------------------------------------------------------

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
// -----------------------------------------------------------------------


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
// -----------------------------------------------------------------------


// if-else if 语句
// -----------------------------------------------------------------------
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
// -----------------------------------------------------------------------


// switch语句
// -----------------------------------------------------------------------
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
// -----------------------------------------------------------------------


// 逻辑运算符 && 和 ||
// -----------------------------------------------------------------------
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
// -----------------------------------------------------------------------


// 逻辑运算符
// -----------------------------------------------------------------------
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
// -----------------------------------------------------------------------


// 逻辑运算符
// -----------------------------------------------------------------------
//int main(void) {
//    char n = 'i';
//    if (!(n == 'x' || n == 'X')){
//        printf("不是罗马数字 10.\n");
//        printf("表达式的值是=>%d", !(n == 'x' || n == 'X'));
//    }
//
//    return 0;
//}
// -----------------------------------------------------------------------


// while 语句
// -----------------------------------------------------------------------
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
// -----------------------------------------------------------------------


// do-while 语句
// -----------------------------------------------------------------------
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
// -----------------------------------------------------------------------


// break和 continue 语句
// -----------------------------------------------------------------------
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
// -----------------------------------------------------------------------


// for 表达式
// -----------------------------------------------------------------------
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
// -----------------------------------------------------------------------


// 循环嵌套
// -----------------------------------------------------------------------
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
// -----------------------------------------------------------------------


// 函数
// -----------------------------------------------------------------------
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
// -----------------------------------------------------------------------


// 函数参数
// -----------------------------------------------------------------------
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
// -----------------------------------------------------------------------


// 变量作用域
// -----------------------------------------------------------------------
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
// -----------------------------------------------------------------------


// 静态变量
// -----------------------------------------------------------------------
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
// -----------------------------------------------------------------------


// 递归函数
// -----------------------------------------------------------------------
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
// -----------------------------------------------------------------------


// 数组
// -----------------------------------------------------------------------
//int main() {
//    int  test_scores[25];
//
//    float prices[5] = {2.99, 3.99, 4.99, 5.99, 6.99};
//
//    /* 可以部分初始化 缺失值设置为0 */
//    int scores[5] = {1, 2};
//}
// -----------------------------------------------------------------------


// 访问数组元素
// -----------------------------------------------------------------------
//int main() {
//    int x[5] = {1, 2, 3, 4, 5};
//    x[1] = 260;
//    printf("%d\n", x[0]);
//    printf("%d\n", x[1]);
//}
// -----------------------------------------------------------------------


// 数组循环
// -----------------------------------------------------------------------
//int main() {
//    float purchases[3] = {10.99, 14.25, 90.50};
//    float total = 0;
//    int k;
//
//    for (k = 0; k < 3; k++) {
//        total += purchases[k];
//    }
//
//    printf("Total: %6.2f\n", total);
//}
// -----------------------------------------------------------------------


// 二维数组
// -----------------------------------------------------------------------
//int main() {
//    /* 设立一个二行三列的数组 */
//    int a[2][3];
//
//    /* 用花括号初始化数组 */
//    int b[2][3] = {
//            {1, 2, 3},
//            {4, 5, 6}
//    };
//}
// -----------------------------------------------------------------------


// 访问二维数组元素
// -----------------------------------------------------------------------
//int main() {
//    int a[2][3] = {
//            {1, 2, 3},
//            {4, 5, 6}
//    };
//
//    /* 随机挑选两个元素 */
//    printf("%d\n", a[0][0]);
//    printf("%d\n", a[1][2]);
//
//    // 使用嵌套的for循环遍历二维数组
//    int b[2][3] = {
//            {3, 2, 6},
//            {4, 5, 20}
//    };
//    int k, j;
//
//    /* display array contents */
//    for (k = 0; k < 2; k++) {
//        for (j = 0; j < 3; j++) {
//            printf(" %d", b[k][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
// -----------------------------------------------------------------------


// 使用内存
// -----------------------------------------------------------------------
// scanf() 函数将用户输入的值放在变量的位置或地址处 这是通过使用＆符号实现的
//int main() {
//    int num;
//
//    printf("Enter a number:");
//    scanf("%d", &num);
//    printf("%d", num);
//}
//void test(int k);
//
//int main() {
//    int i = 0;
//
//    printf("The address of i is %x\n", &i);
//    test(i);
//    printf("The address of i is %x\n", &i);
//    test(i);
//
//    return 0;
//}
//
//void test(int k) {
//    printf("The address of k is %x\n", &k);
//}
// -----------------------------------------------------------------------


// 指针
// -----------------------------------------------------------------------
/*
 * 指针是数组，字符串以及其他数据结构和算法的基础
 * 指针是一个变量，其中包含另一个变量的地址。换句话说，它“指向”分配给变量的位置，并且可以间接访问该变量
 * 实际的指针数据类型是十六进制数，但是在声明指针时，必须指出它将指向的数据类型
 * 星号 * 声明一个指针，并应出现在用于指针变量的标识符旁边
 */
//int main() {
//    int j = 63;
//    int *p = NULL;
//    p = &j;         // 指定 p为 j的指针
//
//    printf("The address of j is %x\n", &j);
//    printf("p contains address %x\n", p);
//    printf("The value of j is %d\n", j);
//    printf("p is pointing to the value %d\n", *p);
//
//    return 0;
//
//    /*
//     * 有些算法使用指向指针的指针，这种类型的变量声明使用**，并且可以分配另一个指针的地址
//     *  int x = 12;
//     *  int *p = NULL
//     *  int **ptr = NULL;
//     *  p = &x;
//     *  ptr = &p;
//     */
//}
// -----------------------------------------------------------------------


// 表达式中的指针
// -----------------------------------------------------------------------
/* 指针可以与任何变量一样在表达式中使用。算术运算符可以应用于指针所指向的任何对象。 */
//int main() {
//    int x = 5;
//    int y;
//    int *p = NULL;      // 声明一个空指针
//    p = &x;
//
//    y = *p + 2;     /* y 被赋予 7 */
//    y += *p;        /* y 被赋予 12 */
//    *p = y;         /* x 被赋予 12 */
//    (*p)++;         /* x 自增到 13 */
//
//    printf("p指向值 %d\n",*p);
//
//    return 0;
//}
// -----------------------------------------------------------------------


// 指针和数组
// -----------------------------------------------------------------------
//int main() {
////    int *p, a[5];
////    p = a;      /* 现在这个指针就指向了这个一维数组 */
//    int a[5] = {22, 33, 44, 55, 66};
//    int *ptr = NULL;
//    int i;
//
//    ptr = a;
//    for (i=0; i<5; i++) {
//        printf("%d ", *(ptr + i));
//    }
//}
// -----------------------------------------------------------------------


// 更多地址算法
// -----------------------------------------------------------------------
/*
 * 地址运算也可以视为指针运算，因为操作涉及指针
 * 除了使用+和–来引用下一个和上一个存储器位置之外，还可以使用赋值运算符更改指针包含的地址
 */
//int main() {
//    int a[5] = {22, 33, 44, 55, 66};
//    int *ptr = NULL;
//
//    ptr = a;
//
//    printf("%d  %x\n", *ptr, ptr);  /* 22 */
//    ptr++;
//    printf("%d  %x\n", *ptr, ptr);  /* 33 */
//    ptr += 3;
//    printf("%d  %x\n", *ptr, ptr);  /* 66 */
//    ptr--;
//    printf("%d  %x\n", *ptr, ptr);  /* 55 */
//    ptr -= 2;
//    printf("%d  %x\n", *ptr, ptr);  /* 33 */
//}
// -----------------------------------------------------------------------


// 指针与函数
// -----------------------------------------------------------------------
//void swap (int *num1, int *num2);
//
//int main() {
//    int x = 25;
//    int y = 100;
//
//    printf("x is %d, y is %d\n", x, y);
//    swap(&x, &y);
//    printf("x is %d, y is %d\n", x, y);
//
//    return 0;
//}
//
//void swap (int *num1, int *num2) {
//    int temp;
//
//    temp = *num1;
//    *num1 = *num2;
//    *num2 = temp;
//
//    /* 程序交换变量的实际值，因为函数使用指针按地址访问它们 */
//}
// -----------------------------------------------------------------------


// 具有数组参数的函数
// -----------------------------------------------------------------------
//int add_up(int *a, int num_elements);
//
//int main() {
//    int orders[5] = {1, 2, 3, 4, 5};
//    printf("Total orders is %d\n", add_up(orders, 5));
//}
//
//int add_up(int *a, int num_elements) {
//    int i;
//    int total = 0;
//
//    for (i = 0; i < num_elements; i++) {
//        total += a[i];
//    }
//
//    return (total);
//}
// -----------------------------------------------------------------------


// 返回数组的函数
// -----------------------------------------------------------------------
//int * get_evens();
//
//int main() {
//    int *a;
//    int k;
//
//    a = get_evens();
//    for (k=0; k<5; k++) {
//        printf("%d\n", a[k]);    // a[k] 与 *(a + k) 相同
//    }
//
//    return 0;
//}
//
//int * get_evens() {
//    static int nums[5];         // 当从函数传递局部变量时，需要在函数中将其声明为静态变量
//    int k;
//    int even = 0;
//
//    for (k = 0; k < 5; k++) {
//        nums[k] = even += 2;
//    }
//
//    return (nums);
//}
// -----------------------------------------------------------------------


// 指针小测
// -----------------------------------------------------------------------
//int * test() {
//    static int x[4];
//    for (int i=0; i<4; i++) {
//        x[i] = i%2;
//    }
//    return x;
//}
//
//int main() {
//    int * arr = test();
//    printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
//    printf("%d %d %d %d\n",*(arr), *(arr+1), *(arr+2), *(arr+3));
//}
// -----------------------------------------------------------------------


// 字符串
// -----------------------------------------------------------------------
//int main() {
//    /* C中的字符串是一个以NULL字符'\0'结尾的字符数组 */
//    char str1[6] = "hello";
//    char str2[ ] = "world";  /* size 6 */
//    char str3[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
//    char str4[ ] = {'h', 'e', 'l', 'l', 'o', '\0'}; /* size 6 */
//
//    /*
//     * 为了安全，方便地使用字符串，可以使用下面显示的“标准库”字符串函数。不要忘记引入<string.h>头文件
//     * strlen() -获取字符串的长度
//     * strcat()-合并两个字符串
//     * strcpy()-将一个字符串复制到另一个
//     * strlwr()-将字符串转换为小写
//     * trupr()-将字符串转换为大写
//     * strrev()-反向字符串
//     * strcmp()-比较两个字符串
//     */
//}
// -----------------------------------------------------------------------


// 字符串输入
// -----------------------------------------------------------------------
//int main() {
//    // scanf 输入
//    char first_name[25];
//    int age;
//    printf("Enter your first name and age: \n");
//    scanf("%s %d", first_name, &age);
//
//    // gets 输入
//    char full_name[50];
//    printf("Enter your full name: \n");
//    gets(full_name);
//
//    // fgets 输入
//    char name[50];
//    printf("Enter your name: \n");
//    fgets(name, 50, stdin);
//
//    return 0;
//}
// -----------------------------------------------------------------------


// 字符串输出
// -----------------------------------------------------------------------
/* 字符串输出由fputs()，putf()和printf()函数处理 */
//int main() {
//    char city[40];
//    printf("Enter your favorite city: \n");
//    gets(city);
//    // 这里为了安全起见 可以使用 fgets(city, 40, stdin);
//    printf("使用fputs(): ");
//    fputs(city, stdout);
//    printf("使用puts(): ");
//    puts(city);                 // puts() 将在输出中添加换行符
//    printf(" is a fun city.");
//
//    return 0;
//}
// -----------------------------------------------------------------------


// sprintf 和 sscanf 函数
// -----------------------------------------------------------------------
//int main() {
//    // sprintf() 函数：创建格式化的字符串
//    char info[100];
//    char dept[ ] = "HR";
//    int emp = 75;
//    /* %s -> 字符串  %d -> 整数 */
//    sprintf(info, "The %s dept has %d employees.", dept, emp);
//    printf("%s\n", info);
//    // 输出 -> "The HR dept has 75 employees."
//
//
//    // sscanf() 函数：用于扫描字符串中的值 该函数从字符串中读取值，并将其存储在相应的变量地址中
//    char info_1[ ] = "Snoqualmie WA 13190";
//    char city[50];
//    char state[50];
//    int population;
//    sscanf(info_1, "%s %s %d", city, state, &population);
//    printf("%d people live in %s, %s.", population, city, state);
//    /* MINGOL笔记： 忘记指针内存的使用了 测试一下hhh */
//    printf("%d", *&population);
//    return 0;
//}
// -----------------------------------------------------------------------


// string.h库
// -----------------------------------------------------------------------
//# include <string.h>
//int main() {
//    char s1[ ] = "The grey fox";
//    char s2[ ] = " jumped.";
//    /*
//     * 其他的string.h函数包括：
//     * strncat(str1, str2, n) 将str2的前n个字符追加（连接）到str1的末尾，并返回指向str1的指针。
//     * strncpy(str1, str2, n) 将str2的前n个字符复制到str1。
//     * strcmp(str1, str2) 当str1等于str2时返回0，在 str1 <str2 时返回小于0，在 str1> str2 时返回大于0。
//     * strncmp(str1, str2, n) 当str1的前n个字符等于str2的前n个字符时，返回0；当str1 <str2时，小于0；当str1> str2时，大于0。
//     * strchr(str1, c) 返回指向str1中首次出现的char c的指针，如果找不到字符，则返回NULL。
//     * strrchr(str1,c) 反向搜索str1并返回一个指向char c在str1中位置的指针；如果找不到字符，则返回NULL。
//     * strstr(str1,str2) 返回指向str1中首次出现的str2的指针，如果未找到str2，则返回NULL。
//     */
//    strcat(s1, s2);
//    printf("%s\n", s1);
//    printf("Length of s1 is %d\n", strlen(s1));
//    strcpy(s1, s2);
//    printf("s1 is now %s \n", s1);
//    int result = strcmp(s2, s1);
//    printf("%d\n", result);
//
//    return 0;
//}
// -----------------------------------------------------------------------


// 将字符串转换为数字
// -----------------------------------------------------------------------
//#include <stdio.h>
//int main() {
//    /*将数字字符串转换为数值是C编程中的常见任务，通常用于防止运行时错误。
//    读取字符串比期望数值更容易出错，用户可能不小心键入“ o”而不是“ 0”（零）。
//    stdio.h库包含以下用于将字符串转换为数字的函数：
//    int atoi(str) 代表ASCII转成整数。将str转换为等效的int值。如果第一个字符不是数字或未遇到任何数字，则返回0。
//    double atof(str)表示ASCII转成浮动。将str转换为等效的double值。如果第一个字符不是数字或未遇到数字，则返回0.0。
//    long int atol(str) 表示ASCII转成long int。将str转换为等效的长整数值。如果第一个字符不是数字或未遇到任何数字，则返回0。
//     */
//    char input[10];
//    int num;
//
//    printf("Enter a number: ");
//    gets(input);
//    num = atoi(input);
//    printf("The number is %d\n", num);
//    // 注意，atoi() 缺少错误处理，如果要确保已完成正确的错误处理，建议使用strtol()
//
//    return 0;
//}
// -----------------------------------------------------------------------


// 字符串数组
// -----------------------------------------------------------------------
//int main() {
//    char trip[3][15] = {        // 声明一个包含3个元素的数组，每个元素包含15个字符的字符串
//        "Phone",
//        "Computer",
//        "Tablet"
//    };
//
//    printf("Please bring the following:\n");
//    for (int i=0; i<3; i++) {
//        printf("%d. %s\n", i+1, trip[i]);
//    }
//}
// -----------------------------------------------------------------------


// 函数指针
// -----------------------------------------------------------------------
//void say_hello(int num_times);
//
//int main() {
//    void (*funptr)(int);
//    funptr = say_hello;     // 这里用指针 funptr指向 say_hello函数
//    funptr(3);
//
//    return 0;
//}
//
//void say_hello(int num_times) {
//    int k;
//    for (k=0; k<num_times; k++) {
//        printf("Hello\n");
//    }
//}
// -----------------------------------------------------------------------


// 函数指针数组
// -----------------------------------------------------------------------
//#include <stdio.h>
///* 声明加减乘除函数 */
//int add(int num1, int num2);
//int subtract(int num1, int num2);
//int multiply(int num1, int num2);
//int divide(int num1, int num2);
//
//int main() {
//    int x, y, choice, result;
//    int (*op[4])(int, int);
//
//    op[0] = add;
//    op[1] = subtract;
//    op[2] = multiply;
//    op[3] = divide;
//
//    printf("Enter two integers: ");
//    scanf("%d%d", &x, &y);
//    printf("Enter 0 to add, 1 to subtract, 2 to multiply, or 3 to divide: ");
//    scanf("%d", &choice);
//    result = op[choice](x, y);
//    printf("%d", result);
//
//    return 0;
//}
//
//int add(int x, int y) {
//    return(x + y);
//}
//
//int subtract(int x, int y) {
//    return(x - y);
//}
//
//int multiply(int x, int y) {
//    return(x * y);
//}
//
//int divide(int x, int y) {
//    if (y != 0)
//        return (x / y);
//    else
//        return 0;
//}
// -----------------------------------------------------------------------


// 空指针
// -----------------------------------------------------------------------
//int main() {
//    int x = 33;
//    float y = 12.4;
//    char c = 'a';
//    void *ptr;
//
//    ptr = &x;
//    printf("void ptr points to %d\n", *(int *)ptr);
//    ptr = &y;
//    printf("void ptr points to %f\n", *(float *)ptr);
//    ptr = &c;
//    printf("void ptr points to %c\n", *(char *)ptr);
//
//    return 0;
//}
// -----------------------------------------------------------------------


