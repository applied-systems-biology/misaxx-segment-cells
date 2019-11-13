//
// Created by rgerst on 13.11.19.
//

#pragma once
#include <misaxx/core/attachments/misa_locatable.h>

namespace misaxx_segment_cells {
    struct conidia_count : public misaxx::misa_locatable {

        int count = 0;

        void from_json(const nlohmann::json &t_json) override;

        void to_json(nlohmann::json &t_json) const override;

        void to_json_schema(misaxx::misa_json_schema_property &t_schema) const override;

        std::string get_documentation_name() const override;

        std::string get_documentation_description() const override;

    protected:
        void build_serialization_id_hierarchy(std::vector<misaxx::misa_serialization_id> &result) const override;
    };
}

inline void to_json(nlohmann::json &j, const misaxx_segment_cells::conidia_count &p) {
    p.to_json(j);
}

inline void from_json(const nlohmann::json &j, misaxx_segment_cells::conidia_count &p) {
    p.from_json(j);
}



