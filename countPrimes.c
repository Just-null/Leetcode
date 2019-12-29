/*统计所有小于非负整数 n 的质数的数量。

示例:

输入: 10
输出: 4
解释: 小于 10 的质数一共有 4 个, 它们是 2, 3, 5, 7 。
*/
int countPrimes(int n){
    int num = 0;
    int flage =1;
    if(n<3)
    return 0;
    for(int i = 3;i<n;i++)
    {
         if ((i & 1) == 0)//是偶数就直接pass，因为2的倍数绝对不可能是素数
            continue;
        flage = 1;
        for(int j = 2;j*j<=i;j++)
        {
            
            if(i%j==0)
            {
                 flage = 0;
                 break;

            }
        }
        if(flage == 1)
        num++;
    }
    return num+1;

}
