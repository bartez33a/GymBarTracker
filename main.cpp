#include <iostream>

//openCV
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

int main() {
	std::cout << "GymBarTracker\n";

	cv::Mat src;
	// create window
	const char* window_name = "okienko";
	cv::namedWindow(window_name, cv::WINDOW_AUTOSIZE);
	// file name and location
	std::string filename = "test.jpg";
	std::string location = "images/";
	std::string path = (location + filename);
	// read data from file
	src = cv::imread(path, cv::IMREAD_COLOR);

	char key = 0;
	while (key != 'q')
	{
		if (src.data != NULL)
		cv::imshow(window_name, src);
		key = cv::waitKey(20);
	}

	cv::destroyAllWindows();


	return EXIT_SUCCESS;
}