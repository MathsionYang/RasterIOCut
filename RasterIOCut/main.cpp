#include "RasterIOCut.h"


void main()
{
	GDALAllRegister();

	char SrcFilePath[1000] = "E:\\c\\1.tif";  //�����е�ͼ��·��
	char DstFilePath[1000] = "E:\\opencvtest\\load\\11500.tif";	//���к�ͼ���·��
	
	const char* srcfile = SrcFilePath;
	const char* dstfile = DstFilePath;
	int iSizeX1 = 11500;	//������к�ͼ��Ŀ�
	int iSizeY1 = 11500;	//������к�ͼ��ĳ�
	int iStartX1 = 0;
	int iStartY1 = 0;
	ImageCut(srcfile,dstfile,iStartX1,iStartY1,iSizeX1,iSizeY1);

}
