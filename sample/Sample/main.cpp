#include <DxLib.h>


int WINAPI WinMain(HINSTANCE hInsstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	//システム処理
	SetWindowText(L"2016202_古野 達也");      //ゲームウィンドウのタイトル
	SetGraphMode(640, 480, 16);              //ゲームウィンドウのサイズと色モードの設定
	ChangeWindowMode(true);                  //ゲームウィンドウの表示方法
	if (DxLib_Init() == -1)                  //DXライブラリの初期化設定
	{
		
		return -1;
	}

	//ゲームルール
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		
		//描画処理
		SetDrawScreen(DX_SCREEN_BACK);      //描画する画面を裏の画面設定
		ClearDrawScreen();                  //描画する画面の内容を消去


		ScreenFlip();                       //裏の画面を表の画面に瞬間コピー
	}

	//システム終了処理
	DxLib_End();                            //DXライブラリの終了処理
	return 0;                               //ゲームの終了
}