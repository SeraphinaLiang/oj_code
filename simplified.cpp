#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <malloc.h>

#define abs(x) ((x)>=0?(x):-(x))
//#define LEN sizeof(struct student)
#define LEN sizeof(struct DATA)

// 6568
int main(){
    printf("C:\\ABC.TXT");
    return 0;
}

// 11127
int main() {
    int i;
    scanf("%d", &i);
    printf("%d", i / 100);
    printf("\n");
    printf("%d", i % 10);
    return 0;
}

// 计算路程
int main() {
    double S;
    float A;
    int T;
    scanf("%f%d", &A, &T);
    S = 0.5 * A * T * T;
    printf("%.2f", S);
    return 0;
}

// 1015
int main() {
    float a, s;
    scanf("%f", &a);
    s = (5.0 / 9.0) * (a - 32);
    printf("%.2f", s);
    return 0;
}

// 1014
int main() {
    float a, s;
    scanf("%f", &a);
    s = a * a * 3.14159;
    printf("%.2f", s);
    return 0;
}

// 长方体表面积与体积比
int main() {
    double a, b, c;
    double de, mian, ti;
    scanf("%lf%lf%lf", &a, &b, &c);
    mian = 2 * (a * b + b * c + c * a);
    ti = a * b * c;
    de = mian / ti;
    printf("%.2f", de);
    return 0;
}

// 1126
int main() {
    char ch;
    scanf("%c", &ch);
    printf("%c", ch);
    return 0;
}

// 1127 加法
int main() {
    int a, b;
    char c;
    scanf("%d%c%d", &a, &c, &b);
    printf("%d", a + b);
    return 0;
}

// 1020
int main() {
    int num;
    scanf("%d", &num);
    if (num > 0) printf("positive\n");
    else printf("negative\n");
    if (num % 2 == 0) printf("even\n");
    else printf("odd\n");
    return 0;
}

// 1016
int main() {
    char str[5];
    for (int i = 0; i < 5; i++) {
        scanf("%c", &str[i]);
    }
    for (int i = 0; i < 5; i++) {
        putchar(tolower(str[i]));
    }
    return 0;
}

// 1023
int main() {
    float a, b, c;
    char op;
    scanf("%f%c%f", &a, &op, &b);
    switch (op) {
        case '+':
            c = a + b;
            break;
        case '-':
            c = a - b;
            break;
        case '*':
            c = a * b;
            break;
        case '/':
            c = a / b;
            break;
        default:
            printf("error");
            return 0;
    }
    printf("result=%.2f", c);
    return 0;
}

// 1018
int main() {
    int a, b, c, t;
    scanf("%d,%d,%d", &a, &b, &c);
    if (b < a) {
        t = a;
        a = b;
        b = t;
    }
    if (c < a) {
        t = c;
        c = a;
        a = t;
    }
    if (b > c) {
        t = b;
        b = c;
        c = t;
    }
    printf("%d,%d,%d", a, b, c);
    return 0;
}

// 1019
int main() {
    int num[5];
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 5; ++i) {
        if (num[i] % 27 == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

// 1017 求数的位数
int main() {
    long num;
    scanf("%d", &num);
    int k = 0;
    while (num) {
        num = num / 10;
        k++;
    }
    printf("%d", k);
    return 0;
}

// 1120 点在圆上
int main() {
    float a, b;
    scanf("%f,%f", &a, &b);
    if (fabs(a * a + b * b - 1) < 1e-3) {
        printf("Y");
    } else {
        printf("N");
    }
    return 0;
}

// 1007 判断平方数
int main() {
    int num;
    scanf("%d", &num);
    for (int i = 1; i < 1000; ++i) {
        if (num == i * i) {
            printf("Y");
            return 0;
        }
    }
    printf("N");
    return 0;
}

// 二进制数有多少个 1
int main() {
    int num, count = 0;
    char s[16];
    scanf("%d", &num);
    itoa(num, s, 2); // 十进制转二进制
    for (int i = 0; i < strlen(s); ++i) {
        if (s[i] == '1') count++;
    }
    printf("%d", count);
    return 0;
}

// 1025 计算数列和
int main() {
    int a[10000], n, s = 0;
    scanf("%d", &n);
    for (int i = 0; i < 10000; ++i) {
        a[i] = 2 * i + 1;
    }
    for (int i = 0; i < n; ++i) {
        s = s + a[i];
    }
    printf("%d", s);
    return 0;
}

// 1044 输出最小值
int main() {
    int num[10], a;
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &num[i]);
    }
    a = num[0];
    for (int i = 0; i < 10; ++i) {
        if (num[i] < a) {
            a = num[i];
        }
    }
    printf("%d", a);
    return 0;
}

