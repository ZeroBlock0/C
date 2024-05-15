// 包含标准输入输出库
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// hello world
/*
int main()
{
    //我的第一个 C 程序
    printf("Hello, World...! \n");

    return 0;
}
*/

// 圆的面积
/*
int main(){
    float r,s;
    printf("请输入圆的半径\n r=");
    scanf("%f",&r);
    //r=123123.2323;
    s=3.1415926*r*r;
    printf("圆的面积\ns=%f\n",s);
    return 0;
}
*/

// 长方形的面积
/*
int main(){
    float l,w;
    printf("长=");
    scanf("%f",&l);
    printf("宽=");
    scanf("%f",&w);
    printf("面积=%f\n",l*w);
    return 0;
}
*/

// BMI 1.0
/*
int main(){
    //BMI=体重(kg)÷身高^2(m)
    //a=体重 b=身高 c=bmi
    float a,b,c;
    printf("体重(kg)\n");
    scanf("%f",&a);
        // 检查布尔条件
    if( a <= 0 )
     {
        // 如果条件为真，则输出下面的语句
        printf("体重不能小于等于 0\n" );
        return 0;
     }
    else
     {
        // 如果条件为假，则输出下面的语句
        printf("身高(m)\n");
        scanf("%f",&b);
                //检查布尔条件
            if( b <= 0 )
            {
                // 如果条件为真，则输出下面的语句
                printf("身高不能小于等于0\n" );
                return 0;
            }
            else
            {
                // 如果条件为假，则输出下面的语句
                c=a/(b*b);
                printf("BMI=%f\n",c);
                    if( c < 18.5 )
                    {
                        printf("过轻");
                    }
                    if( c >= 18.5 && c < 24 )
                    {
                        printf("正常");
                    }
                    if( c >= 24 && c < 27 )
                    {
                        printf("过重");
                    }
                    if( c >= 27 && c < 30 )
                    {
                        printf("1度肥胖");
                    }
                    if( c >= 30 && c < 35 )
                    {
                        printf("2度肥胖");
                    }
                    if( c > 35 )
                    {
                        printf("3度肥胖");
                    }
                return 0;

            }



    }

}
*/

// BMI 2.0
/*
int main() {
    float weight, height, bmi;

    printf("体重(KG): ");
    scanf("%f", &weight);

    if (weight <= 0) {
        printf("体重不能小于等于 0\n");
        return 0;
    }

    printf("身高(M): ");
    scanf("%f", &height);

    if (height <= 0) {
        printf("身高不能小于等于 0\n");
        return 0;
    }

    bmi = weight / (height * height);

    printf("BMI=%.2f\n", bmi);

    if (bmi < 18.5) {
        printf("过轻");
    } else if (bmi < 24) {
        printf("正常");
    } else if (bmi < 27) {
        printf("过重");
    } else if (bmi < 30) {
        printf("1度肥胖");
    } else if (bmi < 35) {
        printf("2度肥胖");
    } else {
        printf("3度肥胖");
    }

    return 0;
}
*/

/*
int main() {
    // 定义浮点类型变量weight表示体重（单位：kg），height表示身高（单位：m），bmi表示身体质量指数（BMI）
    float weight, height, bmi;

    // 提示用户输入体重，并通过scanf函数获取输入值
    printf("体重(kg): ");
    scanf("%f", &weight);

    // 检查输入的体重是否小于等于0
    if (weight <= 0) {
        // 如果是，则输出错误信息并结束程序，返回0表示程序正常退出
        printf("体重不能小于等于 0\n");
        return 0;
    }

    // 提示用户输入身高，并通过scanf函数获取输入值
    printf("身高(m): ");
    scanf("%f", &height);

    // 检查输入的身高是否小于等于0
    if (height <= 0) {
        // 如果是，则输出错误信息并结束程序
        printf("身高不能小于等于 0\n");
        return 0;
    }

    // 根据BMI公式（体重除以身高的平方）计算BMI值
    bmi = weight / (height * height);

    // 输出计算得到的BMI值，保留两位小数
    printf("BMI=%.2f\n", bmi);

    // 使用一系列if-else if条件判断语句，根据BMI值的不同范围输出对应的健康状况
    if (bmi < 18.5) {
        printf("过轻");
    } else if (bmi < 24) {
        printf("正常");
    } else if (bmi < 27) {
        printf("过重");
    } else if (bmi < 30) {
        printf("1度肥胖");
    } else if (bmi < 35) {
        printf("2度肥胖");
    } else { // 这里相当于 bmi >= 35
        printf("3度肥胖");
    }

    // 程序执行完毕，返回0表示程序正常退出
    return 0;
}
*/

