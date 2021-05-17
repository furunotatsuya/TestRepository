#include <DxLib.h>

using namespace std;

int WINAPI WinMain(HINSTANCE hInsstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	//システム処理
	SetWindowText(L"2016202 古野 達也");      //ゲームウィンドウのタイトル
	SetGraphMode(640, 480, 16);              //ゲームウィンドウのサイズと色モードの設定
	ChangeWindowMode(true);                  //ゲームウィンドウの表示方法
	if (DxLib_Init() == -1)                  //DXライブラリの初期化設定
	{
		//TRACE("DcLib の初期化失敗");
		return -1;
	}

	//_dbgSetup(640, 480, 255);


	//ゲームルール
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		//_dbgStartDraw();





		//描画処理
		SetDrawScreen(DX_SCREEN_BACK);      //描画する画面を裏の画面設定
		ClearDrawScreen();                  //描画する画面の内容を消去




		//_dbgAddDraw();

		ScreenFlip();                       //裏の画面を表の画面に瞬間コピー
	}

	//システム終了処理
	DxLib_End();                            //DXライブラリの終了処理
	return 0;                               //ゲームの終了
}

