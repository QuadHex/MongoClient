/*****************************************************************************
// * This source file is part of ArkGameFrame                                *
// * For the latest info, see https://github.com/ArkGame                     *
// *                                                                         *
// * Copyright(c) 2013 - 2017 ArkGame authors.                               *
// *                                                                         *
// * Licensed under the Apache License, Version 2.0 (the "License");         *
// * you may not use this file except in compliance with the License.        *
// * You may obtain a copy of the License at                                 *
// *                                                                         *
// *     http://www.apache.org/licenses/LICENSE-2.0                          *
// *                                                                         *
// * Unless required by applicable law or agreed to in writing, software     *
// * distributed under the License is distributed on an "AS IS" BASIS,       *
// * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.*
// * See the License for the specific language governing permissions and     *
// * limitations under the License.                                          *
// *                                                                         *
// *                                                                         *
// * @file      AFMongoClientTutorialPlugin.cpp                                              *
// * @author    Ark Game Tech                                                *
// * @date      2015-12-15                                                   *
// * @brief     AFMongoClientTutorialPlugin                                                  *
*****************************************************************************/
#include "AFMongoClientTutorialPlugin.h"
#include "AFCMongoTutorialModule.h"

#ifdef ARK_DYNAMIC_PLUGIN

ARK_EXPORT void DllStartPlugin(AFIPluginManager* pm)
{
    CREATE_PLUGIN(pm, AFMongoClientTutorialPlugin)
};

ARK_EXPORT void DllStopPlugin(AFIPluginManager* pm)
{
    DESTROY_PLUGIN(pm, AFMongoClientTutorialPlugin)
};

#endif
//////////////////////////////////////////////////////////////////////////

const int AFMongoClientTutorialPlugin::GetPluginVersion()
{
    return 0;
}

const std::string AFMongoClientTutorialPlugin::GetPluginName()
{
    return GET_CLASS_NAME(AFMongoClientTutorialPlugin);
}

void AFMongoClientTutorialPlugin::Install()
{

    REGISTER_MODULE(pPluginManager, AFIMongoTutorialModule, AFCMongoTutorialModule)

}

void AFMongoClientTutorialPlugin::Uninstall()
{
    UNREGISTER_MODULE(pPluginManager, AFIMongoTutorialModule, AFCMongoTutorialModule)
}