/*
在C语言中，当你使用`printf()`函数配合自增运算符`y++`或`++y`时，由于`printf()`函数并不直接改变传入参数的值（它只读取并格式化输出其参数），所以`printf(y++);`和`printf(++y);`的主要区别不在于`printf()`调用本身的行为，而在于自增运算发生在何时以及传给`printf()`函数的是哪个值。

- `printf(y++);`：
  在调用`printf()`函数时，`y++`作为实参传递给`printf()`，先使用`y`当前的值进行输出，**然后**才对`y`进行自增操作。因此，打印出来的将是`y`自增前的值，但无论输出什么，打印结束后`y`的值都会增加1。

- `printf(++y);`：
  在调用`printf()`函数前，`++y`先执行自增操作，将`y`的值加1，然后将加1后的新值传递给`printf()`函数进行输出。所以，这里打印出来的是`y`自增后的值。

请注意，尽管两者都涉及到`y`的自增，但由于`printf()`函数并不期待 `%d` 等格式化占位符来处理整型变量，这两个表达式单独作为`printf()`的参数都是错误的，编译器将会报错，因为`printf()`需要一个有效的格式字符串来配合相应的参数。正确示例应该是包含合适格式说明符的字符串，例如：

```c
int y = 5;
printf("%d\n", y++);  // 输出 "5"，然后 y 变成 6
printf("%d\n", ++y);  // 输出 "7"，因为 y 先加1变成 6，再打印时已经是 7
*/

// 个人所得税
/*
int main(){
    float a,b,c,d,e,f;   //a工资  b专项扣除  c应纳税额 d个人所得税 e税率 f速算扣除数
    printf("工资总额\n");
    scanf("%f",&a);
    //printf("专项扣除\n");
    //scanf("%f",&b);
    b = 2000;
    c = a - 5000 - b;
    if ( c <= 3000 ) {
            e = 0.03;
            f = 0;
    }else if ( c > 3000 && a < 12000 ) {
        e = 0.1;
        f = 210;
    }else if ( c > 12000 && a < 25000 ) {
        e = 0.2;
        f = 1410;
    }else if ( c > 25000 && a < 35000 ) {
        e = 0.25;
        f = 2660;
    }else if ( c > 35000 && a < 55000 ) {
        e = 0.3;
        f = 4410;
    }else if ( c > 55000 && a < 80000 ) {
        e = 0.35;
        f = 7160;
    }else if ( c > 80000 ) {
        e = 0.45;
        f = 15160;
    }
    d = c * e - f;
    if ( d <= 0 ) {
        d = 0;
    }
    printf("个人所得税\n%.2f",d);
    return 0;


}
*/

// 菜单
/*
int main(){
    printf("菜单\n");
    printf("1添加数据\n");
    printf("2删除数据\n");
    printf("3修改数据\n");
    printf("0退出\n");

    int selecton;
    printf("请输入选项\n");
    scanf("%d",&selecton);

    switch (selecton) {
        case 1:
            printf("添加数据\n");
            break;
        case 2:
            printf("删除数据\n");
            break;
        case 3:
            printf("修改数据\n");
            break;
        case 0:
            printf("退出\n");
            return 0;
            break;
        default:
            printf("输入错误\n");
            break;
    }
    return 0;

}
*/

// 成绩
/*
int main(){
    int a,b;
    printf("请输入成绩\n");
    scanf("%d",&a);
    b=a/10;

   switch (b)
   {
    case 10:
    {
        printf("你的成绩是A\n");
    }
    break;
    case 9:
    {
        printf("你的成绩是B\n");
    }
    break;
    case 8:
    {
        printf("你的成绩是C\n");
    }
    break;
    case 7:
    {
        printf("你的成绩是D\n");
    }
    break;
    case 6:
    {
        printf("你的成绩是E\n");
    }
    break;
    default:
    {
        printf("你的成绩是F\n");
    }
    break;

   }
   return 0;
   }
   */

// 计数
/*
int main(){
    int i;
    int sum=0;
    for ( i = 0; i <= 5; ++i)
    {
        printf("%d\n",sum+i);
    }

}
*/

// 计数100
/*
int main(){
    int i;
    int sum=0;
    for ( i = 0; i <= 100; ++i)
    {
        printf("%d\n",sum+i);
    }

}
*/

// 计数5050
/*
int main(){
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += i;
    }
    printf("1+2+3+...+100=%d\n", sum);
    return 0;
}
*/

// 100以内奇数和
/*
int main(){
    int i;
    int sum = 0;
    for ( i = 1; i <= 100; i+2)
    {
        sum = sum + i;
    }
    printf("1+3+5+...+100=%d",sum);
    return 0;
}
*/

