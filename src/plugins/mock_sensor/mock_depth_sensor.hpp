// This file is part of the Orbbec Astra SDK [https://orbbec3d.com]
// Copyright (c) 2015 Orbbec 3D
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// Be excellent to each other.
#ifndef MOCK_DEPTH_SENSOR_H
#define MOCK_DEPTH_SENSOR_H

#include <memory>

#include "astra_sensor.hpp"
#include "mock_depth_generator.hpp"

using astra::devices::device_status;
using astra::devices::device_status_value;
using astra::devices::sensor_info;

namespace orbbec { namespace mocks {

    class mock_depth_sensor : public astra::devices::sensor
    {
    public:
        mock_depth_sensor();
        virtual ~mock_depth_sensor();

        virtual device_status on_initialize() override;

    private:
        std::unique_ptr<depth_generator> generator_;
    };
}}

#endif /* MOCK_DEPTH_SENSOR_H */