// 1024 计算阶乘
int main() {
    int n, s = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        s = s * i;
    }
    printf("%d", s);
    return 0;
}

// 1029 最大公约数
int main() {
    int m, n, p, temp;
    scanf("%d,%d", &m, &n);
    if (n > m) {
        temp = n;
        n = m;
        m = temp;
    }
    while (n) {
        p = m % n;
        m = n;
        n = p;
    }
    printf("%d", m);
    return 0;
}

// 1031 统计单词个数
int main() {
    char s[1000];
    int count = 0;
    gets(s);
    for (int i = 0; i < strlen(s); ++i) {
        if ((s[i] != ' ') && (s[i + 1] == ' '))
            count++;
    }
    printf("%d", count + 1);
    return 0;
}

// 1030 字符变换
int main() {
    char s[81];
    gets(s);
    for (int i = 0; i < strlen(s); ++i) {
        putchar(tolower(s[i]));
    }
    return 0;
}

// 1042 百万富翁
int main() {
    int m, i;
    scanf("%d", &m);
    for (i = 1; i <= 30; ++i) {
        if (0.01 * (pow(2, i - 1) - 1) - i * m >= 0)
            break;
    }
    printf("%d", i - 1);
    return 0;
}

// 1037 计算数列和
int main() {
    int n;
    scanf("%d", &n);
    double a = 2, b = 1, s = 0;
    for (int i = 0; i < n; ++i) {
        s = s + a / b;
        a = a + b;
        b = a - b;
    }
    printf("%.4f\n", s);
    return 0;
}

// 1137 输出1到9999能被7整除，且至少有一位为5的所有数字
int main() {
    int i, j;
    for (i = 7; i <= 9999; i = i + 7) {
        j = i;
        while (j != 0) {
            if (j % 10 == 5) break;
            j = j / 10;
        }
        if (j != 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}

// 1028 求素数
int main() {
    int sign[200];
    for (int i = 0; i < 200; ++i) {
        sign[i] = 1;
    }
    for (int i = 2; i < 200; ++i) {
        for (int j = 2; j < i; ++j) {
            if (i % j == 0) sign[i] = 0;
        }
    }
    for (int i = 2; i < 200; ++i) {
        if (sign[i] == 1) printf("%d\n", i);
    }
    return 0;
}

// 最小差值
int main() {
    float a[10], min = 1000000;
    for (int i = 0; i < 10; ++i) {
        scanf("%f", &a[i]);
    }
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (i != j) {
                float temp = fabs(a[i] - a[j]);
                if (temp < min) min = temp;
            }
        }
    }
    printf("%.2f", min);
    return 0;
}

// 1062 打印转置矩阵
int main() {
    int m[3][4], n[4][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            scanf("%d", &m[i][j]);
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            n[j][i] = m[i][j];
        }
    }
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// 1039 倒序
int main() {
    int a[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 9; i >= 0; i--) {
        printf("%d\n", a[i]);
    }
    return 0;
}

// 1046 高精度加法
int main() {
    int a[100] = {0}, b[100] = {0}, c[100] = {0};
    char s[101];
    int n1 = 0, n2 = 0, max = 0, e = 0;
	
    gets(s);
    n1 = strlen(s);
    for (int i = n1 - 1; i >= 0; i--) {
        a[n1 - 1 - i] = s[i] - '0';
    }
    gets(s);
    n2 = strlen(s);
    for (int i = n2 - 1; i >= 0; i--) {
        b[n2 - 1 - i] = s[i] - '0';
    }
	
    if (n1 > n2) max = n1;
    else max = n2;
	
    for (int i = 0; i <= max; ++i) {
        c[i] = (a[i] + b[i] + e) % 10;
        e = (a[i] + b[i] + e) / 10;
    }
	
    if (c[max] > 0) printf("%d", c[max]);
    for (int i = max - 1; i >= 0; i--) {
        printf("%d", c[i]);
    }
    return 0;
}

