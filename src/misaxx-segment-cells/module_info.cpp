/**
 * Copyright by Ruman Gerst
 * Research Group Applied Systems Biology - Head: Prof. Dr. Marc Thilo Figge
 * https://www.leibniz-hki.de/en/applied-systems-biology.html
 * HKI-Center for Systems Biology of Infection
 * Leibniz Institute for Natural Product Research and Infection Biology - Hans Knöll Insitute (HKI)
 * Adolf-Reichwein-Straße 23, 07745 Jena, Germany
 *
 * This code is licensed under BSD 2-Clause
 * See the LICENSE file provided with this code for the full license.
 */

#include <misaxx/core/module_info.h>
#include <misaxx-segment-cells/module_info.h>

misaxx::misa_module_info misaxx_segment_cells::module_info() {
    misaxx::misa_module_info info;
    info.set_id("misaxx-segment-cells");
    info.set_version("1.0.0");
    info.set_name("misaxx-segment-cells");
    info.set_description("");

    info.add_dependency(misaxx::module_info());
    // TODO: Add dependencies via info.add_dependency()
    return info;
}