// 100以内奇数积
/*
int main()
{
    int i;
    int p = 1;
    for (i = 1; i <= 100; i = i + 2)
    {
        p = p * i;
    }
    printf("1*3*5*...*100=%d", p);
    return 0;
}
*/

//
/*
float main (){
    float x,y,z,sum=0;
    for ( x = 1; x <= 100; x++){
        z = 1;
            for ( y = 1; y <= x; y++)
            {
               z = z * y;
            }
            sum = sum * z;
    }
    printf("100以内的累加=%d",sum);
    return 0;
}
*/

//
/*
int main(){
    double x;
    double y;
    double sum=0;
    double z;
    for ( x = 1; x <= 100; x++)
    {
        z = 1;
        for( y = 1; y <= x; y++){
            z = z * y;
        }
        sum = sum + z;
    }
    printf("100以内的累加=%f", sum);
    return 0;
}
*/

//
/*
int main(){
    int i;
    int sum=0;
    for ( i = 1; i <= 100; i+2)
    {
        sum = sum + i;
    }
    printf("1+3+5+...+100=%d\n", sum);
    return 0;
}
*/

//
/*
int main()
{
    int i;
    int sum = 0;
    i=1;
    while (i<=100)
    {
        sum=sum+i;
        i=i+2;
    }
    printf("1+3+5+...+100=%d\n", sum);
    return 0;
}
*/

//
/*
int main(){
    float money = 0;
    int day = 0;
    printf("请输入存钱天数\n");
    scanf("%d",&day);
    while (day>0)
    {
        money = money + 0.01;
        printf("第%d天存钱%f\n",day,money);
        day--;
    }
    return 0;
}
*/

//
/*
int main(){
    float money = 0;
    int day = 0;
    do{
        money = money + 2.5;
        day = day + 1;
        if(day % 5 == 0){
            money = money - 6;
        }
        if(money == 100){
            printf("你已经存了100元，用了%d天",day);
            break;
        }
    }while (1);

    return 0;
}
*/

// BMI 3.0
/*
int main() {
    float weight, height, bmi;
    char choice;
    A1:
    printf("体重(KG): ");
    scanf("%f", &weight);

    if (weight <= 0) {
        printf("体重不能小于等于 0\n");
        weight = -INFINITY;    //重置
        goto A1;
    }
    A2:
    printf("身高(M): ");
    scanf("%f", &height);

    if (height <= 0) {
        printf("身高不能小于等于 0\n");
        height = -INFINITY;    //重置
        goto A2;
    }

    bmi = weight / (height * height);

    printf("BMI=%.2f\n", bmi);

    if (bmi < 18.5) {
        printf("过轻\n");
        printf("建议:\n");
    } else if (bmi < 24) {
        printf("正常\n");
        printf("建议:\n");
    } else if (bmi < 27) {
        printf("过重\n");
        printf("建议:\n");
    } else if (bmi < 30) {
        printf("1度肥胖\n");
        printf("建议:\n");
    } else if (bmi < 35) {
        printf("2度肥胖\n");
        printf("建议:\n");
    } else {
        printf("3度肥胖\n");
        printf("建议:\n");
    }

    do {
        printf("是否回到开始? Y/N\n");
        scanf(" %c",&choice);
        choice = toupper(choice); //小写转大写
        if (choice != 'Y' && choice != 'N'){
        printf("输入无效，请重新输入\n");
            }
    }while(choice != 'Y' && choice != 'N');

    if (choice == 'Y'){
    weight = -INFINITY;    //重置
    height = -INFINITY;    //重置
    bmi = -INFINITY;    //重置
    choice = INT_MIN;    //重置
    system("cls"); //清屏
    goto A1;
    }else{
    printf("感谢使用");
    return 0;
    }
}
*/

// 计算5名学生成绩
/*
int main()
{
   int stu[5],i = 0,stuavg = 0,sum = 0,a = 0;
   for(i = 0;i <= 4;i++)
    {
        a = i + 1;
        printf("请输入第%d位同学的成绩:",a);
        scanf("%d",&stu[i]);
        sum = sum + stu[i];
    }
    stuavg = sum / a;
    printf("平均分%d",stuavg);
    return 0;
}
*/

// 计算50名学生成绩
/*
int main()
{
   int stu[50],i = 0,stuavg = 0,sum = 0,a = 0;
   for(i = 0;i <= 49;i++)
    {
        a = i + 1;
        printf("请输入第%d位同学的成绩:",a);
        scanf("%d",&stu[i]);
        sum = sum + stu[i];
    }
    stuavg = sum / a;
    printf("平均分%d",stuavg);
    return 0;
}
*/

