#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/objdetect.hpp>
#include<iostream>

using namespace std;
using namespace cv;

int main() {
	string path = "img.jpeg";
	Mat	img = imread(path);

	CascadeClassifier facedetect;
	facedetect.load("haarcascade_frontalface_default.xml");

	vector<Rect> faces;
	facedetect.detectMultiScale(img, faces, 1.3, 5);

	for (int i = 0; i < faces.size(); i++) {
		rectangle(img, faces[i].tl(), faces[i].br(), Scalar(0, 0, 255), 3);
		
        rectangle(img, Point(0,0), Point(200,50), Scalar(50, 50, 255), FILLED);
        if(faces.size()==1){
            putText(img, to_string(faces.size())+" Faces Found", Point(7, 25), FONT_HERSHEY_DUPLEX, 1, Scalar(255, 255, 255), 1);
        }
        else{
            putText(img, to_string(faces.size())+" Faces Found", Point(7, 25), FONT_HERSHEY_DUPLEX, 1, Scalar(255, 255, 255), 1);
        }
	}

	imshow("Frame", img);
	waitKey(0);

	return 0;
}

/*
int main() {
	VideoCapture video(1);
	CascadeClassifier facedetect;
	Mat img;
	facedetect.load("haarcascade_frontalface_default.xml");
	
	while (true) {
		video.read(img);
		vector<Rect> faces;
		facedetect.detectMultiScale(img, faces, 1.3, 5);

		for (int i = 0; i < faces.size(); i++) {
			rectangle(img, faces[i].tl(), faces[i].br(), Scalar(0, 0, 255), 3);
			
            rectangle(img, Point(0,0), Point(200,50), Scalar(50, 50, 255), FILLED);
            if(faces.size()==1){
                putText(img, to_string(faces.size())+" Faces Found", Point(7, 25), FONT_HERSHEY_DUPLEX, 1, Scalar(255, 255, 255), 1);
            }
            else{
                putText(img, to_string(faces.size())+" Faces Found", Point(7, 25), FONT_HERSHEY_DUPLEX, 1, Scalar(255, 255, 255), 1);

            }
		}

		imshow("Frame", img);
		waitKey(1);
		

	}
return 0;
}
*/
