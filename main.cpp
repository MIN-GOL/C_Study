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