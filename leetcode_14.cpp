/**
编写一个函数来查找字符串数组中的最长公共前缀。
如果不存在公共前缀，返回空字符串 ""。
示例 1:
输入: ["flower","flow","flight"]
输出: "fl"
示例 2:

输入: ["dog","racecar","car"]
输出: ""
解释: 输入不存在公共前缀。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/longest-common-prefix
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */
# include <iostream>
# include <cstring>
using namespace std;
char * longestCommonPrefix(char str[][1024],int strSize){
    if(strSize == 0){
        return "";
    }
    for(int i = 0;i<strlen(str[0]);i++){
        for(int j = 1;j<strSize;j++){
            if(str[0][i] != str[j][i]){
                str[0][i] = '\0';
                break;
            }
        }
    }
    return str[0];
}
int main(void){
    int i = 0;
    char str[][1024] = {"flower","flow","flight"};
    int length = sizeof(str)/sizeof(str[0]);
    char *s = longestCommonPrefix(str, length);
    cout<<"“";
    while (s[i] != '\0'){
        cout<<s[i];
        i++;
    }
    cout<<"“";
    return 0;
}
