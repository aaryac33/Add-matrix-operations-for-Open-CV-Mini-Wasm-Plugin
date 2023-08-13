#include <opencv2/opencv.hpp>

int main() {
    // Load an image
    cv::Mat image = cv::imread("input.jpg", cv::IMREAD_COLOR);

    if (image.empty()) {
        std::cout << "Could not open or find the image." << std::endl;
        return -1;
    }

    // Apply Gaussian blur
    cv::Mat filteredImage;
    cv::GaussianBlur(image, filteredImage, cv::Size(5, 5), 0);

    // Display the original and filtered images
    cv::imshow("Original Image", image);
    cv::imshow("Filtered Image", filteredImage);
    cv::waitKey(0);

    return 0;
}
