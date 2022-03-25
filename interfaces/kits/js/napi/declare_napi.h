/*
 * Copyright (C) 2021-2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef INTERFACES_KITS_JS_NAPI_DECLARE_NAPI_H
#define INTERFACES_KITS_JS_NAPI_DECLARE_NAPI_H

#include "napi/native_api.h"
#include "napi/native_node_api.h"

EXTERN_C_START
napi_value BytraceInit(napi_env env, napi_value exports);
EXTERN_C_END

#endif // INTERFACES_KITS_JS_NAPI_DECLARE_NAPI_H