// 1040 统计不同数字的个数
int main() {
    int num[1000], t, count = 0;
    for (int i = 0; i < 1000; ++i) {
        num[i] = 0;
    }
    for (int i = 0; i < 20; ++i) {
        scanf("%d", &t);
        num[t] = 1;
    }
    for (int i = 0; i < 1000; ++i) {
        if (num[i] == 1) count++;
    }
    printf("%d", count);
    return 0;
}

// 1051 找矩阵中的鞍点
int main() {
    int a[3][4], flag = 0, col;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; ++i) {
        col = 0;
        for (int j = 1; j < 4; ++j) {
            if (a[i][j] > a[i][col]) //行最大
				col = j;
        }
        flag = 1;
        for (int j = 0; j < 3; ++j) {
            if (a[j][col] <= a[i][col] && j != i) //列最小
                flag = 0;
        }
        if (flag == 1) {
            printf("%d", a[i][col]);
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}

// 1145 判断回文串
int main() {
    char s[81];
    gets(s);
    int sign = 1, len = strlen(s);
    for (int i = 0; i < len / 2; ++i) {
        if (s[i] != s[len - i - 1]) {
            sign = 0;
            break;
        }
    }
    if (sign == 1) {
        printf("Y\n");
        return 0;
    }
    printf("N\n");
    return 0;
}

// 1050 寻找字符串
int main() {
    char a[80], b[80];
    gets(a);
    gets(b);
    char *p;
    p = strstr(a, b);
    printf("%d", p - a + 1);
    return 0;
}

// 回文串的判断（去掉0或1个字符）
int main() {
    char word[81], copy[81];
    int sign = 1, count, len;
    gets(word);
    len = strlen(word);
	//正常情况
    for (int i = 0; i < len / 2; i++) {
        if (word[i] != word[len - 1 - i]) {
            sign = 0;
            break;
        }
    }
    if (sign == 1) {
        printf("Y\n");
        return 0;
    }
	// 每去掉一个字符判断一次
    count = 0;
    while (count != len) {
        sign = 1;
        int cpylen = 0;
        for (int i = 0; i < len; ++i) {
            if (count == i) {
                continue;
            } else {
                copy[cpylen] = word[i];
                cpylen++;
            }
        }
        for (int i = 0; i < cpylen; ++i) {
            if (copy[i] != copy[cpylen - 1 - i]) {
                sign = 0;
                break;
            }
        }
        if (sign == 1) {
            printf("Y\n");
            return 0;
        }
        count++;
    }
    printf("N\n");

    return 0;
}

// 1084 十进制转二进制
void binary(int t) {
    if (t / 2 > 0) {
        binary(t / 2);
    }
    printf("%d", t % 2);
}

// 1125
struct student{
	char name[20];
	char sex;
	int num;
	float score;
};

// 1092 求字符串长度
#include <string.h>
int f(char s[]){
	return strlen(s);
}

// 链表
struct student {
    long num;
    int score;
    struct student *next;
};

struct student *create(int n) {
    struct student *head = NULL, *p1 = NULL, *p2 = NULL;
    for (int i = 1; i <= n; ++i) {
        p1 = (struct student *) malloc(LEN);
        scanf("%ld", &p1->num);
        scanf("%d", &p1->score);
        p1->next = NULL;
        if (n == 1) head = p1;
        else p2->next = p1;
        p2 = p1;
    }
    return head;
}

struct student *insert(struct student *head, struct student *stud) {
    struct student *p0, *p1, *p2;
    p1 = head;
    p0 = stud;
    if (head == NULL) head = p0;
    else {
        while ((p0->num > p1->num) && (p1->next != NULL)) {
            p2 = p1;
            p1 = p1->next;
        }
        if (p0->num < p1->num) {
            if (head == p1) head = p0;
            else p2->next = p0;
            p0->next = p1;
        } else {
            p1->next = p0;
        }
    }
    return head;
}

struct student *del(struct student *head, long num) {
    struct student *p1, *p2;
    p1 = head;
    while (p1 != NULL) {
        if (p1->num == num) {
            if (p1 == head) head = p1->next;
            else p2->next = p1->next;
            free(p1);
            break;
        }
        p2 = p1;
        p1 = p1->next;
    }
    return head;
}

struct student *reverse(struct student *head) {
    struct student *p = NULL, *q = NULL;
    while (head) {
        p = head;
        head = p->next;
        p->next = q;
        q = p;
    }
    head = p;
    return head;
}

struct student *merge(struct student *head, struct student *head2) {
    struct student *p;
    p = head;
    while (p->next) {
        p = p->next;
    }
    p->next = head2;
    return head;
}

struct student *sort(struct student *head) {
    struct student *head1 = NULL, *p, *q;
    p = q = head;
    while (p) {
        q = q->next;
        p->next = NULL;
        head1 = insert(head1, p);
        p = q;
    }
    return head1;
}

void print(struct student *head) {
    struct student *p;
    p = head;
    while (p) {
        printf("%8ld%8d", p->num, p->score);
        p = p->next;
        printf("\n");
    }
}

// 1106 字符写入，以'bye'为结束标志
int main() {
    FILE *fp;
    char ch, ch1 = ' ', ch2 = ' ', ch3 = ' ';
    if ((fp = fopen("answer.txt", "w")) == NULL) return 1;
    while ((ch = getchar()) != EOF) {
        fputc(ch, fp);
        ch1 = ch2;
        ch2 = ch3;
        ch3 = ch;
        if (ch1 == 'b' && ch2 == 'y' && ch3 == 'e') {
            break;
        }
    }
    fclose(fp);
}

// 11129 文本文件操作
int main() {
    FILE *fp;
    char ch;

    if ((fp = fopen("case1.in", "r")) == NULL)
        return 0;
    while ((ch = fgetc(fp)) != EOF) {
        if (ch >= '0' && ch <= '9') putchar(ch);
    }
    fclose(fp);
}

// 1105 [填空]文本文件操作_字符读入
int main() {
    FILE *fp;
    char ch;
    if ((fp = fopen("case1.in", "r")) == NULL)
        return 0;
    while ((ch = fgetc(fp)) != EOF) {
        if ('A' <= ch && ch <= 'Z')
            ch = ch + 32;
        putchar(ch);
    }
    fclose(fp);
}

// 1107 文本文件操作_单词的排序
int main() {
    FILE *fp1, *fp2;
    char str[10000][10], str1[10];
    int n = 0;
    if ((fp1 = fopen("case1.in", "r")) == NULL) return 0;
    if ((fp2 = fopen("answer.txt", "w")) == NULL) return 0;
    while (fscanf(fp1, "%s", str[n]) > 0) n++;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(str1, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], str1);
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        fprintf(fp2, "%s\n", str[i]);
    }
    fclose(fp1);
    fclose(fp2);
}

