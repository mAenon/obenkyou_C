## 問題

関数 *int is_prime(int n)* は，2以上の自然数nが素数の場合には1を返し，素数でない場合には0を返す関数である．関数 *is_prime()* を定義し *is_prime()* を用いて2から100までの全ての素数とその個数をディスプレイに表示するプログラムを書け．

***
# ***int is_prime(int n)***
```C

int is_prime(int n)
{
    /*-------------------------------------*/
    // return    : Is n prime number ? (1 / 0)
    //
    // input     :
    //   n : check number
    //
    // local var :
    //   i     : loop counter
    //   limit : check limit
    /*-------------------------------------*/

    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;


    int i, limit;

    limit = sqrt(n);

    for (i = 3; i <= limit; i += 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

```

# How to Use
- main.c
- Makefile

をローカルに保存してください．  
ターミナル上で
```Bash
$ make
$ ./main
```
を実行することで2~100の素数一覧と個数が表示されます．

***
以下問題には関係ない説明  
そのうち学校で習うので飛ばしても問題なし
## Makefile
コマンドラインで  

```Bash
$ make
```
を実行すると自動で実行ファイル *main* を生成してくれます．
```Bash
$ make clean
```
を実行すると作ったファイルを消してくれます

Makefileの中の  
OBJS =  
の先に作った *.c* ファイルの拡張子を *.o* に変更したものを書いておけばとりあえずは動きます