// 冒泡排序
/*
int main() {
    int x[10]; // 定义一个包含10个整数的数组
    int a, b, c; // 定义循环和交换变量

    printf("请输入10个整数:\n"); // 提示用户输入

    // 使用for循环读取用户输入的10个整数
    for (a = 0; a < 10; a++) {
        scanf("%d", &x[a]);
    }

    printf("使用的是冒泡排序\n"); // 告知用户采用的排序方法为冒泡排序

    // 冒泡排序算法实现
    // 外层循环控制遍历次数，每次遍历都将最大的数移到末尾
    for (a = 0; a < 9; a++) { // 优化：只需比较到倒数第二个元素即可
        // 内层循环负责每一轮的相邻元素比较和交换
        for (b = 0; b < 9 - a; b++) { // 优化：随着外层循环推进，已排序部分无需再比较
            if (x[b] > x[b + 1]) { // 比较当前元素与下一个元素的大小
                c = x[b]; // 临时存储较大值
                x[b] = x[b + 1]; // 将较小值移至前面
                x[b + 1] = c; // 将存储的较大值放到后面
            }
        }
    }

    printf("排列好的数组是:\n"); // 输出排序完成的信息

    // 打印排序后的数组
    for (a = 0; a < 10; a++) {
        printf("%d ", x[a]); // 每个元素后跟一个空格
    }
    printf("\n"); // 结束行打印，使得输出更加清晰

    return 0; // 程序正常结束
}
*/

// 数据逆序输出
/*
int main() {
    int arr[10]; // 第一步：定义一个能存放10个整数的数组
    int i, j, temp; // 定义循环变量和临时变量用于交换

    printf("请输入10个整数，以空格分隔:\n");
    for(i = 0; i < 10; i++) { // 第二步：使用for循环从键盘输入10个整数
        scanf("%d", &arr[i]);
    }

    // 实际上，不需要额外的for循环来交换数组中的值来达到逆序，
    // 直接在输出时逆序遍历即可。这里直接进入第四步。

    printf("逆序输出的结果是:\n");
    // 第四步：利用for循环从最后一个元素开始向前遍历并输出
    for(i = 9; i >= 0; i--) { // 从数组的最大下标9开始，递减到0
        printf("%d ", arr[i]); // 输出数组中的元素
    }
    printf("\n"); // 结束行打印

    return 0;
}
*/

// 在一个从小到大排序的有序数组中插入一个新数
/*
int main() {
    int arr[] = {1, 3, 5, 6, 8, 10}; // 已排序的数组
    int n = sizeof(arr) / sizeof(arr[0]); // 数组长度
    int i;

    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 请求用户输入要插入的数字
    printf("Enter the number to insert: ");
    int newNum;
    scanf("%d", &newNum);

    // 寻找插入位置并移动元素
    for (i = 0; i < n && newNum > arr[i]; i++);

    // 将数组元素向后移动一位，为新数腾出空间
    for (int j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }

    // 在找到的位置插入新数
    arr[i] = newNum;
    n++; // 数组长度增加

    printf("After inserting %d: ", newNum);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
*/

// 某班20个学生参加了一次语文考试，从键盘输入全班学生的成绩，并按学生成绩降序排序。
/*
int main() {
    int scores[20];
    int n = 20;
    int i, j, temp;

    printf("请输入20个学生的语文成绩，每输入一个成绩后按回车继续:\n");

    // 输入20个学生的成绩
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    // 冒泡排序，降序
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (scores[j] < scores[j + 1]) { // 如果前一个数小于后一个数，则交换它们
                temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }

    printf("成绩降序排序结果:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");

    return 0;
}
*/

/*实现思路
第一、定义一个能存放10个整数的一维数组，并存放10个无序的数
第二、使用双重循环利用冒泡算法进行操作
外循环决定总共循环多少趟 （总个数-1）
内循环实现两相邻数比较（每趟循环次数：总个数-1-当前趟数）
第三、输出有序数列*/
/*
int main()
{
    int arr[10]; // 第一步：定义一个能存放10个整数的数组
    int n = 10;  // 数组长度
    int i, j, temp;

    printf("请输入10个无序的整数，每输入一个后按回车继续:\n");

    // 第一步的后半部分：通过循环从用户处获取10个整数
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 第二步：使用冒泡排序算法进行排序
    for (i = 0; i < n - 1; i++)
    { // 外循环，决定总共需要进行的趟数
        for (j = 0; j < n - 1 - i; j++)
        { // 内循环，每趟比较并交换
            if (arr[j] > arr[j + 1])
            { // 如果前一个元素大于后一个元素，则交换它们
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // 第三步：输出排序后的有序数列
    printf("排序后的有序数列为:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
*/


//
/**/
