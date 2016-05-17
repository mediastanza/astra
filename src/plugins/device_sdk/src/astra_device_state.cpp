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
#include "astra_device_state.hpp"

namespace astra { namespace devices {

    const device_state_value& device_state::value() const
    {
        return value_;
    }

    device_state::operator bool() const
    {
        return value() != device_state_value::faulted;
    }

    bool operator==(const device_state& lhs, const device_state& rhs)
    {
        return lhs.value() == rhs.value();
    }

    bool operator!=(const device_state& lhs, const device_state& rhs)
    {
        return !(lhs == rhs);
    }
}}
