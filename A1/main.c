#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//hello world
/*
int main()
{
    //我的第一个 C 程序
    printf("Hello, World...! \n");

    return 0;
}
*/


//圆的面积
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


//长方形的面积
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

//BMI 1.0
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

//BMI 2.0
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




//个人所得税
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


//菜单
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


//成绩
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


//计数
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


//计数100
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



//计数5050
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
