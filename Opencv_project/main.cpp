#include <opencv2/opencv.hpp>
#include <iostream>


using namespace cv;

int main() {



	VideoCapture cap(0);

	if (!cap.isOpened())
		return -1;

	for (;;) {

		Mat frame;
		cap >> frame;
		imshow("Webcam_Frame", frame);


		if (waitKey(20) >= 0)
			break;

	}



	return 0;
}