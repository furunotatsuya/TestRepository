#include <DxLib.h>


int WINAPI WinMain(HINSTANCE hInsstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	//�V�X�e������
	SetWindowText(L"2016202_�Ö� �B��");      //�Q�[���E�B���h�E�̃^�C�g��
	SetGraphMode(640, 480, 16);              //�Q�[���E�B���h�E�̃T�C�Y�ƐF���[�h�̐ݒ�
	ChangeWindowMode(true);                  //�Q�[���E�B���h�E�̕\�����@
	if (DxLib_Init() == -1)                  //DX���C�u�����̏������ݒ�
	{
		
		return -1;
	}

	//�Q�[�����[��
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		
		//�`�揈��
		SetDrawScreen(DX_SCREEN_BACK);      //�`�悷���ʂ𗠂̉�ʐݒ�
		ClearDrawScreen();                  //�`�悷���ʂ̓��e������


		ScreenFlip();                       //���̉�ʂ�\�̉�ʂɏu�ԃR�s�[
	}

	//�V�X�e���I������
	DxLib_End();                            //DX���C�u�����̏I������
	return 0;                               //�Q�[���̏I��
}