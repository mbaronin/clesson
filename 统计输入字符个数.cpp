#include <stdio.h>
#include <string.h>

#define NUM 128

int main()
{
	int ch, i, j = 0, max = 0;
        int input_num = 0;
        int ascii[NUM] = {0};
        char count[NUM] = "";

        printf("������Ӣ���ı���");

        while ((ch = getchar()) != '\n')
        {
                ascii[ch]++; // �ַ���Ӧ��ASCII���1
                input_num++;
        }

        for (i = 0; i < NUM; i++)
        {
                if (ascii[i])
                {
                        count[j++] = i;
                        if (ascii[i] > ascii[max])
                        {
                                max = i;
                        }
                }
        }

        printf("���ܹ�������%d���ַ������в�ͬ���ַ�������%d����\n", input_num, strlen(count));
        printf("�����ǣ�%s\n", count);
        printf("���ִ��������ַ���\'%c\'�����ܹ�������%d�Ρ�\n", max, ascii[max]);


	return 0;
 } 
