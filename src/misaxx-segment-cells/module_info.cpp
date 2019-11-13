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
