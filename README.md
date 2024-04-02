# p11-kit
GNU Emacs30.0.50に含まれる`java/INSTALL`にしたがって取得したp11-kitモジュール(gnutlsの依存モジュール)のレポジトリ。

# 作成した手順

1. [Android ports for GNU Emacsのソース書庫](https://sourceforge.net/projects/android-ports-for-gnu-emacs/files/p11-kit-0.24.1-emacs.tar.gz)を取得して展開

```bash
$: wget https://sourceforge.net/projects/android-ports-for-gnu-emacs/files/p11-kit-0.24.1-emacs.tar.gz
$: tar xvfz p11-kit-0.24.1-emacs.tar.gz
```

2. gitレポジトリとして初期化し修正用ブランチ`my/master`をcheckout

```bash
$: cd p11-kit-0.24.1
$: git init
$: git checkout -b my/master
```

3. 空レポジトリにpush

```bash
$: git add -A
$: git commit -m 'nanika commit messages...'
$: gh repo create my-p11-kit-0.24.1 --public
$: git remote add mine https://github.com/JIBUN/my-p11-kit-0.24.1.git
$: git branch -M my/master
$: git push -u mine my/master
```
