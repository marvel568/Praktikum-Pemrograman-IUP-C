#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>

cv::Mat gammaCorrection(const cv::Mat& input, double gamma)
{
    cv::Mat lut(1, 256, CV_8U);
    uchar* lut_ptr = lut.ptr();
    for (int i = 0; i < 256; i++)
        lut_ptr[i] = cv::saturate_cast<uchar>(255.0 * std::pow(i / 255.0, 1.0 / gamma));
    cv::Mat output;
    cv::LUT(input, lut, output);
    return output;
}

cv::Mat histogramEqualize(const cv::Mat& input)
{
    cv::Mat hsv;
    cv::cvtColor(input, hsv, cv::COLOR_BGR2HSV);
    std::vector<cv::Mat> channels;
    cv::split(hsv, channels);
    cv::equalizeHist(channels[2], channels[2]);
    cv::merge(channels, hsv);
    cv::Mat output;
    cv::cvtColor(hsv, output, cv::COLOR_HSV2BGR);
    return output;
}

int main(int argc, char* argv[])
{
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <image_path> [gamma_value]\n";
        return 1;
    }

    std::string input_path = argv[1];
    double gamma = (argc >= 3) ? std::stod(argv[2]) : 2.0;

    cv::Mat image = cv::imread(input_path, cv::IMREAD_COLOR);
    if (image.empty()) {
        std::cerr << "Error: Could not load image from: " << input_path << "\n";
        return 1;
    }

    cv::Mat result_gamma  = gammaCorrection(image, gamma);
    cv::Mat result_histeq = histogramEqualize(image);

    size_t dot_pos = input_path.rfind('.');
    std::string base = input_path.substr(0, dot_pos);
    std::string ext  = input_path.substr(dot_pos);

    cv::imwrite(base + "_gamma"  + ext, result_gamma);
    cv::imwrite(base + "_histeq" + ext, result_histeq);

    cv::imshow("Original",            image);
    cv::imshow("Gamma Corrected",     result_gamma);
    cv::imshow("Histogram Equalized", result_histeq);
    cv::waitKey(0);
    cv::destroyAllWindows();

    return 0;
}