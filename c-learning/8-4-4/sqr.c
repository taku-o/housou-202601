#include <stdio.h>

#ifndef TEST_ENABLED
    #define TEST_ENABLED 0
#endif

int sqr(int);

#if TEST_ENABLED
    int test_sqr(void);
    int test_sqr_divcalc(void);
#endif

/* main */
int main(void)
{
    int n;
    int a, b;

    #if TEST_ENABLED
    if (test_sqr()) return 1;
    if (test_sqr_divcalc()) return 1;
    printf("TEST Done.\n");
    return 0;
    #endif // end of #if TEST_ENABLED

    /* ①  入力の受け取り */
    printf("2以上の整数を入力してください > ");
    scanf("%d", &n);

    /* ②  入力値の確認 */
    if (n < 2)
    {
        printf("入力した値が範囲外の値です。\n");
        return 1;
    }

    /*
     * ③  平方根の計算値を取得
     *
     * n = (a * a) * b
     *   = a√b
     *
     * ④  bの値の特定。両辺を(a * a)で割って、右辺の(a * a)を消す。
     * すると、bは n / (a * a) で特定できることがわかる。
     *
     * n = (a * a) * b
     * n / (a * a) = ((a * a) * b) / (a * a)
     * n / (a * a) = b
     */
    a = sqr(n);
    b = n / (a * a);

    /*
     * ⑤  結果の表示。√1、もしくは1√nの結果になった時、計算結果の表示を修正する。
     * 2√3 => 2√3
     * 4√1 => 4
     * 1√17 => √17
     */
    if (a == 1)
    {
        printf("%d の平方根は √%d\n", n, b);
    }
    else if (b == 1)
    {
        printf("%d の平方根は %d\n", n, a);
    }
    else {
        printf("%d の平方根は %d√%d\n", n, a, b);
    }

    return 0;
}

/*
 * ⑥  整数nを整数iの2乗で割り切れる時、そのiを返す。
 * 割り切れる整数iの2乗の値が複数あるときは、その中で最大の値を返す。
 */
int sqr(int n)
{
    int i;

    /* ⑦  渡された元の値nからデクリメントを続けて、iの2乗で割り切れる最大の値を探す */
    for (i = n; i > 0; --i)
    {
        if (n % (i * i) == 0)
        {
            return i;
        }
    }

    /* ⑧  nが1以上であるとき、最終的に1の2乗で必ず割り切れるのでこの行には来ない */
    return 0;
}

#if TEST_ENABLED
/*
 * ⑨  sqr関数の実行結果確認用のコード。
 * テスト用のコードは提出時、消すべきか残すべきか。
 * 迷ったが、テストは必ずあるべき、という自分の考えに従って残すこととした。
 */
int test_sqr(void)
{
    int n;
    int expected;
    int actual;

    n = 12;
    expected = 2;
    actual = sqr(n);
    if (actual != expected)
    {
        printf("test failed. n=%d, actual=%d, expected=%d", n, actual, expected);
        return 1;
    }

    n = 16;
    expected = 4;
    actual = sqr(n);
    if (actual != expected)
    {
        printf("test failed. n=%d, actual=%d, expected=%d", n, actual, expected);
        return 1;
    }

    n = 17;
    expected = 1;
    actual = sqr(n);
    if (actual != expected)
    {
        printf("test failed. n=%d, actual=%d, expected=%d", n, actual, expected);
        return 1;
    }

    n = 72;
    expected = 6;
    actual = sqr(n);
    if (actual != expected)
    {
        printf("test failed. n=%d, actual=%d, expected=%d", n, actual, expected);
        return 1;
    }

    return 0;
}

/*
 * ⑩  
 * a = sqr(n);
 * b = n / (a * a);
 * の結果が正しいか確認するためのテストコード。
 *
 * 関数に切り出すにはコードが短い。これを関数にしてしまうとコードが読みにくくなる。
 * しかし、動作確認はしなければならないので、同一処理を実行し、計算結果の確認をしている。
 */
int test_sqr_divcalc(void)
{
    int n;
    int a, b;

    n = 12;
    a = sqr(n);
    b = n / (a * a);
    if (a != 2 || b != 3)
    {
        printf("test failed. n=%d, a=%d, b=%d", n, a, b);
        return 1;
    }

    n = 16;
    a = sqr(n);
    b = n / (a * a);
    if (a != 4 || b != 1)
    {
        printf("test failed. n=%d, a=%d, b=%d", n, a, b);
        return 1;
    }

    n = 17;
    a = sqr(n);
    b = n / (a * a);
    if (a != 1 || b != 17)
    {
        printf("test failed. n=%d, a=%d, b=%d", n, a, b);
        return 1;
    }

    n = 72;
    a = sqr(n);
    b = n / (a * a);
    if (a != 6 || b != 2)
    {
        printf("test failed. n=%d, a=%d, b=%d", n, a, b);
        return 1;
    }

    return 0;
}
#endif // end of #if TEST_ENABLED


/*
期末課題: C-1 平方根

実装は大きく
1. 入力の処理
2. 平方根の計算
3. 結果の出力
の三段階の処理から作られています。

----
## 1. 入力の処理

①  入力の受け取り で変数nにユーザーの入力した値を取得しています。
    printf("2以上の整数を入力してください > ");
    scanf("%d", &n);

----
## 2. 平方根の計算

⑥  int sqr(int n) は、n
    整数nを整数iの2乗で割り切れる時、そのiを返す関数です。
    割り切れる整数iの2乗の値が複数あるときは、その中で最大の値を返します。

    for (i = n; i > 0; --i)
    {
        if (n % (i * i) == 0)
        {
            return i;
        }
    }

③  平方根の計算値を取得

   整数nの平方根は、
   n = (a * a) * b であるとき、
     = a√b         と表現することになっているので、
   
   int sqr(int n) でaの値を特定しています。

④  bの値の特定
   次に、bの値は、

   n = (a * a) * b
     = a√b

   の両辺を(a * a)で割って、右辺の(a * a)を消すことで、
   n = (a * a) * b
   n / (a * a) = ((a * a) * b) / (a * a)
   n / (a * a) = b

   n / (a * a) でbを特定出来ることがわかります。

まとめたのが、次のコードになります。
    a = sqr(n);
    b = n / (a * a);

----
## 3. 結果の出力

⑤  で結果を画面に表示しています。

変数a、bには1の値が入ることがありますので、
√1、もしくは1√nの結果になった時、計算結果の表示を修正する処理を入れています。

    2√3 => 2√3
    4√1 => 4
    1√17 => √17

*/

