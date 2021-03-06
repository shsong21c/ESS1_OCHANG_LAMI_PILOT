#pragma once


// CNTransformLib
class CNTransformLib : public CWnd
{
	DECLARE_DYNAMIC(CNTransformLib)

public:
	CNTransformLib();
	virtual ~CNTransformLib();

	/////////////////////////////////////////////////////////////////////////////
	// CTransformLib message handlers
	// fm : Frame Memory 시작번지
	// (left, top)-(right,bottom) : ROI
	// nPitch : Frame 폭 
	// nSlope : 최소 Edge Slope 
	// (*Cx, *Cy) : Circle Center
	// return 1: Success
	//        <0 : Failure
	long HoughCircle(unsigned char *fm, long left, long top, long right, long bottom, long nObjectColor, long nDiameter, double *cx, double *cy, long nWidth, long nHeight);

	// Digital 회전 함수
	// SourImage : 원 영상의 메모리 
	// DestImage : 변환된 영상 메모리 
	// x1, y1, x2, y2 : 변환하고자하는 영상의 위치 
	// angle : 회전각도 지정 
	void ImageRotation(unsigned char *SourImage, unsigned char *DestImage, long x1, long y1, long x2, long y2, float angle, long nWidth, long nHeight);

	// Digital Zoom 함수
	// SourImage : 원 영상의 메모리 
	// DestImage : 변환된 영상 메모리 
	// x1, y1, x2, y2 : 변환하고자하는 영상의 위치 
	// zoom_x : X축으로 Zooming Scale 
	// zoom_y : Y축으로 Zooming Scale 
	void ImageZoom(unsigned char *SourImage, unsigned char *DestImage, long x1, long y1, long x2, long y2, float zoom_x, float zoom_y, long nWidth, long nHeight);

	// 원을 직사각형으로 편는 Open함수(변수 초기화)
	// cx, cy : 원의 중심 좌표 
	// start_angle, end_angle : 직사각형으로 변환하고자 하는 초기 각도와 끝의 각도 
	// in_radius, out_radius : 원의 중심에서 안쪽 반경 이상부터 밖의 반경까지를 직사각의 높이로 변환 
	// interval_angle : 샘플링 각도 간격 지정     
	void ImageRectToPolarOpen(long nPosX, long nPosY, float dStartAngle, float dEndAngle, float dInRadius, float dOutRadius, float dIntervalAngle,
							  long *nWidth, long *nHeight);

	// 원을 직사각형으로 편는 함수(메모리 해제, Close 함수)
	void ImageRectToPolarClose();

	// 원을 직사각형으로 편는 함수(주 함수)
	// SourImage : 원 영상 메모리 
	// DestImage : 변환된 영상  
	// rect_height : 변환된 영상의 높이 
	// rect_width : 변환된 영상의 폭 
	void ImageRectToPolar(LPBYTE pSourImage, long nOrgWidth, long nOrgHeight, LPBYTE pDestImage, long nPolWidth, long nPolHeight);
	void ExecTransTiltToRect(LPBYTE pSourImage, POINT2 ptPos1, POINT2 ptPos2, POINT2 ptPos3, POINT2 ptPos4, long nWidth, long nHeight);
	LPBYTE OpenTransTiltToRect(POINT2 ptPos1, POINT2 ptPos2, POINT2 ptPos3, POINT2 ptPos4, long *nWidth, long *nHeight);
	void CloseTransTiltToRect();


public:
	// 영상을 원형에서 직사각형으로 변환하는 관련 변수 
	LPBYTE m_pImageBuffer;
	LPBYTE m_pLocalImage;
	long   m_nCenterX;
	long   m_nCenterY;

	float  m_dStartAngle;
	float  m_dEndAngle;
	float  m_dInRadius;
	float  m_dOutRadius;
	float  m_dIntervalAngle;
    //////////////////////////////////////////////////

protected:
	DECLARE_MESSAGE_MAP()
};