// 18041 分期还款
int main() {
    double d, p, r;
    scanf("%lf%lf%lf", &d, &p, &r);
    if (d == 0) {
        printf("0.0\n");
    } else if (d * r > p) {
        printf("God\n");
    } else {
        printf("%.1f", log10(p / (p - d * r)) / log10(1 + r));
    }
    return 0;
}

// 18045 前一个和后一个字符
int main() {
    char c, a, b;
    c = getchar();
    if (c > '0' && c < '9') {
        a = c - 1;
        b = c + 1;
        printf("%c %c", a, b);
    }
    if (c == '0') printf("first 1");
    if (c == '9') printf("8 last");
    if (c < '0' || c > '9') printf("error");
    return 0;
}

// 18037 20秒后的时间
int main() {
    int hour, minute, second, time;
    scanf("%d:%d:%d", &hour, &minute, &second);
    time = hour * 3600 + minute * 60 + second + 20;
    second = time % 60;
    time = time / 60;
    minute = time % 60;
    time = time / 60;
    hour = time % 24;
    printf("%02d:%02d:%02d", hour, minute, second);
    return 0;
}

// 18049 迭代法求平方根
int main() {
    float x1 = 10, x2 = 20, a;
    scanf("%f", &a);
    while (fabs(x1 - x2) >= 1e-5) {
        x1 = x2;
        x2 = 0.5 * (x1 + a / x1);
    }
    printf("%.4f", x2);
    return 0;
}

