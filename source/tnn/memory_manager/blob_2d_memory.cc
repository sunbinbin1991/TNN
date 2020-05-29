// Tencent is pleased to support the open source community by making TNN available.
//
// Copyright (C) 2020 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the BSD 3-Clause License (the "License"); you may not use this file except
// in compliance with the License. You may obtain a copy of the License at
//
// https://opensource.org/licenses/BSD-3-Clause
//
// Unless required by applicable law or agreed to in writing, software distributed
// under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.

#include "tnn/memory_manager/blob_2d_memory.h"
#include "tnn/utils/dims_vector_utils.h"

namespace TNN_NS {

Blob2DMemory::Blob2DMemory(AbstractDevice* device, BlobMemorySizeInfo& size_info, int use_count)
    : BlobMemory(device, size_info, use_count) {}

Blob2DMemory::~Blob2DMemory() {}

void Blob2DMemory::UpdateBlobMemorySizeInfo(BlobMemorySizeInfo info) {
    size_info_.data_type = info.data_type;
    size_info_.dims      = DimsVectorUtils::Max(size_info_.dims, info.dims);
}

}  // namespace TNN_NS