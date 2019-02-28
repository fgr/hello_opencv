#include "opencv2/highgui.hpp"
#include "opencv2/opencv.hpp"
#include <iostream>
#include <string>

int main() {
    const std::string image_file_name =
            "/home/user/CLionProjects/hello-opencv/resources/bild1.jpg";
    cv::Mat image = cv::imread(image_file_name);
    if (image.empty()) {
        std::cerr << "Bild konnte nicht geladen werden: " << image_file_name
                  << std::endl;
        return 1;
    }

    cv::namedWindow("Display window", cv::WINDOW_AUTOSIZE);
    cv::imshow("Display window", image);
    cv::waitKey(0);

    return 0;
}