// 18046 字母分类统计
int main() {
    char s[1000];
    gets(s);
    int len = strlen(s), k1 = 0, k2 = 0, k3 = 0, k4 = 0;
    for (int i = 0; i < len; ++i) {
        if (isalpha(s[i])) k1++;
        else if (isdigit(s[i])) k2++;
        else if (s[i] == ' ') k3++;
        else k4++;
    }
    printf("%d %d %d %d", k1, k2, k3, k4);
    return 0;
}

// 18048 自由落体
int main() {
    double sum = -100, d = 100;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        sum = sum + 2 * d;
        d = d / 2;
    }
    printf("%.3f %.3f",sum,d);
    return 0;
}

// 18047 水仙花数
//  printf("153\n370\n371\n407\n");
int main() {
    int a, b, c;
    for (int i = 100; i < 1000; ++i) {
        a = i / 100; //百
        b = (i % 100) / 10; //十
        c = (i % 100) % 10; //个
        if (a * a * a + b * b * b + c * c * c == i) {
            printf("%d\n", i);
        }
    }
    return 0;
}

// 18051 勾股数
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            for (int k = j; k <= n; ++k) {
                if ((i * i + j * j) == k * k && ((i + j) > k))
                    printf("%d %d %d\n", i, j, k);
            }
        }
    }
    return 0;
}

// 18052 插入数据
int main() {
    int a[16] = {2, 3, 5, 7, 11, 13, 17, 23, 29, 31, 34, 71, 79, 97, 103};
	
    int n, i;
    scanf("%d", &n);
    for (i = 14; i >= 0; i--) {
        if (a[i] > n) a[i + 1] = a[i];
        else break;
    }
    a[i + 1] = n;
    return 0;
}

// 18057 ASCII码值之和的差
int main() {
    char s1[80], s2[80];
    int m1 = 0, m2 = 0, len1, len2;
    gets(s1);
    len1 = strlen(s1);
    gets(s2);
    len2 = strlen(s2);
    for (int i = 0; i < len1; ++i) {
        m1 = m1 + s1[i];
    }
    for (int i = 0; i < len2; ++i) {
        m2 = m2 + s2[i];
    }
    printf("%d", m1 - m2);
    return 0;
}

// 18056 字母统计
int main() {
    int count = 0;
    for (int i = 0; i < 3; ++i) {
        char s[81];
        gets(s);
        int len = strlen(s);
        for (int j = 0; j < len; ++j) {
            if (isupper(s[j])) count++;
        }
    }
    printf("%d", count);
    return 0;
}

// 18055 主对角线上的元素之和
int main() {
    int a[3][4], sum;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    sum = a[0][0] + a[1][1] + a[2][2];
    printf("%d", sum);
    return 0;
}

// 18054 输出不同的数
int main() {
    int a[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (a[i] == a[j] && i != j) {
                a[j] = -1;
            }
        }
    }
    for (int i = 0; i < 10; ++i) {
        if (a[i] != -1) printf("%d\n", a[i]);
    }
    return 0;
}

// 18065 所有数字之和
int sum(int n) {
    int sum = 0;
    while (n > 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

// 18070 矩阵行交换或列交换
void col(int a[][4], int i, int j) {
    for (int k = 0; k < 4; ++k) {
        swap(&a[k][i], &a[k][j]);
    }
}

void row(int a[][4], int i, int j) {
    for (int k = 0; k < 4; ++k) {
        swap(&a[i][k], &a[j][k]);
    }
}

// 18069 x的n次方
int F(int x, int n) {
    if (n == 0) return 1;
    else return x * F(x, n - 1);
}

// 18067 字符统计
int statistics(char *s) {
    int nB = 0, len;
    len = strlen(s);
    for (int i = 0; i < len; ++i) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) nL++;
        if (s[i] >= '0' && s[i] <= '9') nN++;
        if (s[i] == ' ')nB++;
    }
    return nB;
}

