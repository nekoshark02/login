/*完全にミスった。本当はHTMLもCSSもなしの適当なファイル作ろうと思ってたのにHTML、CSSとか書いてからEnter押してしまった。泣きを見た
まあいいです。いい機会なのでHTMLもCSSもちゃんと勉強します。サーバーとかはやらないし、そこまで自分は技術力ないです。まあ正直フレームワーク
とかをログイン画面に使った方がはるかにいいと思うけど*/

#include<iostream>
using namespace std;
int main(){
  cout<<"ログイン"\n;
  //ユーザー名を入力（3文字以上12文字以内）
  cout<<"ユーザー名"\n;
  string user;
  cin>>user\n;
  int user_str=user.size();
  bool usr=true;
  usr=(user_str>=3)&&(user_str<=12);
  
  if(usr==1){
    cout<<"OK!\n";
    }
  else{
    cout<<"Sorry,you cannot use the user name...\n";
    }
      
//間違ってるところ多いと思うので、フォークとかしない方が賢明です。「ここ間違えてるよ」とか教えてくれたら嬉しいです！
  
  
  
  
  
