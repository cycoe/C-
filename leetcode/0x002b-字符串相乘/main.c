/* 给定两个以字符串形式表示的非负整数 num1 和 num2，返回 num1 和 num2 的乘积，它们的乘积也表示为字符串形式。
 *
 * 示例 1:
 *
 * 输入: num1 = "2", num2 = "3"
 * 输出: "6"
 *
 * 示例 2:
 *
 * 输入: num1 = "123", num2 = "456"
 * 输出: "56088"
 *
 * 说明：
 *
 *     num1 和 num2 的长度小于110。
 *     num1 和 num2 只包含数字 0-9。
 *     num1 和 num2 均不以零开头，除非是数字 0 本身。
 *     不能使用任何标准库的大数类型（比如 BigInteger）或直接将输入转换为整数来处理。
 *
 * 来源：力扣（LeetCode）
 * 链接：https://leetcode-cn.com/problems/multiply-strings
 * 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。 */

#include <stdio.h>
#include <malloc.h>
#include <memory.h>

int getStrLen(char *s) {
    int len = 0;
    while (s++) len++;

    return len;
}

char *multiplyHelper(char *num1, char *num2, int l1, int l2, int shift) {
    // num2 长度为 1 时，直接进行普通乘法
    if (l2 == 1) {

    }

}

char * multiply(char * num1, char * num2){

}

int main(int argc, char *argv[])
{
    
    return 0;
}
