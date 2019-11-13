//
// Created by rgerst on 13.11.19.
//

#include <misaxx-segment-cells/module_interface.h>
#include <misaxx-segment-cells/attachments/conidia_count.h>
#include "quantify_conidia.h"

using namespace misaxx_segment_cells;

void quantify_conidia::work() {
    auto module_interface = get_module_as<misaxx_segment_cells::module_interface>();
    for(const std::string &filename : module_interface->m_inputImages.get_filenames()) {
        misaxx::imaging::misa_image_file segmented = module_interface->m_outputSegmented.at(filename);
        cv::Mat mask = segmented.clone();

        cv::Mat components {mask.size(), CV_32S, cv::Scalar::all(0)};
        cv::connectedComponents(mask, components, 4, CV_32S);

        std::unordered_set<int> encountered{};
        for(int y = 0; y < components.rows; ++y) {
            const int* row = components.ptr<int>(y);
            for(int x = 0; x < components.cols; ++x) {
                int l = row[x];
                if(l > 0) {
                    encountered.insert(l);
                }
            }
        }

        conidia_count result {};
        result.count = static_cast<int>(encountered.size());
        segmented.attach(result);
    }
}
