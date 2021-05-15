/*完全にミスった。本当はHTMLもCSSもなしの適当なファイル作ろうと思ってたのにHTML、CSSとか書いてからEnter押してしまった。泣きを見た
まあいいです。いい機会なのでHTMLもCSSもちゃんと勉強します。サーバーとかはやらないし、そこまで自分は技術力ないです。まあ正直フレームワーク
とかをログイン画面に使った方がはるかにいいと思うけど*/

#include<iostream>
#include<string>
using namespace std;
int main(){
  cout<<"login"<<endl;
  //ユーザー名を入力（3文字以上12文字以内）
  cout<<"Username"<<endl;
  string user;
  cin>>user;
  cout<<user<<endl;
  int user_str=user.size();
  bool usr=true;
  usr=(user_str>=3)&&(user_str<=12);
  
  for(int i=0;usr!=1;i++){
    if(usr==1){
      cout<<"OK!"<<endl;
      }
    else{
      cout<<"Sorry,you cannot use the user name..."<<endl;
      }
  }
  cout<<"〇"<<endl;

  cout<<"Password";
  string pass;
  cin>>pass;
  cout<<pass<<endl;
  cout<<"〇"<<endl;
  
}

      
/*間違ってるところ多いと思うので、フォークとかしない方が賢明です。「ここ間違えてるよ」とか教えてくれたら嬉しいです！
追記　jsでやり直しするかもです*/
  
  
  
  
  
