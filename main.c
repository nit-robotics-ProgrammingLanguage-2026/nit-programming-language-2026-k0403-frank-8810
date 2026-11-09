#include <stdio.h>

int main(void) {
    int x;
    scanf("%d", &x);
    /* 課題0403: 入力されたintのデータを1.08倍した結果を整数(int)として表示するプログラムを書け．intへの変換には「キャスト演算(前回スライドを参照のこと)」を使用せよ */
    printf("%d\n", (int)(x * 1.08));
    return 0;
}