// 18066 元音字母
void yuan(char *s, char *s2) {
    while (*s != '\0') {
        if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u' || *s == 'A' || *s == 'E' || *s == 'I' ||
            *s == 'O' || *s == 'U') {
            *s2 = *s;
            s2++;
        }
        s++;
    }
    *s2 = '\0';
}

// 18071 学生信息统计
void average(double a[][5], int n) {
    for (int i = 0; i < 10; ++i) {
        float sum = 0;
        for (int j = 0; j < 5; ++j) {
            sum = sum + a[i][j];
        }
        sum = sum / 5.0;
        printf("%.2f ", sum);
    }
    printf("\n");
}

void average2(double a[][5], int n) {
    for (int i = 0; i < 5; ++i) {
        float sum = 0;
        for (int j = 0; j < 10; ++j) {
            sum = sum + a[j][i];
        }
        sum = sum / 10.0;
        printf("%.2f ", sum);
    }
    printf("\n");
}

void top(double a[][5], int n) {
    for (int i = 0; i < 5; ++i) {
        float max = 0;
        for (int j = 0; j < 10; ++j) {
            if (a[j][i] > max) max = a[j][i];
        }
        printf("%.2f ", max);
    }
}

// 18068 选择排序
int sort(int a[], int n) {
    int i, j, k, tmp;
    for (i = 0; i < n - 1; i++) {
        k = i;
        for (j = i + 1; j < n; j++)
            if (a[k] > a[j]) k = j;
        tmp = a[k];
        a[k] = a[i];
        a[i] = tmp;
    }
}

// 18059 学生成绩表
struct data {
    int num;
    char name[20];
    double score[3];
    double avg;
};

int main() {
    int i, j;
    struct data stu[10], tmp;
    for (i = 0; i < 10; i++) {
        scanf("%d%s%lf%lf%lf", &stu[i].num, &stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
        stu[i].avg = stu[i].score[0] + stu[i].score[1] + stu[i].score[2];
    }
    for (i = 0; i < 9; i++)
        for (j = 0; j < 9 - i; j++) {
            if (stu[j].avg < stu[j + 1].avg) {
                tmp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = tmp;
            }
        }
    for (i = 0; i < 10; i++) {
        printf("%d %s %.0lf %.0lf %.0lf\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2]);
    }
    return 0;
}

// 18060 删除空格
void removeSpace(char *s) {
    int i = 0, j = 0;
    while (s[j] != '\0') {
        if (s[j] == ' ') j++;
        else s[i++] = s[j++];
    }
    s[i] = '\0';
}

// 18061 数的交换
void input(int a[]) {
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
    }
}

void swap(int a[]) {
    int min, max, minIndex, maxIndex, t1, t2;
    min = max = a[0];
    for (int i = 0; i < 10; ++i) {
        if (a[i] > max) {
            max = a[i];
            maxIndex = i;
        }
    }
    t1 = a[maxIndex];
    a[maxIndex] = a[9];
    a[9] = t1;

    for (int i = 0; i < 10; ++i) {
        if (a[i] < min) {
            min = a[i];
            minIndex = i;
        }
    }
    t2 = a[minIndex];
    a[minIndex] = a[0];
    a[0] = t2;
}

// 18062 二维数组每行中的最大值
void find(int a[][4]) {
    int (*p)[4], *q, *max;
    for (p = a; p < a + 4; p++) {
        max = *p;
        for (q = *p + 1; q < *p + 4; q++) {
            if (*q > *max) max = q;
        }
        printf("%d\n", *max);
    }
}

// 18063 圈中的游戏
int main() {
    int n, s = 0;
    scanf("%d", &n);
    for (int i = 2; i <= n; ++i) {
        s = (s + 3) % i;
    }
    printf("%d", s + 1);
    return 0;
}



