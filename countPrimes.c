/*ͳ������С�ڷǸ����� n ��������������

ʾ��:

����: 10
���: 4
����: С�� 10 ������һ���� 4 ��, ������ 2, 3, 5, 7 ��
*/
int countPrimes(int n){
    int num = 0;
    int flage =1;
    if(n<3)
    return 0;
    for(int i = 3;i<n;i++)
    {
         if ((i & 1) == 0)//��ż����ֱ��pass����Ϊ2�ı������Բ�����������
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
